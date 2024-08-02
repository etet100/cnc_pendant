#include "Arduino.h"

// logo34.png
// width 40
// height 33
// mode RGB

static const uint16_t image_logo34_size[] PROGMEM = {40, 33, 2640};
static const uint16_t image_logo34[] PROGMEM = {
0x5def, 0x5def, 0x3cef, 0x3ce7, 0x1ce7, 0xfbde, 0xdbde, 0xbad6, 0x99d6, 0x38c6, 0x54ad, 0xef83, 0xcb5a, 0x6952, 0x284a, 0x284a, 0x484a, 0x484a, 0x484a, 0x484a, 0x6952, 0x0842, 0x6952, 0x7194, 0xdbde, 0xbeff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xfbde, 0xfbde, 0xdbde, 0xdade, 0xbad6, 0x59ce, 0x96b5, 0xf39c, 0x1084, 0x4d6b, 0xcb5a, 0x6952, 0x284a, 0x284a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x6952, 0xe741, 0xcb5a, 0x14a5, 0xfbe6, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xd29c, 0xb29c, 0x9294, 0x518c, 0xef83, 0xae7b, 0x4d6b, 0xeb62, 0x6952, 0x0842, 0x0842, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x6952, 0x494a, 0x284a, 0x284a, 0x8e73, 0xb6bd, 0x5def, 0xffff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xaa5a, 0xaa52, 0x8952, 0x484a, 0x0842, 0xe741, 0x0842, 0x284a, 0x484a, 0x494a, 0x6952, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x0842, 0x0842, 0x0c63, 0x518c, 0x99d6, 0xdeff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x484a, 0x494a, 0x494a, 0x494a, 0x6952, 0x6952, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x0842, 0x484a, 0xaa5a, 0xae7b, 0xb6b5, 0x7def, 0xdfff, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x284a, 0x484a, 0x6952, 0xaa52, 0x8d73, 0x75ad, 0x3ce7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0xcb5a, 0x3084, 0xf7bd, 0x1ce7, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x284a, 0x284a, 0x284a, 0x6952, 0x2c6b, 0x308c, 0x55ad, 0x79ce, 0x1ce7, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xcb5a, 0xeb5a, 0x0c63, 0x2c6b, 0x8e73, 0xef7b, 0x7194, 0x14a5, 0xb6bd, 0x59ce, 0xfbde, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x75ad, 0x96b5, 0xb6bd, 0xf7bd, 0x38ce, 0x9ad6, 0x1ce7, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
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
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 
0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xbef7, 0x5de7, 0xfcd6, 0xbcc6, 0xbcc6, 0xdcce, 0x3ddf, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xbef7, 0x3ce7, 0x9ad6, 0x38ce, 0x58ce, 0x9ad6, 0x3ce7, 0xbef7, 0xffff, 
0x79d6, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x5de7, 0x9bbe, 0xda8d, 0x3965, 0xf954, 0xf94c, 0x195d, 0x9a7d, 0x3ba6, 0xfcd6, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x1ce7, 0xf7c5, 0x9294, 0x8d73, 0xeb62, 0xeb62, 0x8d73, 0xb29c, 0x17c6, 0x3ce7, 
0x54ad, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0x3ba6, 0xb944, 0x181c, 0x381c, 0x381c, 0x381c, 0x381c, 0x1814, 0x582c, 0x7a6d, 0xfcd6, 0xdeff, 0xffff, 0xffff, 0xbef7, 0xfbde, 0xf39c, 0x494a, 0x4429, 0x6531, 0x8631, 0x8631, 0x8531, 0x4429, 0x6952, 0x13a5, 
0xd39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0xbbc6, 0xd944, 0xd803, 0x3824, 0xf85c, 0x797d, 0x9985, 0x396d, 0x782c, 0xb80b, 0x181c, 0x9a75, 0x5de7, 0xffff, 0xdfff, 0x3ce7, 0xd39c, 0xc639, 0xa218, 0x8531, 0x2c6b, 0x308c, 0x508c, 0x4d6b, 0x8631, 0xc218, 0xe741, 
0xf39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9df7, 0xda8d, 0x180c, 0xf80b, 0x3875, 0x9ac6, 0x1cdf, 0x3de7, 0xdbd6, 0xf99d, 0x9834, 0xd80b, 0x9834, 0xfdd6, 0xffff, 0xbff7, 0xf7c5, 0x0742, 0x8218, 0x0742, 0xd39c, 0x9ad6, 0xfbde, 0x1be7, 0x79d6, 0x14a5, 0x0842, 0x4008, 
0xf39c, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7df7, 0x7975, 0xd803, 0x381c, 0x788d, 0xfbe6, 0x9ef7, 0xbef7, 0x9eff, 0x1cdf, 0xfa95, 0x395d, 0x9a7d, 0x3ddf, 0xffff, 0x3ce7, 0x518c, 0xa218, 0xe320, 0x718c, 0x3ce7, 0xdfff, 0xdeff, 0xdfff, 0xbef7, 0x5def, 0x308c, 0xc320, 
0xf39c, 0x7def, 0xffff, 0xdfff, 0xdfff, 0xbef7, 0xbef7, 0xbef7, 0xbef7, 0xdfff, 0xdfff, 0xffff, 0x7df7, 0xba85, 0x1814, 0xf80b, 0xb844, 0xd995, 0x7bb6, 0xfcd6, 0x5def, 0x5def, 0x1cdf, 0xdcce, 0x5de7, 0xbef7, 0xffff, 0x59ce, 0xeb5a, 0xa218, 0x8531, 0x96b5, 0x5def, 0x1ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x1ce7, 0x14a5, 0xe741, 
0xd39c, 0x5def, 0xbef7, 0x59ce, 0x34ad, 0x54ad, 0x54ad, 0x54ad, 0x54ad, 0x34a5, 0xb6b5, 0xdbde, 0x7df7, 0x9bbe, 0xd944, 0xd803, 0xf80b, 0x5824, 0xd94c, 0x596d, 0xda8d, 0x3aae, 0x9bc6, 0x3ce7, 0xbef7, 0xdfff, 0xffff, 0xb6bd, 0x0742, 0xc218, 0x8631, 0xae7b, 0x7194, 0x518c, 0x7194, 0x7194, 0x518c, 0x518c, 0x8d73, 0xc639, 
0xd39c, 0x5def, 0x3ce7, 0xcf7b, 0x6529, 0x8631, 0x8531, 0x8531, 0x8631, 0x6529, 0xe741, 0x34ad, 0x7def, 0x9ef7, 0x1b9e, 0xd944, 0x5824, 0x1814, 0xf80b, 0xf813, 0x181c, 0x782c, 0x195d, 0xfa8d, 0xdcce, 0x9ef7, 0xffff, 0x55ad, 0xa639, 0xc218, 0x0321, 0x4429, 0x6531, 0x6531, 0x8531, 0x6531, 0x6531, 0x6531, 0x4529, 0x2429, 
0xd39c, 0x5def, 0x3ce7, 0xce7b, 0x4529, 0x6531, 0x6531, 0x6531, 0x8531, 0x4529, 0xe741, 0x34a5, 0x9ef7, 0xffff, 0x5de7, 0xbbc6, 0xda8d, 0x395d, 0xb944, 0x382c, 0x181c, 0xf80b, 0xf80b, 0x3824, 0x395d, 0xdcce, 0xdeff, 0x34ad, 0x8531, 0xc218, 0x8531, 0x8952, 0xeb62, 0xeb62, 0xeb62, 0xeb62, 0xeb62, 0xcb5a, 0xcb5a, 0x0b63
};