#include "Arduino.h"
#include "images.h"

// logo21.png
// width 40
// height 33
// mode RGB

static const ImageSize image_logo21_size = {40, 33, 2640};
static const uint16_t image_logo21[] PROGMEM = {
0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0x284a, 0x284a, 0x284a, 0x494a, 0x494a, 0x6952, 0x6952, 0x494a, 0x494a, 0x284a, 0x0742, 0x34ad, 0x3ce7, 0x7def, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x484a, 0x284a, 0x284a, 0x494a, 0x6952, 0x6952, 0x8952, 0xaa5a, 0x0c63, 0x4d6b, 0x6d73, 0x8d73, 0x8e73, 0x6d73, 0x4d6b, 0x0c63, 0xaa5a, 0x17c6, 0x9ef7, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 
0x494a, 0x484a, 0x6952, 0x0c63, 0xcf7b, 0x718c, 0xf39c, 0x54ad, 0x75b5, 0xb6b5, 0xd7bd, 0xd7bd, 0xd7bd, 0xd6bd, 0xb7bd, 0xb6bd, 0xb6b5, 0xfbde, 0xbef7, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 
0x0b63, 0xef83, 0xb29c, 0x75ad, 0xf7c5, 0x79ce, 0xdbde, 0x1ce7, 0x1ce7, 0x1ce7, 0x1ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3cef, 0x7def, 0x9ef7, 0x9ef7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0xfbde, 
0x34ad, 0x38c6, 0xdbde, 0x1ce7, 0x1ce7, 0x3ce7, 0x3ce7, 0x1ce7, 0x1ce7, 0x1ce7, 0x1ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x5def, 0x7def, 0x9ef7, 0x9ef7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 0xfbde, 0x38ce, 
0x1ce7, 0x1ce7, 0x3ce7, 0x3ce7, 0x1ce7, 0x1be7, 0xfbe6, 0xfbe6, 0x1be7, 0x1ce7, 0x1ce7, 0x1ce7, 0x1ce7, 0x3ce7, 0x3ce7, 0x5cef, 0x5def, 0x7def, 0x7def, 0x9ef7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x5def, 0x9ad6, 0xb6bd, 
0x3ce7, 0x1ce7, 0xfbde, 0xfbde, 0xdbde, 0xbad6, 0x79ce, 0x38ce, 0x18c6, 0xf7bd, 0xd7bd, 0xd7bd, 0xf7bd, 0xf7bd, 0x18c6, 0x58ce, 0x99d6, 0xdbde, 0x3ce7, 0x7def, 0x7def, 0x9ef7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x5def, 0x79d6, 0xb6bd, 
0xdbde, 0xbade, 0x9ad6, 0x58ce, 0xf7c5, 0x96b5, 0x13a5, 0x7194, 0x1084, 0xce7b, 0x8e73, 0x6d73, 0x6d73, 0x8e73, 0xce7b, 0x3084, 0x9294, 0x34ad, 0xf7bd, 0x79ce, 0xdbde, 0x3ce7, 0x7def, 0x9ef7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 0xdbde, 0x18c6, 
0x59ce, 0x38c6, 0x96b5, 0x9294, 0xcf7b, 0x2c6b, 0xeb62, 0xca5a, 0x8a52, 0x6952, 0x6952, 0x494a, 0x494a, 0x6952, 0x6952, 0x8a52, 0xcb5a, 0x0b63, 0x4d6b, 0xef7b, 0xf3a4, 0x18c6, 0xdbde, 0x3ce7, 0x7def, 0x9ef7, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x5def, 0xdbde, 
0x55ad, 0x308c, 0x6d6b, 0xeb5a, 0x6952, 0x284a, 0x284a, 0x484a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x284a, 0x284a, 0x6952, 0xeb62, 0x8e73, 0x9194, 0xf7c5, 0xfbde, 0x5def, 0x7def, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7def, 
0x6d6b, 0xaa52, 0x284a, 0x484a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0xaa5a, 0x8e73, 0xd39c, 0x59ce, 0x5def, 0x5def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 
0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x284a, 0xca5a, 0x1084, 0xd7bd, 0x1ce7, 0x5def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbeff, 0x5bff, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x6952, 0x6d73, 0x75b5, 0xfbde, 0x7def, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xbdff, 0x5bff, 0xf9fe, 0x96f6, 0xf2ed, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x0c63, 0x55ad, 0xdbde, 0x7def, 0x9ef7, 0x9dff, 0x9dff, 0x3aff, 0x76f6, 0xd2ed, 0x90ed, 0x4eed, 0x2eed, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0xeb62, 0x75ad, 0xdbe6, 0xd9ee, 0x55ee, 0xd2ed, 0x6fed, 0x2eed, 0x0ded, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x685a, 0xab93, 0xeecc, 0x2fe5, 0x0de5, 0xece4, 0xecec, 0xecec, 0xedec, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x2942, 0x4852, 0x886a, 0xc782, 0x079b, 0x26ab, 0xa7c3, 0x49dc, 0xabe4, 0xcbe4, 0xcce4, 0xecec, 0xedec, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x2942, 0x494a, 0x6862, 0xa772, 0xe78a, 0x26a3, 0x46b3, 0x66bb, 0x66bb, 0x66bb, 0xe8cb, 0x8bdc, 0xabe4, 0xcce4, 0xece4, 0xecec, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x294a, 0x4852, 0x8862, 0xa77a, 0x0793, 0x46b3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46bb, 0x87bb, 0x29cc, 0xabe4, 0xcce4, 0xcce4, 0xecec, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x8862, 0xc77a, 0x26a3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46bb, 0xa7c3, 0x8adc, 0xabe4, 0xcce4, 0xecec, 0x0ded, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x6862, 0xc782, 0x26ab, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46bb, 0x86bb, 0x09cc, 0xabdc, 0xcce4, 0xece4, 0xedec, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x8862, 0xe78a, 0x46ab, 0x66bb, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0xa7c3, 0x8bdc, 0xcce4, 0xcce4, 0xecec, 0x0ded, 0x0ded, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x8862, 0xe78a, 0x26ab, 0x66bb, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x66bb, 0x4ad4, 0xabe4, 0xcce4, 0xece4, 0x0ded, 0xedec, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x6852, 0xc77a, 0x26a3, 0x66bb, 0x86cb, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46bb, 0x66bb, 0xe8cb, 0x8bdc, 0xcce4, 0xece4, 0x0ded, 0xede4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0xe782, 0x66bb, 0x86cb, 0x86c3, 0x66c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0xa7c3, 0x6adc, 0xcce4, 0xcce4, 0xedec, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0xc782, 0x66bb, 0x85cb, 0x66c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66b3, 0x66bb, 0x4ad4, 0xcce4, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x6862, 0x46bb, 0x85cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x4ad4, 0xace4, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x294a, 0x6852, 0xe78a, 0x86c3, 0x85cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x29cc, 0xabdc, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x2942, 0x685a, 0x26ab, 0x86cb, 0x86cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x09cc, 0x8bdc, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x2942, 0x8862, 0x66bb, 0x86cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x09cc, 0x8bdc, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x2942, 0x8862, 0x66c3, 0x86cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x09cc, 0x8bdc, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x4852, 0x2942, 0x6862, 0x46b3, 0x86cb, 0x86cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x09cc, 0x8bdc, 0xcce4, 0xece4, 0xece4, 
0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x2942, 0x685a, 0x0793, 0x86c3, 0x85cb, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x86c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66c3, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x66bb, 0x46b3, 0x46b3, 0x09cc, 0xabdc, 0xcce4, 0xece4, 0xece4
};
