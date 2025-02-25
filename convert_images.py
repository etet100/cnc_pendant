import os, glob
import hashlib
import pkg_resources
from pathlib import Path

Import("env")
installed = {pkg.key for pkg in pkg_resources.working_set}

if 'html2image' in installed:
    pass
else:
    env.Execute("$PYTHONEXE -m pip install html2image")

if 'Pillow' in installed:
    pass
else:
    env.Execute("$PYTHONEXE -m pip install Pillow")

from PIL import Image, ImageFont, ImageDraw
from html2image import Html2Image

def rgb888tobgr565(red, green, blue):
    return ((blue & 0xF8) << 8) | ((green & 0xFC) << 3) | (red >> 3)

def rgb888torgb565(red, green, blue):
    rgb565 = ((red >> 3) & 0x1F) << 11
    rgb565 |= ((green >> 2) & 0x3F) << 5
    rgb565 |= (blue >> 3) & 0x1F
    return rgb565

def swap16(x):
    return int.from_bytes(x.to_bytes(2, byteorder='little'), byteorder='big', signed=False)

def convert_image(image):
    image_name = Path(image).stem
    with Image.open(image) as im:
        print("%s (%d x %d)" % (image, im.size[0], im.size[1]))
        if im.mode != "RGB":
            im = im.convert("RGB")
        file = open("include\\images\\" + image_name + ".h", "w")
        file.write("#include \"Arduino.h\"\n")
        file.write("#include \"images.h\"\n")
        file.write("\n")
        file.write("// %s\n" % os.path.basename(image))
        file.write("// width %d\n" % im.size[0])
        file.write("// height %d\n" % im.size[1])
        file.write("// mode %s\n" % im.mode)
        file.write("\n")
        file.write("static const ImageSize image_%s_size = {%d, %d, %d};\n" % (image_name, im.size[0], im.size[1], im.size[0] * im.size[1] * 2))
        file.write("static const uint16_t image_%s[] PROGMEM = {\n" % image_name)
        px = im.load()
        for y in range(im.size[1]):
            for x in range(im.size[0]):
                r, g, b = px[x, y]
                file.write("0x%04x" % swap16(rgb888torgb565(r, g, b)))
                if (x < im.size[0] - 1 or y < im.size[1] - 1):
                    file.write(", ")
            file.write("\n")

    file.write("};\n")
    file.close()

    return image_name

def find_images():
    file = open("include\\images.h", "w")
    file.write("#ifndef H_IMAGES\n")
    file.write("#define H_IMAGES\n")
    file.write("#pragma once\n")
    file.write("\n")
    file.write("struct ImageSize {\n");
    file.write(" uint16_t width;\n");
    file.write(" uint16_t height;\n");
    file.write(" uint16_t size;\n");
    file.write("};\n");
    file.write("\n")

    for image in glob.glob("images/*.png") + glob.glob("images/*.bmp") + glob.glob("images/*.jpg") + glob.glob("images/logo/*.png"):
        if os.path.basename(image).startswith("_"):
            print("skipping %s" % image)
            continue
        image_name = convert_image(image)
        file.write("#include \"images/%s.h\" // %s\n" % (image_name, os.path.basename(image)))
    file.write("\n")
    file.write("#endif\n")
    file.close()

def build_rle_byte(color, count):
    return (count << 2) | color

def generate_character(char, font, width, height, top_offset, file, font_name, font_size):
    background_color = (1) #(255, 255, 255)
    text_color = 255 #(0, 0, 0)

    print("Generating character: %s (%d x %d)" % (char, width, height))
    file.write("// %s (%d x %d)\n" % (char, width, height))
    file.write("%d, %d,\n" % (width, height))

    image = Image.new("L", (width, height), background_color)

    draw = ImageDraw.Draw(image)
    draw.text((0, -top_offset), char, font=font, fill=text_color)

    list = []
    count = 0
    last_color = -1

    px = image.load()
    for y in range(height):
        for x in range(width):
            color = int(px[x, y] / 64)
            if (last_color == -1):
                last_color = color
                count = 0
            if (color == last_color and count < 63):
                count += 1
            else:
                list.append(build_rle_byte(last_color, count))
                last_color = color
                count = 1

    if (count > 0):
        list.append(build_rle_byte(last_color, count))

    # end of char
    list.append(0x00)

    # print("images\\%s.bmp" % char)
    image.save("images\\fonts\\%s_%s_%s.bmp" % (font_name, font_size, char))

    for (i, byte) in enumerate(list):
        file.write("0x%02x, " % byte)
        if ((i + 1) % 26 == 0):
            file.write("\n")

    file.write("\n")
    # print(len(list))
    # print(width * height)
    # print(width * height / 4)
    # print(list)

    # add 2 for width and height
    return len(list) + 2

