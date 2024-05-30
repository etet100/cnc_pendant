import os, glob
import pkg_resources
from pathlib import Path
from PIL import Image, ImageFont, ImageDraw

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
        file.write("\n")
        file.write("// %s\n" % os.path.basename(image))
        file.write("// width %d\n" % im.size[0])
        file.write("// height %d\n" % im.size[1])
        file.write("// mode %s\n" % im.mode)
        file.write("\n")
        file.write("static const uint16_t image_%s_size[] PROGMEM = {%d, %d, %d};\n" % (image_name, im.size[0], im.size[1], im.size[0] * im.size[1] * 2))
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

    for image in glob.glob("images/*.png") + glob.glob("images/*.bmp") + glob.glob("images/*.jpg"):
        image_name = convert_image(image)
        file.write("#include \"images/%s.h\" // %s\n" % (image_name, os.path.basename(image)))
    file.write("\n")
    file.write("#endif\n")
    file.close()

def build_rle_byte(color, count):
    return (count << 2) | color

def generate_character(char, font, width, height, file):
    background_color = (1) #(255, 255, 255)
    text_color = 255 #(0, 0, 0)

    print("Generating character: %s (%d x %d)" % (char, width, height))
    file.write("// %s (%d x %d)\n" % (char, width, height))
    file.write("%d, %d,\n" % (width, height))

    image = Image.new("L", (width, height), background_color)

    draw = ImageDraw.Draw(image)
    draw.text((0, 0), char, font=font, fill=text_color)

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
    # image.save("images\\%s.bmp" % char)

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

def generate_font(font_path, font_size):
    font_name = Path(font_path).stem

    file = open("include\\fonts\\font.h", "w")
    file.write("#include \"Arduino.h\"\n")
    file.write("\n")
    file.write("// %s\n" % os.path.basename(font_path))
    file.write("\n")
    file.write("static const uint8_t font_%s[] PROGMEM = {\n" % font_name)

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

    chars = ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".")
    for (i, char) in enumerate(chars):
        byte = bytes(char, encoding="ascii")[0]
        map[byte] = map_pos
        map_pos += generate_character(char, font, int(font.getlength(char)), font_size + 5, file)
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

    file.write("static const uint16_t font_%s_map[] PROGMEM = {\n" % font_name)

    for (i, byte) in map.items():
        file.write("%d /* %d */, " % (byte, i))
        if ((i + 1) % 10 == 0):
            file.write("\n")

    file.write("};\n")

    file.close()

print("--------------------------------")
print("Generating fonts images")
#generate_font("fonts/7seg.ttf", 40) # DSEG7Classic-Bold.ttf
generate_font("fonts/7seg.ttf", 30) # DSEG7Classic-Bold.ttf
print("Converting images to C arrays...")
find_images()
print("--------------------------------")
