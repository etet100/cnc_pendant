#include "Arduino.h"
#include "images.h"

// logo42.png
// width 40
// height 33
// mode RGB

static const ImageSize image_logo42_size = {40, 33, 2640};
static const uint16_t image_logo42[] PROGMEM = {
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x718c, 0x1ce7, 0x3ce7, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0xaa5a, 0xf39c, 0x3ce7, 0x5def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x4d6b, 0x96b5, 0x3ce7, 0x7def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0xe741, 0x0f84, 0x79ce, 0x3ce7, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0xd39c, 0x1ce7, 0x3cef, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x2c63, 0xb6b5, 0x5def, 0x7def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0x9294, 0x9ad6, 0x5def, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0xcb5a, 0xd7bd, 0x5def, 0x7def, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x6952, 0xb29c, 0xdbde, 0x7def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x494a, 0x6d73, 0x79ce, 0x5def, 0x7df7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x0c63, 0x96b5, 0x1ce7, 0x7def, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0xcb5a, 0xd39c, 0x1ce7, 0x5def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0xaa5a, 0xb29c, 0xfbde, 0x5def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x6952, 0xaa5a, 0xd39c, 0xdbde, 0x5def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x484a, 0x494a, 0x0c63, 0x34a5, 0xdbde, 0x7def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x6952, 0xef7b, 0x96b5, 0x1ce7, 0x7def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xb294, 0x38c6, 0x5def, 0x7def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x1ce7, 0x7def, 0x9df7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x7def, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0xdeff, 0xbdff, 0x7cff, 0x5cff, 0x7cff, 0xdeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0xdeff, 0xbdff, 0x7cff, 0x5bff, 0x3aff, 0x3aff, 0x3aff, 0x3aff, 0x5bff, 0xbeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x7cff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdeff, 0x9dff, 0x7cff, 0x3bff, 0x1aff, 0xf9fe, 0xf9f6, 0xf9f6, 0xf9fe, 0xf9fe, 0x1aff, 0x1aff, 0x3bff, 0x9dff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd8f6, 0xffff, 0xffff, 0xffff, 0xdfff, 0xbeff, 0x7cff, 0x5bff, 0x3aff, 0x19f7, 0xf8f6, 0xd8f6, 0xb7f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9f6, 0x19ff, 0x1aff, 0x3aff, 0x3bff, 0x7cff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x55f6, 0x7dff, 0x7cff, 0x3bff, 0x1af7, 0xd8f6, 0xb7f6, 0x76f6, 0x75f6, 0x75f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb8f6, 0xd8f6, 0xd8f6, 0xf9fe, 0xf9fe, 0x1aff, 0x3aff, 0x3bff, 0x5cff, 0xbeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xf3f5, 0x76f6, 0x55f6, 0x34f6, 0x13f6, 0x13f6, 0x34f6, 0x34f6, 0x55f6, 0x75f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb8f6, 0xd8f6, 0xd8f6, 0xf9fe, 0x19ff, 0x1aff, 0x3aff, 0x3aff, 0x5bff, 0x9dff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xf2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x13f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb8f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x1aff, 0x3aff, 0x3bff, 0x5bff, 0x7cff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xd2f5, 0xf3f5, 0x13f6, 0x14f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb8f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x1aff, 0x3aff, 0x3bff, 0x5bff, 0x7cff, 0xbeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x14f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x1aff, 0x3aff, 0x3bff, 0x5bff, 0x5bff, 0x9dff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x14f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9fe, 0xf9fe, 0x1aff, 0x3aff, 0x3aff, 0x5bff, 0x5bff, 0x7cff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x14f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x1aff, 0x3aff, 0x3aff, 0x5bff, 0x5bff, 0x7cff, 0xdeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x14f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x96f6, 0x97f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x19ff, 0x1aff, 0x3aff, 0x5bff, 0x5bff, 0x7cff, 0x9dff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x13f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x76f6, 0x96f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9f6, 0xf9fe, 0x19ff, 0x1aff, 0x3aff, 0x5bff, 0x5bff, 0x7cff, 0x9cff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd2f5, 0xd2f5, 0xf2f5, 0xf3f5, 0x13f6, 0x13f6, 0x34f6, 0x34f6, 0x55f6, 0x55f6, 0x76f6, 0x76f6, 0x96f6, 0xb7f6, 0xb7f6, 0xd8f6, 0xd8f6, 0xf9fe, 0xf9fe, 0x19ff, 0x1aff, 0x3aff, 0x5bff, 0x7cff, 0x9cff, 0xbdff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};