def generate_font(font_path, font_size, chars, top_offset = 0):
    font_name = Path(font_path).stem
    print("Generating font: %s (%d px)" % (font_name, font_size))

    file = open("include\\fonts\\font.h", "a")
    file.write("\n")
    file.write("// %s (%d px)\n" % (os.path.basename(font_path), font_size))
    file.write("\n")
    file.write("static const uint8_t font_%s_%d[] PROGMEM = {\n" % (font_name, font_size))

    font = ImageFont.truetype(font_path, font_size)

    # Utwórz pusty obrazek (szerokość, wysokość, kolor tła)
    # width, height = 500, font_size + 5
    # background_color = 1; #(255, 255, 255)
    # image = Image.new("L", (width, height), 1)

    # # Utwórz obiekt rysowania
    # draw = ImageDraw.Draw(image)


    # map for font, 32 to 126
    map = {};
    for byte in range(32, 127):
        map[byte] = 0xFFFF
    map_pos = 0

    # chars = ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", "-", "X", "Y", "Z")
    # height = int(font.getbbox("0")[3])
    height = font.getmetrics()[0] - top_offset
    print(font.getmetrics())
    for char in chars:
        byte = bytes(char, encoding="ascii")[0]
        map[byte] = map_pos
        map_pos += generate_character(char, font, int(font.getlength(char)), height, top_offset, file, font_name, font_size)
        # print(font.getlength(char))
        # # text = "0123456789."
        # text_color = 255 #(0, 0, 0)

        # # Narysuj tekst na obrazku
        # pos = text_position.copy()
        # pos[0] += (28 - font.getlength(char)) / 2;
        # draw.text(pos, char, font=font, fill=text_color)
        # # draw.rectangle([text_position[0], 0, text_position[0] + 22, font_size], outline=(0, 0, 0))
        # text_position[0] += 30;

    # Zapisz obrazek do pliku
    # image.save('obrazek_z_tekstem.bmp')
    file.write("};\n")

    file.write("static const uint16_t font_%s_%d_map[] PROGMEM = {\n" % (font_name, font_size))

    for (i, byte) in map.items():
        file.write("%d /* %d */, " % (byte, i))
        if ((i + 1) % 10 == 0):
            file.write("\n")

    file.write("};\n")

    file.close()

def generate_colors(spec):
    file = open("include\\colors.h", "w")
    file.write("#ifndef H_COLORS\n")
    file.write("#define H_COLORS\n")
    file.write("\n")
    file.write("#include <stdint.h>\n");
    file.write("#include \"Arduino.h\"\n")
    file.write("\n")

    for (color1, color2, name) in spec:
        print("Generating color: %s %d %d" % (name, color1, color2))

        r1 = (color1 >> 11) & 0x1F
        g1 = (color1 >> 5) & 0x3F
        b1 = color1 & 0x1F

        r2 = (color2 >> 11) & 0x1F
        g2 = (color2 >> 5) & 0x3F
        b2 = color2 & 0x1F

        r_mid1 = int((2 * r1 + r2) / 3)
        g_mid1 = int((2 * g1 + g2) / 3)
        b_mid1 = int((2 * b1 + b2) / 3)

        r_mid2 = int((r1 + 2 * r2) / 3)
        g_mid2 = int((g1 + 2 * g2) / 3)
        b_mid2 = int((b1 + 2 * b2) / 3)

        color_mid1 = (r_mid1 << 11) | (g_mid1 << 5) | b_mid1
        color_mid2 = (r_mid2 << 11) | (g_mid2 << 5) | b_mid2

        file.write("static const uint16_t %s[] PROGMEM = {\n" % name.upper())
        file.write("    0x%04x, 0x%04x, 0x%04x, 0x%04x" % (swap16(color2), swap16(color_mid2), swap16(color_mid1), swap16(color1)))
        file.write("};\n")

    file.write("\n#endif\n")
    file.close()

