#include "Arduino.h"

// logo35.png
// width 40
// height 33
// mode RGB

static const uint16_t image_logo35_size[] PROGMEM = {40, 33, 2640};
static const uint16_t image_logo35[] PROGMEM = {
0xd39c, 0x5def, 0x9ef7, 0xf7bd, 0x9294, 0xb294, 0x9294, 0xb294, 0xb294, 0x9194, 0x14a5, 0x9ad6, 0x9ef7, 0xbef7, 0x7def, 0x5def, 0x3de7, 0xdcce, 0x9bbe, 0x1aa6, 0x997d, 0xd94c, 0x381c, 0xd803, 0xf80b, 0xfa95, 0x7def, 0x75b5, 0xc639, 0xc218, 0x494a, 0x75ad, 0x79d6, 0x59ce, 0x79d6, 0x79d6, 0x79d6, 0x59ce, 0x18c6, 0xf7bd, 
0xf39c, 0x7def, 0xdfff, 0x7def, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x5def, 0x9ef7, 0x9ef7, 0xbcbe, 0xda8d, 0x5bae, 0x7def, 0xbeff, 0xbeff, 0x7df7, 0x1cdf, 0x7abe, 0x5875, 0xf80b, 0xd803, 0x3965, 0x1ddf, 0x17c6, 0x8952, 0xa218, 0xc639, 0x38c6, 0xffff, 0xdfff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdbde, 0x55ad, 
0xf39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7df7, 0x7a75, 0x3824, 0xf954, 0x9bc6, 0x9df7, 0xdfff, 0xdff7, 0xbef7, 0x5cf7, 0xf9ad, 0xf80b, 0xd803, 0x195d, 0x1cd7, 0xfbe6, 0xef7b, 0x8118, 0xc320, 0x9294, 0x3ce7, 0xdfff, 0xdfff, 0xdfff, 0xbef7, 0x9ef7, 0x13a5, 0x284a, 
0xf39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9df7, 0x7a6d, 0xd803, 0x1814, 0x396d, 0x9bc6, 0x3cef, 0x7df7, 0x5cef, 0xbace, 0x587d, 0xf803, 0xd803, 0xba85, 0x5def, 0xbef7, 0x96b5, 0x8531, 0xa218, 0x284a, 0xd39c, 0xbad6, 0x5def, 0x7def, 0xfbde, 0x95b5, 0xaa5a, 0x6110, 
0xd39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x7bb6, 0xb83c, 0xb803, 0x181c, 0xf85c, 0xb985, 0xfa95, 0xb98d, 0x185d, 0x3824, 0xd803, 0x9934, 0xbcc6, 0xdeff, 0xffff, 0xfbde, 0x308c, 0x8531, 0x8110, 0xc639, 0xae73, 0xb29c, 0xd39c, 0x1084, 0x484a, 0xc218, 0xe320, 
0x34ad, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7df7, 0x1b9e, 0xb944, 0x381c, 0x1814, 0x381c, 0x3824, 0x3824, 0x3814, 0x381c, 0xd944, 0x5ba6, 0x7eef, 0xffff, 0xffff, 0xbef7, 0xdade, 0x508c, 0x0742, 0x4429, 0x6531, 0x6531, 0x6531, 0x6531, 0x6531, 0xa639, 0x8e73, 
0x59ce, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7de7, 0x9bbe, 0xba85, 0x1955, 0xb944, 0xb944, 0xb944, 0x1955, 0xba85, 0xbcc6, 0x7def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xbef7, 0xfbde, 0xb6b5, 0x1084, 0xeb62, 0x6952, 0x494a, 0xaa5a, 0xae7b, 0x34a5, 0xbade, 
0x7def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 0x3ddf, 0xdcce, 0xbcbe, 0x9bbe, 0xbcc6, 0xdcce, 0x5de7, 0xbeff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 0xfbde, 0x59ce, 0x18c6, 0x18c6, 0x38ce, 0xbad6, 0x7def, 0xdfff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdeff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 0xf80b, 
0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 
0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803, 0xb803
};
