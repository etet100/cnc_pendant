#include "Arduino.h"
#include "images.h"

// logo23.png
// width 40
// height 33
// mode RGB

static const ImageSize image_logo23_size = {40, 33, 2640};
static const uint16_t image_logo23[] PROGMEM = {
0xffff, 0xffff, 0xffff, 0xdfff, 0x5bff, 0xf9fe, 0x76f6, 0x14f6, 0xd2ed, 0x90ed, 0x6fed, 0x2eed, 0xcce4, 0x8bdc, 0x6adc, 0x49dc, 0x29d4, 0xc7cb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0x9dff, 0x5cff, 0x3bff, 0x3aff, 0xf9f6, 0x97e6, 0x15de, 0xb3d5, 0x52c5, 0xf0bc, 0x6a93, 0xc782, 0xe782, 0xe78a, 0xe78a, 0xe792, 0xe792, 0x0793, 0x079b, 0x079b, 0x079b, 0x079b, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x5de7, 0xdbd6, 0x59c6, 0xd6bd, 0x34ad, 0x0b63, 0x284a, 0x685a, 0x685a, 0x685a, 0x685a, 0x6862, 0x6862, 0x8862, 0x8862, 0x886a, 0x886a, 0x886a, 0x886a, 0xa86a, 0xa86a, 0xa872, 0xa872, 0xa872, 0xa872, 0xa772, 0xa872, 0xa872, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7df7, 0x1ce7, 0x9ad6, 0x38c6, 0xb6b5, 0xf39c, 0xaa5a, 0x0842, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x294a, 0x2942, 0x484a, 0x685a, 0x8862, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0x1be7, 0x99d6, 0x18c6, 0x96b5, 0x9194, 0xaa5a, 0x0842, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x484a, 0x494a, 0x494a, 0x494a, 0x2942, 0x494a, 0x4852, 0x685a, 0x8862, 0xa872, 0xc77a, 0xe78a, 0x0793, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0xfbe6, 0x79ce, 0x18c6, 0x95b5, 0x308c, 0x8a52, 0x284a, 0x4952, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x6852, 0x685a, 0x8862, 0x886a, 0xc77a, 0xe78a, 0x079b, 0x26ab, 0x46b3, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0xfbde, 0x79d6, 0x18c6, 0x95b5, 0x1084, 0x8952, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x6852, 0x685a, 0x6862, 0xa872, 0xc782, 0xe792, 0x26a3, 0x26ab, 0x46b3, 0x46b3, 0x46b3, 0x66bb, 0x66bb, 0x46bb, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0xfbe6, 0x79ce, 0x18c6, 0x96b5, 0x1084, 0x8a52, 0x284a, 0x494a, 0x4852, 0x4852, 0x6852, 0x8862, 0xa872, 0xe782, 0x0793, 0x26a3, 0x26ab, 0x46b3, 0x46b3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7def, 0x1ce7, 0x99d6, 0x38c6, 0x96b5, 0x3084, 0x8a52, 0x485a, 0xa86a, 0xc77a, 0xe78a, 0x079b, 0x26a3, 0x46ab, 0x46b3, 0x66bb, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x1ce7, 0x78d6, 0xd5cd, 0x11c5, 0x2cac, 0x2893, 0xe69a, 0x26a3, 0x46b3, 0x66bb, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0x7cff, 0x19f7, 0x76ee, 0xf3e5, 0x50dd, 0xcdd4, 0x6bd4, 0x08cc, 0x86c3, 0x66c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0xffff, 0xffff, 0xffff, 0xffff, 0x9dff, 0x3bff, 0xf9f6, 0xb7f6, 0x55f6, 0xd2ed, 0x6fed, 0xcce4, 0x6ae4, 0x49dc, 0x28dc, 0x28dc, 0x08d4, 0x86cb, 0x66c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0x9dff, 0x5bff, 0x1aff, 0x97f6, 0x13ee, 0x90ed, 0x2ded, 0xecec, 0xabe4, 0x8ae4, 0x8ae4, 0x69e4, 0x49e4, 0x48dc, 0x28dc, 0x28dc, 0x08d4, 0xa6cb, 0x66c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0xd2ed, 0x2eed, 0x0ded, 0xcbec, 0x8ae4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x28dc, 0x28dc, 0xa7cb, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0x69e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x28dc, 0x28dc, 0xe7d3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x28dc, 0x08d4, 0xa6cb, 0x65c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x28dc, 0x28dc, 0xc7cb, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46b3, 0x46b3, 0x46b3, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x28dc, 0x08d4, 0xa6cb, 0x65c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46bb, 0x46b3, 0x66b3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x29dc, 0x28dc, 0xc7cb, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46ab, 0x26a3, 0x079b, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49dc, 0x29dc, 0x08d4, 0xa6cb, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66c3, 0x66bb, 0x66bb, 0x66b3, 0x46b3, 0x46ab, 0x26a3, 0xe78a, 0xc77a, 0x886a, 0x685a, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x49e4, 0x49dc, 0x29dc, 0xe8d3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x079b, 0xe78a, 0xa872, 0x8862, 0x685a, 0x6852, 0x4852, 0x4852, 0x494a, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x89e4, 0x89e4, 0x69e4, 0x69e4, 0x69e4, 0x69dc, 0x49dc, 0x29dc, 0xe7cb, 0x66c3, 0x86c3, 0x86c3, 0x66bb, 0x26ab, 0x079b, 0xc782, 0xa872, 0x8862, 0x6862, 0x685a, 0x4852, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x49e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x8ae4, 0x8ae4, 0x8ae4, 0x8ae4, 0x69e4, 0x49e4, 0x28e4, 0x28dc, 0x28dc, 0x4ad4, 0x2ac4, 0x0793, 0xa782, 0xc87a, 0x886a, 0x8862, 0x685a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x28e4, 0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x49e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0x69e4, 0xaae4, 0xabe4, 0x2eed, 0x4fed, 0x71e5, 0xb2dd, 0xb3d5, 0x73c5, 0xee8b, 0x6952, 0x0842, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0x49e4, 0x89e4, 0x8ae4, 0xcbe4, 0x0ded, 0x4fed, 0xb1ed, 0x34f6, 0xb8f6, 0x1af7, 0x5cef, 0x5de7, 0xfbde, 0x9ad6, 0xb6bd, 0xef83, 0x6952, 0x284a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x28e4, 0x28e4, 0x28e4, 0x28e4, 0x48e4, 0x49e4, 0x69e4, 0x8ae4, 0x8ae4, 0xcbec, 0x2eed, 0xb1ed, 0x55f6, 0xf9f6, 0x9dff, 0xbeff, 0xdeff, 0xdfff, 0xdfff, 0xbef7, 0x7df7, 0x3ce7, 0xdbde, 0x9ad6, 0x17c6, 0x718c, 0xaa5a, 0x494a, 0x284a, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x28e4, 0x48e4, 0x48e4, 0x48e4, 0x49e4, 0xabe4, 0x4fed, 0xf3f5, 0x97f6, 0x5bff, 0xbeff, 0xdeff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xbef7, 0x9ef7, 0x5def, 0x1ce7, 0xbad6, 0x59ce, 0x34ad, 0x4d6b, 0x494a, 0x284a, 0x494a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0x69e4, 0xedec, 0x91ed, 0x55f6, 0xf9f6, 0x5cff, 0x9dff, 0xbeff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x9ef7, 0x9ef7, 0x9ef7, 0x9ef7, 0xbef7, 0x9ef7, 0x7def, 0x3ce7, 0xfbde, 0xbad6, 0xf7bd, 0xb29c, 0x0c63, 0x284a, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xf9f6, 0x3bff, 0x7cff, 0xdeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x7def, 0x3ce7, 0xfbde, 0xfbde, 0x3ce7, 0x9ef7, 0xffff, 0xbef7, 0x7def, 0x5def, 0x3ce7, 0xfbde, 0x79d6, 0xb6b5, 0xb29c, 0xae7b, 0xaa5a, 0xe741, 0x0742, 0x084a, 0x284a, 0x484a, 0x494a, 0x494a, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x7def, 0xdbde, 0x79ce, 0x38c6, 0x79ce, 0xf7bd, 0x9294, 0xd7bd, 0x9ef7, 0xffff, 0x9ef7, 0x7def, 0x5def, 0x3ce7, 0x3ce7, 0xbade, 0xf7bd, 0x14a5, 0x718c, 0xce7b, 0x4c6b, 0xeb62, 0x8a52, 0x6952, 0x494a, 
0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x7def, 0xdbde, 0x58ce, 0xb6bd, 0x96b5, 0x75ad, 0xef7b, 0x0842, 0x0b63, 0x34a5, 0xfbde, 0xbef7, 0xdfff, 0xbef7, 0x7df7, 0x5def, 0x3ce7, 0x3ce7, 0x3ce7, 0xfbe6, 0x58ce, 0x96b5, 0x14a5, 0xb29c, 0x7194, 0x518c, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 0xfbe6, 0x59ce, 0xb6b5, 0x34a5, 0xf3a4, 0xae7b, 0x494a, 0x6952, 0x484a, 0x484a, 0xef83, 0x18c6, 0x1ce7, 0x9ef7, 0xdfff, 0xbef7, 0x9ef7, 0x7def, 0x5def, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7df7, 0xdbde, 0x38c6, 0x75ad, 0xf3a4, 0xae7b, 0x8952, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x8a52, 0x508c, 0x38c6, 0x1be7, 0x5def, 0x7def, 0x9ef7, 0xbef7, 0xbef7, 0x9ef7, 0x9ef7, 0x7def, 0x7def, 0x7def, 0x7def
};