print("--------------------------------")
print("Generating fonts images")
#generate_font("fonts/7seg.ttf", 40) # DSEG7Classic-Bold.ttf
file = open("include\\fonts\\font.h", "w")
file.write("#ifndef H_FONT\n")
file.write("#define H_FONT\n")
file.write("#pragma once\n")
file.write("#include \"Arduino.h\"\n")
file.close()

# generate_font("fonts/7seg.ttf", 32, ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", "-", ",")) # DSEG7Classic-Bold.ttf
# generate_font("fonts/manolomono.otf", 13, ("a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l",
# generate_font("fonts/manolomono.otf", 25, ("X", "Y", "Z"))
# generate_font("fonts/manolomono.otf", 41, ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", "-"))
# generate_font("fonts/manolomono.otf", 32, ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "."))
generate_font("fonts/manolomono.otf", 13, "abcdefghijklmonpqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ")
generate_font("fonts/manolomono.otf", 15, "abcdefghijklmonpqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.:- ")
generate_font("fonts/manolomono.otf", 25, "XYZ")
generate_font("fonts/consolas.ttf", 12, "abcdefghijklmonpqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ")
generate_font("fonts/consolas.ttf", 32, "0123456789.-", 4)
generate_font("fonts/consolas.ttf", 44, "0123456789.-", 4)

file = open("include\\fonts\\font.h", "a")
file.write("#endif\n")
file.close()

print("--------------------------------")

print("Converting HTML to images...")

def html2image(html_file, image_file, size):
    if len(size) == 2:
        size = size + (0, )

    html = Path(html_file).read_text()
    absolute = str(Path(html_file).parent.absolute()).replace("\\", "/")
    md5_file = absolute + "/" + image_file + ".md5"
    print(md5_file)
    md5 = hashlib.md5(html.encode()).hexdigest()
    if Path(md5_file).exists():
        md5_saved = Path(md5_file).read_text()
        if (md5 == md5_saved):
            print(f"Skipping {html_file} {image_file}")
            return
    Path(md5_file).write_text(md5)

    html = html.replace("url('", f"url('{absolute}/")
    html = html.replace("href=\"", f"href=\"{absolute}/")

    # '--virtual-time-budget=100',
    hti = Html2Image(output_path="./images", keep_temp_files=True, custom_flags=['--hide-scrollbars', '--no-sandbox'])
    hti.screenshot(html_str=html, save_as=image_file)
    img = Image.open("./images/" + image_file)
    img2 = img.crop((0, size[2], size[0], size[2] + size[1]))
    img2.save("./images/" + image_file)

html2image("proj/main/wifi.html", "wifi.png", (40, 102))
html2image("proj/main/alive.html", "alive.png", (16, 68))
html2image("proj/main/buttons.html", "btn_start.png", (53, 40, 0))
html2image("proj/main/buttons.html", "btn_stop.png", (53, 40, 80))
html2image("proj/main/buttons.html", "btn_pause.png", (53, 40, 160))
html2image("proj/main/buttons.html", "btn_home.png", (53, 40, 240))
html2image("proj/main/buttons.html", "btn_spindle.png", (53, 40, 320))
html2image("proj/main/buttons.html", "btn_reset.png", (53, 40, 400))
html2image("proj/main/buttons.html", "btn_settings.png", (53, 40, 480))
html2image("proj/main/buttons.html", "btn_power.png", (53, 40, 560))
# html2image("proj/main/buttons.html", "btn_cancel.png", (53, 40, 640))
# html2image("proj/main/buttons.html", "btn_close.png", (53, 40, 720))
print("--------------------------------")

print("Converting images to C arrays...")
find_images()
print("--------------------------------")

generate_colors(
    (
        # text color, background color, name
        (0xFFFF, 0x0000, "white_on_black"),
        (0xFFFF, 0x051F, "white_on_blue"),
    )
)
