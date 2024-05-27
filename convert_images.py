import os, glob
import pkg_resources

# Import("env")
# env.Execute("$PYTHONEXE -m pip --version")

from pathlib import Path
from PIL import Image

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

    for image in glob.glob("images/*.png") + glob.glob("images/*.bmp"):
        image_name = convert_image(image)
        file.write("#include \"images/%s.h\" // %s\n" % (image_name, os.path.basename(image)))
    file.write("\n")
    file.write("#endif\n")
    file.close()

print("--------------------------------")
print("Converting images to C arrays...")
find_images()
print("--------------------------------")
