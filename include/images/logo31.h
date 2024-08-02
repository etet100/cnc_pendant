#include "Arduino.h"

// logo31.png
// width 40
// height 33
// mode RGB

static const uint16_t image_logo31_size[] PROGMEM = {40, 33, 2640};
static const uint16_t image_logo31[] PROGMEM = {
0xdfff, 0xbef7, 0x5def, 0xdbde, 0x38ce, 0xb6bd, 0x54ad, 0xb29c, 0xef83, 0x0b63, 0x6952, 0x494a, 0x284a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0x284a, 0x484a, 0x6952, 0x8a52, 0xaa5a, 0xcb5a, 0xcb5a, 0xeb5a, 0xcb5a, 0xcb5a, 0xca5a, 0xaa5a, 0x8a52, 0x6952, 0x494a, 0x284a, 0x284a, 0x284a, 0x494a, 0x494a, 
0x9ef7, 0x3ce7, 0x9ad6, 0xf7c5, 0x75b5, 0xf3a4, 0x718c, 0x4d6b, 0xaa5a, 0x494a, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x284a, 0x284a, 0x6952, 0x8952, 0xaa5a, 0x4d6b, 0xef83, 0x9194, 0xf3a4, 0x34ad, 0x75b5, 0x96b5, 0x95b5, 0x75ad, 0x34a5, 0xd39c, 0x7194, 0x0f84, 0x6d73, 0xeb5a, 0x8a52, 0x6952, 0x494a, 0x484a, 
0x1be7, 0x59ce, 0xb6bd, 0x54ad, 0xd39c, 0x1084, 0x0c63, 0x6952, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x484a, 0x484a, 0x484a, 0x494a, 0xca5a, 0xcf7b, 0xf39c, 0xb6bd, 0x59ce, 0x9ad6, 0xfbde, 0x3ce7, 0x5def, 0x7def, 0x7def, 0x7def, 0x7def, 0x3de7, 0x1ce7, 0xbad6, 0x59ce, 0xf7bd, 0x75ad, 0xb29c, 0xce83, 0xea62, 0x685a, 
0x38ce, 0x96b5, 0x34a5, 0xb294, 0xcf7b, 0xcb5a, 0x494a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x494a, 0x4c6b, 0xb294, 0xb6b5, 0x79d6, 0x3ce7, 0xbef7, 0xdfff, 0xbef7, 0xbef7, 0xbef7, 0xbef7, 0x9ef7, 0x9ef7, 0xbef7, 0x9ef7, 0x7df7, 0x5cf7, 0x3bf7, 0xfaf6, 0xb8ee, 0x77ee, 0xd4dd, 0x11c5, 0x6eb4, 0xeca3, 
0x75b5, 0x13a5, 0x9294, 0xae7b, 0xaa5a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0x4d6b, 0xb294, 0xf7bd, 0x1ce7, 0xbeff, 0xbef7, 0x9ef7, 0x7eef, 0x7def, 0x5de7, 0x3ce7, 0x1be7, 0xfae6, 0xb9e6, 0x98e6, 0x97e6, 0x77e6, 0x56ee, 0x35ee, 0x14ee, 0xf3ed, 0xd3ed, 0xb2ed, 0xb1ed, 0x91ed, 0x91e5, 0x50dd, 
0x13a5, 0x9294, 0xae7b, 0xaa5a, 0x284a, 0x494a, 0x494a, 0x484a, 0x494a, 0x284a, 0x284a, 0xaa5a, 0x0f84, 0xd7bd, 0x5def, 0xbef7, 0x9ef7, 0x9eef, 0x5cef, 0xfbe6, 0xb9e6, 0x98de, 0x77de, 0x36de, 0xf5dd, 0xb3dd, 0x71dd, 0x30d5, 0x0fdd, 0x0edd, 0x0fdd, 0x2fdd, 0x50e5, 0x70e5, 0x70e5, 0x70e5, 0x90e5, 0xb1ed, 0xb1ed, 0xb1ed, 
0x13a5, 0xef7b, 0xaa5a, 0x284a, 0x494a, 0x494a, 0x494a, 0x494a, 0x284a, 0x284a, 0x2c6b, 0xf49c, 0xfbde, 0x9ef7, 0x7df7, 0x3cef, 0xdae6, 0x99de, 0x57de, 0xf5dd, 0x92d5, 0x30d5, 0xeecc, 0xadcc, 0x6ccc, 0x4bc4, 0x2bc4, 0x2bbc, 0x0abc, 0x0abc, 0x2bc4, 0x6cc4, 0x8dcc, 0xcdd4, 0xeed4, 0x2fdd, 0x70e5, 0x91e5, 0x91e5, 0xb1ed, 
0x75ad, 0xcf7b, 0x8a52, 0x284a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x8e73, 0xb6bd, 0x1be7, 0x5cf7, 0xfaee, 0x57e6, 0xf4dd, 0x92dd, 0x30dd, 0xeed4, 0xadcc, 0x6cc4, 0xeabb, 0xa8b3, 0x68ab, 0x47ab, 0x47a3, 0x47a3, 0x47a3, 0x47a3, 0x47a3, 0x48a3, 0x68a3, 0x68a3, 0x89ab, 0xeab3, 0x4cc4, 0xced4, 0x0fdd, 0x50e5, 0x91e5, 
0x38c6, 0x55ad, 0x1084, 0xcb5a, 0x484a, 0x494a, 0x494a, 0x284a, 0xcf83, 0xd6cd, 0x97ee, 0x56ee, 0xb2e5, 0x50dd, 0x2fdd, 0xeedc, 0xadd4, 0x6bcc, 0xe9bb, 0x88b3, 0x67ab, 0x47ab, 0x27a3, 0x27a3, 0x06a3, 0x06a3, 0x079b, 0x079b, 0x069b, 0x069b, 0x069b, 0x069b, 0x079b, 0x079b, 0x279b, 0x48a3, 0x89ab, 0xeab3, 0x8dcc, 0x2fdd, 
0xfbde, 0x79d6, 0x18c6, 0x14a5, 0x8d73, 0x4852, 0x886a, 0x6a93, 0xefcc, 0xb2ed, 0x70e5, 0x0ee5, 0xcddc, 0xacdc, 0xacd4, 0x6bcc, 0xe9bb, 0x88b3, 0x67ab, 0x27a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x279b, 0x68a3, 0xeab3, 
0xbef7, 0x1be7, 0xb9e6, 0x15de, 0xcfbc, 0x899b, 0xa9ab, 0xacd4, 0x0de5, 0xede4, 0xccdc, 0xacdc, 0xacd4, 0x8bd4, 0x2ac4, 0xa8b3, 0x47ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0693, 0x079b, 
0xd8f6, 0x55ee, 0xd2ed, 0x70ed, 0x2eed, 0xccdc, 0xacdc, 0xede4, 0xede4, 0xccdc, 0xacdc, 0x8cd4, 0x6bcc, 0xe9c3, 0x67b3, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0793, 
0x4fed, 0x2eed, 0x2ded, 0x2eed, 0x0ded, 0x0de5, 0xede4, 0xede4, 0xccdc, 0xacdc, 0x8cd4, 0x4bcc, 0xc9bb, 0x47ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0793, 
0x0ded, 0x0ded, 0x0ded, 0x0ded, 0x0de5, 0xede4, 0xede4, 0xccdc, 0xacdc, 0x8bd4, 0x4acc, 0xc8bb, 0x47ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0793, 
0x0ded, 0x0ded, 0x0ded, 0x0ded, 0x0de5, 0xede4, 0xccdc, 0x8cdc, 0x8bd4, 0x4acc, 0xc9bb, 0x47ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0793, 
0x0ded, 0x0ded, 0x0ded, 0xede4, 0xede4, 0xccdc, 0xacdc, 0x6bd4, 0x4bd4, 0xe9c3, 0x47ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x0793, 
0x0ded, 0x0ded, 0xede4, 0xede4, 0xcce4, 0xacdc, 0x8bd4, 0x6bd4, 0xe9c3, 0x67b3, 0x26ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x27a3, 0x27a3, 0x279b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 0x079b, 
0x0ded, 0x0de5, 0xede4, 0xcce4, 0xacdc, 0x8bdc, 0x6bd4, 0x2acc, 0xa8bb, 0x26ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x279b, 0x27a3, 0x27a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x079b, 0x0793, 0xe792, 0xe78a, 0xc782, 0xc77a, 0xc77a, 0xa872, 
0x0ded, 0xede4, 0xece4, 0xccdc, 0xabdc, 0x8bd4, 0x4ad4, 0xc8bb, 0x47b3, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x26a3, 0x079b, 0x0793, 0xe78a, 0xe78a, 0xc782, 0xc77a, 0xa872, 0x886a, 0x8862, 0x685a, 0x685a, 0x4852, 0x484a, 
0x0ded, 0xece4, 0xcce4, 0xacdc, 0x8bd4, 0x6bd4, 0x2acc, 0x67b3, 0x26ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x279b, 0x079b, 0x0793, 0xe792, 0xe78a, 0xc77a, 0xa872, 0x8862, 0x685a, 0x4852, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xede4, 0xcce4, 0xacdc, 0x8bdc, 0x6bd4, 0x4ad4, 0xc8c3, 0x46b3, 0x26ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x27a3, 0x27a3, 0x079b, 0xe792, 0xc782, 0xa772, 0x8862, 0x685a, 0x4852, 0x4852, 0x4852, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xece4, 0xcce4, 0xacdc, 0x8bdc, 0x6bd4, 0x2acc, 0x87b3, 0x26ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26ab, 0x069b, 0xe78a, 0xc77a, 0x886a, 0x685a, 0x685a, 0x4852, 0x4852, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 0x484a, 
0xece4, 0xcce4, 0xabdc, 0x8bd4, 0x6ad4, 0x09cc, 0x66b3, 0x26ab, 0x46ab, 0x46b3, 0x46b3, 0x46b3, 0x26a3, 0xe78a, 0xc77a, 0x886a, 0x8862, 0x685a, 0x6852, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xacdc, 0x8bdc, 0x6bd4, 0x4ad4, 0xc8c3, 0x46b3, 0x46ab, 0x26a3, 0x0793, 0xe78a, 0xc77a, 0xa86a, 0x6862, 0x6852, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xacdc, 0x8bdc, 0x6bd4, 0x2acc, 0xa8bb, 0x26ab, 0x069b, 0xc782, 0x886a, 0x4852, 0x2942, 0x2942, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x8bdc, 0x6bd4, 0x29cc, 0x67b3, 0x26ab, 0xe792, 0xc782, 0xa772, 0x886a, 0x685a, 0x4852, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x6bd4, 0x6bd4, 0x09cc, 0x46b3, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x079b, 0xc77a, 0x685a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x6bd4, 0x6bd4, 0x09cc, 0x46b3, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26a3, 0x06a3, 0xc77a, 0x6852, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0x8bdc, 0x6bd4, 0x6bd4, 0x09c4, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26a3, 0xe782, 0x685a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xace4, 0xabdc, 0x6bd4, 0x6bd4, 0x09c4, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x46ab, 0x26ab, 0xe78a, 0x4852, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x6bd4, 0x6bd4, 0x09c4, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26a3, 0x46ab, 0x26a3, 0xa77a, 0x484a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x6bd4, 0x6bd4, 0x09cc, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x26ab, 0x079b, 0x6852, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 
0xcce4, 0xabdc, 0x8bdc, 0x6bd4, 0x09cc, 0x46b3, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x46ab, 0x26ab, 0x26ab, 0x26ab, 0x26a3, 0x46ab, 0x26a3, 0x886a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a, 0x494a
};