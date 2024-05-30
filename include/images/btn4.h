#include "Arduino.h"

// btn4.jpg
// width 50
// height 50
// mode RGB

static const uint16_t image_btn4_size[] PROGMEM = {50, 50, 5000};
static const uint16_t image_btn4[] PROGMEM = {
0xcebb, 0x488a, 0x2271, 0x2171, 0x2171, 0xe068, 0xc068, 0xc068, 0xa060, 0xa060, 0xa060, 0x8060, 0x6060, 0x6060, 0x4060, 0x4060, 0x2060, 0x2060, 0x2068, 0x2070, 0x2070, 0x2070, 0x2070, 0x2070, 0x2070, 0x2068, 0x2068, 0x2068, 0x2068, 0x2068, 0x2070, 0x2070, 0x0068, 0x2060, 0x2060, 0x2058, 0x0058, 0x0050, 0x0058, 0x0058, 0x2060, 0x0060, 0x2060, 0x4068, 0x4070, 0x8078, 0xc078, 0xc078, 0x0179, 0x2281, 
0x0682, 0x6471, 0x4271, 0xa381, 0xc381, 0xa281, 0x8179, 0x8179, 0x6179, 0x6179, 0x6179, 0x6179, 0x6179, 0x4179, 0x4179, 0x2179, 0x4181, 0x4181, 0x4189, 0x4189, 0x2191, 0x2191, 0x2191, 0x2189, 0x2089, 0x2089, 0x2189, 0x2181, 0x2181, 0x2189, 0x2189, 0x2189, 0x0081, 0x0081, 0x0179, 0x0079, 0x0071, 0x0071, 0xe070, 0xe070, 0xe070, 0xc070, 0xe078, 0x0081, 0xe080, 0x0089, 0x2189, 0x2189, 0x0181, 0x0181, 
0x2269, 0x6271, 0xe381, 0x438a, 0x4392, 0x428a, 0x438a, 0x438a, 0x8492, 0x6492, 0x648a, 0x8492, 0x8492, 0x6392, 0x6392, 0x639a, 0x639a, 0x429a, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x42a2, 0x429a, 0x429a, 0x42a2, 0x42a2, 0x42a2, 0x42aa, 0x41a2, 0x429a, 0x229a, 0x2292, 0x018a, 0xe189, 0xe189, 0xc089, 0xa089, 0xa091, 0xc091, 0xa099, 0xa099, 0xa099, 0x8091, 0x2081, 0x0079, 
0x2171, 0x8279, 0x238a, 0x6392, 0xa392, 0x049b, 0x25a3, 0x259b, 0x45a3, 0x45a3, 0x66a3, 0x66a3, 0x86a3, 0x86ab, 0x86ab, 0x86b3, 0x65b3, 0x45b3, 0x45bb, 0x45bb, 0x45bb, 0x45bb, 0x45bb, 0x45bb, 0x65bb, 0x65b3, 0x65b3, 0x65b3, 0x65b3, 0x45b3, 0x45bb, 0x45bb, 0x44bb, 0x44bb, 0x24bb, 0x24b3, 0x03ab, 0xe3aa, 0xc2a2, 0xa29a, 0xa1a2, 0x80a2, 0x81a2, 0x80aa, 0x60aa, 0x41aa, 0x21aa, 0xe099, 0x4089, 0xe078, 
0x0069, 0x8179, 0x228a, 0xc392, 0x449b, 0xa5a3, 0xc7ab, 0xe7b3, 0x07b4, 0x07b4, 0x07b4, 0x08b4, 0x08b4, 0x07b4, 0x07b4, 0xe6bb, 0x07c4, 0x07cc, 0x07cc, 0xe7cb, 0xe7cb, 0xe7cb, 0x07cc, 0x07cc, 0x07c4, 0x07c4, 0x07c4, 0x07c4, 0x07c4, 0x07c4, 0x07c4, 0xe7cb, 0x07cc, 0xe6cb, 0xe6cb, 0xe6cb, 0xe6c3, 0xc5c3, 0xa5bb, 0x84b3, 0x63bb, 0x42b3, 0x42bb, 0x42c3, 0x22c3, 0x02c3, 0xc2ba, 0x41aa, 0x6089, 0xe078, 
0xa068, 0x6179, 0x428a, 0x049b, 0xa5a3, 0xe6ab, 0x27ac, 0x68bc, 0x88bc, 0x89bc, 0xaac4, 0xcbc4, 0xcbbc, 0xcbbc, 0xaabc, 0xaac4, 0x8acc, 0x8acc, 0x8ad4, 0x8ad4, 0x8ad4, 0x8ad4, 0x8ad4, 0x8acc, 0xaacc, 0xaac4, 0xaac4, 0xaac4, 0xaac4, 0xaac4, 0xaacc, 0xaacc, 0xa9d4, 0x89d4, 0x68d4, 0x67d4, 0x67d4, 0x67d4, 0x67cc, 0x46cc, 0x04cc, 0xc3cb, 0xc3cb, 0xc3cb, 0xa3cb, 0xa3cb, 0x43c3, 0x81aa, 0xa091, 0xe078, 
0x6060, 0x2179, 0x438a, 0x249b, 0xe6ab, 0x47b4, 0x89bc, 0xeac4, 0xebbc, 0x4dc5, 0xb0cd, 0xf2d5, 0x13de, 0x12de, 0x12de, 0x32e6, 0xd0e5, 0xb0e5, 0xb0e5, 0xb0ed, 0xb0e5, 0xb0e5, 0xb0e5, 0xd0e5, 0xd0dd, 0xd0d5, 0xd0d5, 0xd0d5, 0xb0d5, 0xd0d5, 0xb0dd, 0xcfdd, 0x8edd, 0x4cdd, 0x0add, 0xe9dc, 0xc8dc, 0xc7dc, 0xc7dc, 0xc7dc, 0x66dc, 0x44d4, 0x24d4, 0x23d4, 0x23d4, 0x24d4, 0xa3c3, 0xe2aa, 0xe191, 0xe070, 
0x4060, 0x2179, 0x438a, 0x459b, 0x27b4, 0xa9bc, 0xeac4, 0x0bc5, 0xcfcd, 0x32d6, 0x95e6, 0xd7ee, 0xf8ee, 0xd7ee, 0xd7ee, 0xd6ee, 0xb5f6, 0xb5f6, 0xb5fe, 0xb5f6, 0xb5f6, 0xb5f6, 0xb5f6, 0xb5ee, 0xb5ee, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5e6, 0xb4ee, 0x93f6, 0x31ee, 0xaeed, 0x6be5, 0x49e5, 0x28e5, 0x28e5, 0x28e5, 0xe7e4, 0xc6e4, 0xa5e4, 0xa4dc, 0xa4dc, 0xa5d4, 0x04c4, 0x43ab, 0x0192, 0xe070, 
0x2058, 0x4171, 0x638a, 0x85a3, 0x07b4, 0xeac4, 0x2ac5, 0x4cc5, 0x32d6, 0xd6ee, 0xf7e6, 0x19ef, 0x7bf7, 0x3aef, 0x39ef, 0x18f7, 0x18ff, 0xf8fe, 0xf8fe, 0xf8f6, 0xf8f6, 0xf8f6, 0xf8f6, 0x18ef, 0x18ef, 0x18e7, 0x39ef, 0xf8e6, 0x18ef, 0x18ef, 0x18ef, 0xf7ee, 0xd6ee, 0xb5ee, 0x52f6, 0xeeed, 0x8bed, 0x49ed, 0x49ed, 0x68ed, 0x27ed, 0x26ed, 0xc5dc, 0xc5dc, 0x05dd, 0xc5d4, 0x65c4, 0x83ab, 0x4292, 0xe068, 
0x2058, 0x2171, 0x428a, 0x64a3, 0x47bc, 0xe9c4, 0x09bd, 0xeed5, 0xb5e6, 0x18ef, 0x9bff, 0x7bf7, 0x1aef, 0x1aef, 0xbcff, 0x7bff, 0x39ff, 0x19ff, 0x19ff, 0x39f7, 0x39f7, 0x39f7, 0x39f7, 0x39ef, 0x39ef, 0x59ef, 0x19e7, 0x5aef, 0x5aef, 0xf8e6, 0x19ef, 0x19ef, 0x39ef, 0x17f7, 0xb3f6, 0x0ff6, 0xaced, 0x6aed, 0x89ed, 0x89f5, 0x47ed, 0x67ed, 0x46e5, 0x26e5, 0x25dd, 0xe5d4, 0xc6cc, 0x83ab, 0x6292, 0x0069, 
0x4060, 0x4179, 0x628a, 0x64a3, 0x88c4, 0xe9c4, 0x2bc5, 0x92e6, 0xf7ee, 0x3aef, 0x5bf7, 0x1bef, 0x9dff, 0x7cf7, 0x3af7, 0x5bff, 0x3aff, 0x3aff, 0x3aff, 0x3af7, 0x3af7, 0x3af7, 0x5af7, 0x5aef, 0x5aef, 0x7aef, 0xf9e6, 0x5aef, 0x7aef, 0x3aef, 0x7bef, 0x5aef, 0x39f7, 0xf7f6, 0x93f6, 0x30ee, 0xcced, 0xaaed, 0xa9ed, 0xa9f5, 0xa8f5, 0x47e5, 0x06dd, 0xe5dc, 0x45dd, 0x05d5, 0xc6cc, 0xa4ab, 0x6292, 0x0069, 
0x2060, 0x4179, 0x428a, 0x64a3, 0x88c4, 0xe9c4, 0xadd5, 0x8fc5, 0xb7de, 0x3bef, 0x7cf7, 0x1bef, 0x5cf7, 0xbdff, 0x1af7, 0x3af7, 0x3aff, 0x39f7, 0x3af7, 0x3af7, 0x3af7, 0x3aef, 0x3aef, 0x3aef, 0x5aef, 0x5aef, 0x59ef, 0x19e7, 0x3aef, 0x3ae7, 0x3bef, 0x5bef, 0x3aef, 0x18ef, 0xb5ee, 0x52ee, 0xefe5, 0xcee5, 0xade5, 0xace5, 0xace5, 0x8bdd, 0x4ad5, 0x49d5, 0xa8dd, 0x47d5, 0x45bc, 0xa4b3, 0x6292, 0x0069, 
0x0060, 0x2179, 0x428a, 0x85ab, 0x67c4, 0xc9c4, 0x6dc5, 0x645a, 0x2008, 0x2008, 0x0000, 0x8110, 0xca62, 0xfaee, 0x9cff, 0x5aff, 0x19f7, 0x19f7, 0x19f7, 0x19f7, 0x19ef, 0x39ef, 0x19ef, 0x39ef, 0x59ef, 0x18e7, 0x18e7, 0x9af7, 0xbbf7, 0x4f8c, 0xe639, 0x0000, 0x0000, 0x0000, 0x0008, 0x0008, 0x0010, 0x0010, 0x0010, 0x0010, 0x2010, 0x0010, 0x4020, 0x8049, 0x428b, 0x69dd, 0xa6cc, 0x83b3, 0x6192, 0x0069, 
0x2060, 0x2079, 0x018a, 0x64ab, 0x47c4, 0xc9c4, 0x4ec5, 0x2010, 0xfeff, 0xffff, 0xffff, 0x3cef, 0x695a, 0x53b5, 0x5aff, 0xd8ee, 0x18f7, 0x18f7, 0x18f7, 0x18ef, 0x18ef, 0x18ef, 0x18ef, 0x18e7, 0xd7de, 0x18e7, 0x18e7, 0x18e7, 0x56ce, 0x674a, 0xd6bd, 0xffff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0x9dff, 0x72bd, 0x2062, 0xa7bc, 0x65c4, 0xc3bb, 0x4192, 0x0071, 
0x2058, 0x2079, 0x018a, 0x44ab, 0x66c4, 0x0acd, 0x90cd, 0x0008, 0xfeff, 0xbef7, 0xffff, 0xffff, 0x064a, 0x12b5, 0x19f7, 0x18f7, 0xd6ee, 0xd6ee, 0xd6ee, 0xd6ee, 0xd6ee, 0xd6e6, 0xd6e6, 0xd6e6, 0x38ef, 0xf7e6, 0xb6de, 0x17e7, 0x18e7, 0xe539, 0xf6bd, 0xdeff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0xdeff, 0xdfff, 0xd4c5, 0x8049, 0x6ad5, 0xc6cc, 0xa3bb, 0x619a, 0x0071, 
0x2058, 0x4179, 0x4292, 0x23ab, 0x66cc, 0xc9cc, 0x2ec5, 0x0008, 0xfeff, 0xdef7, 0x9df7, 0xffff, 0xe641, 0x32b5, 0xd8ee, 0xf7f6, 0xb5ee, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5e6, 0xb5de, 0xb5de, 0xb6de, 0x95de, 0xb6de, 0x95d6, 0xf7e6, 0x8231, 0xd6bd, 0xbeff, 0xdfff, 0xdfff, 0xdeff, 0xdeff, 0xdeff, 0xdeff, 0xdeff, 0xdeff, 0xdeff, 0xdeff, 0x9ef7, 0xd5c5, 0x2041, 0x6add, 0x44c4, 0xa2bb, 0x61a2, 0x0079, 
0x2058, 0x2079, 0x219a, 0x43b3, 0x25cc, 0xc9cc, 0x4ecd, 0x0008, 0xbcf7, 0xdef7, 0xbef7, 0x5cef, 0x274a, 0xf1ac, 0xb9e6, 0xb7e6, 0x76de, 0x75de, 0x75de, 0x75de, 0x76de, 0x96de, 0x96de, 0x55d6, 0x75de, 0x75de, 0x75de, 0x55d6, 0xb5de, 0xc339, 0x94b5, 0xbef7, 0x9ef7, 0xdeff, 0x9df7, 0xfeff, 0x5cef, 0xdeff, 0x7df7, 0xbef7, 0xbef7, 0xdeff, 0x7ce7, 0xf4c5, 0x6049, 0x2add, 0x65d4, 0xa3cb, 0x41a2, 0x0081, 
0x2060, 0x2081, 0x219a, 0x23b3, 0x25cc, 0xc9cc, 0x4ecd, 0x0010, 0x9bf7, 0x5be7, 0x7cef, 0xfeff, 0xa539, 0x4331, 0x2008, 0x0008, 0x6010, 0xa339, 0x6652, 0x8018, 0x2008, 0x0008, 0x0008, 0xc75a, 0x865a, 0x2008, 0xe028, 0x6a7b, 0x34d6, 0xa239, 0x94b5, 0x9df7, 0x7def, 0xbef7, 0xfade, 0x7cf7, 0xbdff, 0x3bef, 0x7cf7, 0x7df7, 0x5def, 0x9df7, 0xddf7, 0x92bd, 0xe040, 0x09dd, 0xa6e4, 0x82cb, 0x41aa, 0x0081, 
0x2068, 0x2081, 0x21a2, 0x23bb, 0x25d4, 0xc9d4, 0x4ecd, 0x0010, 0x7af7, 0x7cef, 0x5bef, 0x3bef, 0x0642, 0x37ce, 0x3bef, 0x5bef, 0x3ae7, 0x93ad, 0x0000, 0x5bef, 0x9cf7, 0x5bef, 0xbcf7, 0x2963, 0x6e8c, 0x9bef, 0x36ce, 0x875a, 0xc75a, 0x464a, 0xf1a4, 0x5cef, 0x7df7, 0x5cef, 0xddff, 0x3bef, 0x9cf7, 0x5bef, 0xbdff, 0x3bef, 0x5def, 0x3cef, 0x5bef, 0x30b5, 0xa059, 0xa8cc, 0x85dc, 0x83cb, 0x41aa, 0x0081, 
0x2068, 0x0089, 0x01a2, 0x23c3, 0x25d4, 0xc9d4, 0x4ecd, 0x0010, 0x18e7, 0x3ae7, 0x3ae7, 0x1ae7, 0x2742, 0xf9de, 0x7cef, 0x3ae7, 0x3be7, 0x6c6b, 0x2000, 0x5be7, 0xfade, 0x5be7, 0x7bef, 0x5ae7, 0xf9de, 0x19df, 0x9cef, 0xd9de, 0xe120, 0xd0a4, 0xe549, 0x2008, 0x4010, 0x0000, 0x1ae7, 0x5bef, 0x1ae7, 0x1ae7, 0x1ae7, 0x3aef, 0x0000, 0x4010, 0x4010, 0xa049, 0x238b, 0x6ae5, 0x65d4, 0x62c3, 0x41aa, 0x0089, 
0x0070, 0x0089, 0x01aa, 0x23c3, 0x26d4, 0xc9d4, 0x4ecd, 0x0010, 0x18ef, 0x5aef, 0x19df, 0x3ae7, 0x8c73, 0x1adf, 0xd9d6, 0x3ae7, 0xfae6, 0x4429, 0x8110, 0xd9de, 0xfae6, 0xd9de, 0x1ae7, 0x3ae7, 0x5aef, 0x39e7, 0xf9e6, 0x19ef, 0xab83, 0x0873, 0x34de, 0x95e6, 0xf4cd, 0x4010, 0xf9e6, 0xd9de, 0xf8de, 0x3ae7, 0xd8de, 0x19e7, 0x4008, 0x0fad, 0x6dbd, 0x09bd, 0x48d5, 0x48dd, 0xa5d4, 0xc3cb, 0x41aa, 0x0089, 
0x0070, 0x0089, 0x01aa, 0x23c3, 0x25d4, 0xc9d4, 0x4ecd, 0x0010, 0xb6de, 0x18e7, 0xd8de, 0xd8d6, 0x6f8c, 0x39e7, 0xf8de, 0xf8de, 0xf5bd, 0xc118, 0x0008, 0xfae6, 0xb8d6, 0xb8de, 0x19e7, 0xb7d6, 0xb7de, 0xd8de, 0xf8e6, 0xb8de, 0xb0a4, 0xa349, 0x94e6, 0x32de, 0x34d6, 0x2008, 0xd8de, 0x19df, 0x19df, 0xf8de, 0xd7de, 0xf7e6, 0x4010, 0xaec5, 0x29c5, 0x27cd, 0x67dd, 0xe5d4, 0x84d4, 0x82bb, 0x41aa, 0x0081, 
0x0070, 0x0089, 0x01aa, 0x23c3, 0x25d4, 0xc9d4, 0x6ecd, 0x0010, 0xb6de, 0x75ce, 0x76ce, 0xd8de, 0xb3b5, 0xb6d6, 0x95d6, 0xd6d6, 0x2d84, 0x8852, 0x2000, 0xb8d6, 0xd8d6, 0xb6d6, 0x75ce, 0x71ad, 0x51a5, 0x96ce, 0xb7d6, 0xb8de, 0xd9de, 0x0008, 0x53de, 0x52de, 0xf3cd, 0x6010, 0xd8de, 0x97ce, 0xb7ce, 0xb6ce, 0xb7d6, 0x95d6, 0x2008, 0x8dc5, 0x28cd, 0x46d5, 0x26d5, 0x26dd, 0xa5d4, 0xa3c3, 0x41a2, 0x0081, 
0x0070, 0x0089, 0x01a2, 0x23bb, 0x25cc, 0xe9d4, 0x6ecd, 0x0008, 0x54ce, 0xb6d6, 0x96d6, 0x55ce, 0x75ce, 0x95d6, 0x74ce, 0xb5d6, 0x0442, 0x4e8c, 0x4000, 0x36c6, 0xb6d6, 0x95ce, 0x95ce, 0x2863, 0x4963, 0x55ce, 0xb6d6, 0x55c6, 0x57ce, 0x4010, 0x12d6, 0x72de, 0x33d6, 0x2008, 0x76ce, 0x55c6, 0x96ce, 0xb6d6, 0x55ce, 0x95d6, 0x2010, 0x6cc5, 0x68d5, 0x45dd, 0x04d5, 0x67e5, 0x84d4, 0xc4c3, 0x41a2, 0x0081, 
0x0070, 0x0089, 0x01a2, 0x23b3, 0x46cc, 0xe9cc, 0x2dc5, 0x2010, 0x33c6, 0x54ce, 0x74ce, 0x54c6, 0x33c6, 0x33c6, 0x95d6, 0x13c6, 0x2008, 0x14c6, 0x4008, 0x15c6, 0x74ce, 0x74ce, 0x34c6, 0xe85a, 0x0863, 0x55ce, 0x34c6, 0x55ce, 0x15c6, 0x2008, 0x73de, 0x52de, 0x33d6, 0x2008, 0x34c6, 0x34c6, 0x54ce, 0x54ce, 0x54ce, 0x53ce, 0x2008, 0x6cc5, 0x47d5, 0x25dd, 0x25dd, 0x26e5, 0x85d4, 0xa3c3, 0x41aa, 0x0081, 
0x2068, 0x0081, 0x219a, 0x23b3, 0x46cc, 0xe9cc, 0x4dc5, 0x2010, 0x33ce, 0x12c6, 0x12be, 0xf2bd, 0x33c6, 0x53c6, 0xf2bd, 0x4c8c, 0x244a, 0xb7e6, 0x2008, 0xf4c5, 0x12c6, 0xf2bd, 0x14be, 0xe85a, 0xc75a, 0x13c6, 0xf2c5, 0x13c6, 0xf4bd, 0x2008, 0x72de, 0x52de, 0x33d6, 0x2008, 0x13c6, 0x12be, 0x33c6, 0x12c6, 0x13c6, 0x12c6, 0x0008, 0x6ccd, 0x47d5, 0x25dd, 0x25e5, 0x06e5, 0x64dc, 0x83cb, 0x41aa, 0x0081, 
0x0068, 0x0081, 0x019a, 0x23b3, 0x46cc, 0xe9cc, 0x2dc5, 0x2008, 0xf1c5, 0xb0bd, 0xd1bd, 0xd1bd, 0xd1bd, 0x12c6, 0xb1b5, 0x4b8c, 0xa139, 0x96d6, 0x2008, 0xb3bd, 0xd1b5, 0x11be, 0x13c6, 0xa652, 0xc75a, 0xd2bd, 0xd1bd, 0xd1bd, 0xd3b5, 0x2008, 0x52d6, 0x51de, 0x33d6, 0x2008, 0xd2bd, 0xd1b5, 0xf1bd, 0xd1bd, 0xd1bd, 0xd1bd, 0x0010, 0x6ccd, 0x47dd, 0x25e5, 0x25e5, 0x05ed, 0x64dc, 0x83cb, 0x41aa, 0xe088, 
0x2068, 0x0081, 0x019a, 0x23b3, 0x46cc, 0xe9cc, 0x2dc5, 0x2008, 0xb0b5, 0x8fb5, 0xb0bd, 0xd0bd, 0x8fb5, 0x8fb5, 0xd0bd, 0x70b5, 0x8010, 0xd3bd, 0x4008, 0x92b5, 0x90b5, 0xd0b5, 0xb1b5, 0x8552, 0xa652, 0xb1b5, 0x90b5, 0x90b5, 0xb2b5, 0x4008, 0x52de, 0x51de, 0x13d6, 0x2008, 0xb0b5, 0xb0b5, 0xb0b5, 0xafb5, 0xafb5, 0x8fb5, 0x2010, 0x6cd5, 0x27e5, 0x24ed, 0x25ed, 0x05ed, 0x64e4, 0x83cb, 0x41b2, 0xe088, 
0x2068, 0x0081, 0x219a, 0x23b3, 0x46cc, 0xe9cc, 0x2dc5, 0x2008, 0x6eb5, 0x4ead, 0x6eb5, 0x8fb5, 0x6ead, 0x4ead, 0x6ead, 0x90b5, 0xa139, 0x8e94, 0x2008, 0x71b5, 0x6fad, 0x2ea5, 0x2ea5, 0xe65a, 0xa552, 0x70b5, 0x8fb5, 0x6fad, 0x50a5, 0x2008, 0x52d6, 0x51de, 0x33d6, 0x2008, 0x6fad, 0x6ead, 0x8eb5, 0x8eb5, 0x6ead, 0x6eb5, 0x0018, 0x6cd5, 0x27e5, 0x04ed, 0x05ed, 0x05ed, 0x64e4, 0x83cb, 0x41aa, 0xe088, 
0x2068, 0x0081, 0x219a, 0x23b3, 0x46cc, 0xe9cc, 0x4dc5, 0x2010, 0x2dad, 0x2da5, 0x2dad, 0x2da5, 0x2da5, 0x6dad, 0x2da5, 0x2da5, 0x0763, 0xe75a, 0x2008, 0x30a5, 0x2ea5, 0x4dad, 0x2ea5, 0x6352, 0x634a, 0x0da5, 0x6ead, 0x4ead, 0x2fa5, 0x2000, 0x51d6, 0x51de, 0x33d6, 0x2010, 0x2ea5, 0x4da5, 0x4dad, 0x4dad, 0x4da5, 0x4dad, 0x2018, 0x6cd5, 0x27e5, 0x04ed, 0x05ed, 0x05ed, 0x64dc, 0x83cb, 0x41aa, 0xe088, 
0x2070, 0x0089, 0x22a2, 0x23bb, 0x46cc, 0xe9d4, 0x2ec5, 0x2010, 0xeca4, 0xeba4, 0x0ca5, 0xeb9c, 0x8994, 0x0ba5, 0x2ca5, 0xeca4, 0xea7b, 0x6129, 0x6008, 0xce9c, 0xed9c, 0x2da5, 0x0da5, 0x8352, 0xa452, 0xab94, 0xec9c, 0x0da5, 0x2fa5, 0x4008, 0x72de, 0x72e6, 0x13d6, 0x2010, 0x0c9d, 0x0b9d, 0x0ba5, 0x0ba5, 0xeb9c, 0x0ca5, 0x0018, 0x6cd5, 0x27dd, 0x25e5, 0x25e5, 0x05e5, 0x84dc, 0x83c3, 0x41aa, 0x0081, 
0x2070, 0x0089, 0x02a2, 0x23bb, 0x46d4, 0xc9d4, 0x2dc5, 0x2010, 0xeba4, 0xaa94, 0xeb9c, 0xaa9c, 0xc77b, 0x6994, 0xeb9c, 0xab9c, 0xad9c, 0x6008, 0x4008, 0xad94, 0xec9c, 0x8a94, 0xeca4, 0x498c, 0x498c, 0x2ca5, 0xca9c, 0xcb9c, 0xcd9c, 0x2008, 0x30de, 0x50de, 0x12d6, 0x2010, 0xeb9c, 0xea94, 0xca9c, 0xca9c, 0xca9c, 0xcb9c, 0x2010, 0x6cd5, 0x27dd, 0x25e5, 0x25e5, 0x25e5, 0x84d4, 0xa3c3, 0x41a2, 0x0081, 
0x2068, 0x2189, 0x21a2, 0x43c3, 0x46dc, 0x67d4, 0x6ed5, 0x2010, 0x4894, 0xca9c, 0x8a94, 0x8a94, 0x8252, 0x8a94, 0x6994, 0xaa9c, 0x8a94, 0xa031, 0x4008, 0xad94, 0x288c, 0x8994, 0xaa94, 0x8994, 0xa994, 0xa994, 0xa994, 0xca94, 0x276b, 0xa041, 0x2fde, 0xeed5, 0xd0cd, 0x6018, 0x8994, 0xa894, 0xa994, 0xaa9c, 0xaa9c, 0x4994, 0x4010, 0x6ccd, 0x27d5, 0x66e5, 0x04d5, 0x25dd, 0x85cc, 0xc4bb, 0x419a, 0x0079, 
0x0068, 0xe080, 0xe199, 0x02bb, 0x05d4, 0x87d4, 0x6ed5, 0x2010, 0x6894, 0x478c, 0x6994, 0x8994, 0x414a, 0x488c, 0x8994, 0x6894, 0x698c, 0x2563, 0x2000, 0x2a84, 0xaa9c, 0x6894, 0x688c, 0x488c, 0x888c, 0x8894, 0x688c, 0x8a94, 0x024a, 0xe472, 0xaccd, 0x0dde, 0xaecd, 0x4010, 0xa894, 0x6784, 0x4784, 0x688c, 0x688c, 0xa99c, 0x2010, 0x6cc5, 0x27d5, 0x25dd, 0x25d5, 0x46dd, 0x85c4, 0xa4bb, 0x629a, 0x0079, 
0x2060, 0xe078, 0x219a, 0x23b3, 0x25d4, 0xe9dc, 0x6ed5, 0x0018, 0x4894, 0x0684, 0x688c, 0x488c, 0x2042, 0x646b, 0x2784, 0x2784, 0x077c, 0xe87b, 0x8008, 0x097c, 0x688c, 0x268c, 0x4784, 0x488c, 0x4884, 0x4984, 0x0984, 0xe983, 0xe028, 0xaaac, 0x8bd5, 0xabd5, 0xefd5, 0x4010, 0x688c, 0xa88c, 0x4784, 0x688c, 0x4784, 0x478c, 0x6018, 0x6ccd, 0x68d5, 0x46dd, 0x45d5, 0x46d5, 0x64c4, 0xa4b3, 0x429a, 0x0079, 
0x2060, 0x0079, 0x219a, 0x02ab, 0x05c4, 0xc9d4, 0xcbc4, 0x4020, 0x0794, 0xc583, 0x4894, 0xa683, 0x004a, 0xc25a, 0xe67b, 0x4784, 0x6a8c, 0x876b, 0xc010, 0x087c, 0xe57b, 0x8794, 0xe67b, 0xa252, 0xc45a, 0x4a8c, 0x476b, 0xe028, 0x6162, 0xcddd, 0xabdd, 0xece5, 0xadd5, 0xc028, 0x6473, 0xe67b, 0x0784, 0x278c, 0xe67b, 0xa47b, 0xc028, 0x2abd, 0x68d5, 0x46d5, 0x45d5, 0x26d5, 0x85c4, 0xc4b3, 0x4192, 0x0071, 
0x0058, 0xe070, 0x018a, 0x02a3, 0x05c4, 0xa7d4, 0xcacc, 0x6172, 0x0018, 0x2018, 0x0018, 0x6028, 0x005a, 0xe051, 0x8020, 0x4010, 0x6010, 0x0029, 0x2000, 0x2a84, 0xc573, 0x0584, 0xa573, 0xc039, 0xe141, 0x4008, 0x4031, 0xa583, 0xeddd, 0xabdd, 0xcbe5, 0x6add, 0xace5, 0x4072, 0x4041, 0x2018, 0x4018, 0x4018, 0x4018, 0xa020, 0xa06a, 0x49c5, 0x47cd, 0x46cd, 0x46cd, 0x26cd, 0xa5c4, 0xc4b3, 0x6192, 0x0071, 
0x4058, 0x0071, 0x018a, 0x22ab, 0x04c4, 0x86cc, 0x09dd, 0xead4, 0x6cdd, 0x8ddd, 0x8de5, 0x6ddd, 0x8ddd, 0x8dd5, 0x8dd5, 0xaecd, 0x8ec5, 0x8ebd, 0x6010, 0xa873, 0xc573, 0xc473, 0x0784, 0xc039, 0x056b, 0xf0cd, 0xcdcd, 0xabcd, 0xcadd, 0xa9e5, 0x69e5, 0xaaed, 0x8aed, 0x6be5, 0x6cd5, 0x4ccd, 0xeedd, 0x6ccd, 0x6ccd, 0x2ac5, 0x08bd, 0xc9d5, 0x46c5, 0x46cd, 0x46cd, 0x47cd, 0xc6c4, 0x83a3, 0x6192, 0x0071, 
0x4060, 0x2071, 0x018a, 0x02a3, 0xa2bb, 0x23c4, 0x85d4, 0x48ed, 0xaaf5, 0x69ed, 0x69ed, 0x69ed, 0x69ed, 0xaaed, 0xcbed, 0xaadd, 0x6acd, 0xcdd5, 0x4010, 0x8673, 0xc57b, 0x836b, 0xc573, 0xe039, 0x2473, 0x4bbd, 0x89cd, 0xc9dd, 0x88dd, 0xa9ed, 0xc9f5, 0x48ed, 0x27ed, 0x89ed, 0xa9e5, 0x89dd, 0x68d5, 0x47cd, 0x89d5, 0x47c5, 0x88cd, 0x87cd, 0x26c5, 0x26c5, 0x47cd, 0x27cd, 0xc5bc, 0xa3a3, 0x6192, 0x0071, 
0x0058, 0x0071, 0x2192, 0x02ab, 0xc3bb, 0x84d4, 0xa4dc, 0x06ed, 0x06e5, 0x47ed, 0x67f5, 0x67f5, 0x47f5, 0x67ed, 0x67e5, 0x47dd, 0xa9dd, 0x49c5, 0x4018, 0x6673, 0x8573, 0xa473, 0x436b, 0xa039, 0xe172, 0x8acd, 0xa8dd, 0x66dd, 0x67e5, 0x67ed, 0x26e5, 0x88f5, 0x67ed, 0x47ed, 0x47dd, 0x67d5, 0x86d5, 0x66d5, 0x25cd, 0x66cd, 0x25c5, 0x66c5, 0x66c5, 0x67cd, 0x67cd, 0x06c5, 0xa5bc, 0xc3ab, 0x6192, 0x0069, 
0x2058, 0x0071, 0x0092, 0x02ab, 0xc3c3, 0x43d4, 0x84dc, 0xe5ec, 0x26ed, 0x26ed, 0x26f5, 0x26f5, 0x46ed, 0x46ed, 0x46ed, 0x46e5, 0x67dd, 0x48cd, 0x6062, 0x2010, 0x6010, 0x2008, 0x4010, 0x205a, 0x49c5, 0x47cd, 0x46d5, 0x46e5, 0x46e5, 0x46ed, 0x46ed, 0x46ed, 0x46e5, 0x46dd, 0x46dd, 0x46d5, 0x46d5, 0x46cd, 0x66cd, 0x66c5, 0x67c5, 0x46c5, 0x66c5, 0x67c5, 0x47c5, 0x27c5, 0xa5bc, 0xc4ab, 0x6292, 0x0069, 
0x2058, 0xe070, 0x0092, 0xe1aa, 0xa3c3, 0x23d4, 0x84dc, 0xe5ec, 0x05ed, 0x25ed, 0x05ed, 0x25ed, 0x25ed, 0x25ed, 0x25e5, 0x25e5, 0x05d5, 0x88dd, 0x4acd, 0x2bbd, 0x6dbd, 0x4cbd, 0x0ab5, 0x6acd, 0x27cd, 0x46d5, 0x26dd, 0x25e5, 0x25ed, 0x25ed, 0x25ed, 0x25e5, 0x45dd, 0x45dd, 0x46d5, 0x46d5, 0x46cd, 0x46cd, 0x46c5, 0x46c5, 0x46c5, 0x46bd, 0x46bd, 0x46c5, 0x46c5, 0x27c5, 0x85bc, 0xa4ab, 0x6292, 0x0071, 
0x2060, 0x0079, 0x009a, 0xe1b2, 0xc3cb, 0x43d4, 0x83e4, 0x04e5, 0x25e5, 0x25e5, 0x25e5, 0x25e5, 0x25e5, 0x25ed, 0x25ed, 0x25ed, 0x04dd, 0xe4d4, 0x47d5, 0x88d5, 0x27c5, 0x47c5, 0x67cd, 0x25cd, 0x46d5, 0x45d5, 0x45dd, 0x25e5, 0x25ed, 0x25ed, 0x25ed, 0x25e5, 0x45dd, 0x46dd, 0x46d5, 0x66d5, 0x46cd, 0x46cd, 0x46c5, 0x46c5, 0x46c5, 0x46bd, 0x66bd, 0x66c5, 0x67c5, 0x26c5, 0xa5bc, 0xc3ab, 0x6192, 0x2071, 
0x2068, 0x0081, 0x009a, 0xe1ba, 0xc3cb, 0x43dc, 0x83dc, 0xe4e4, 0x25e5, 0x45dd, 0x25dd, 0x25e5, 0x25e5, 0x25e5, 0x25ed, 0x25ed, 0x45ed, 0x25e5, 0x45dd, 0x45d5, 0x25cd, 0x45cd, 0x65d5, 0x65dd, 0x45d5, 0x45dd, 0x45e5, 0x25ed, 0x24ed, 0x24ed, 0x24e5, 0x25e5, 0x45dd, 0x46dd, 0x46d5, 0x46d5, 0x46cd, 0x66cd, 0x66c5, 0x66c5, 0x66c5, 0x46bd, 0x66c5, 0x66c5, 0x67c5, 0x47c5, 0xa5bc, 0xa3ab, 0x6192, 0x2071, 
0x2068, 0xe080, 0xe0a1, 0xc1ba, 0xa3d3, 0x43dc, 0x83dc, 0xe4dc, 0x25dd, 0x45dd, 0x45dd, 0x45dd, 0x25dd, 0x25e5, 0x25ed, 0x25ed, 0x04e5, 0x45ed, 0x45dd, 0x45d5, 0x86dd, 0x66d5, 0x25d5, 0x26dd, 0x25dd, 0x25e5, 0x25e5, 0x25ed, 0x24ed, 0x04ed, 0x05e5, 0x25e5, 0x25dd, 0x26d5, 0x46d5, 0x46d5, 0x46cd, 0x46cd, 0x46c5, 0x46c5, 0x67c5, 0x46c5, 0x46c5, 0x67c5, 0x47c5, 0x27c5, 0x85bc, 0xa3ab, 0x4192, 0x4071, 
0x4070, 0x0089, 0xe0a1, 0xc2ba, 0xa3d3, 0x44dc, 0x84dc, 0x05dd, 0x26dd, 0x26d5, 0x25d5, 0x46d5, 0x25dd, 0x25dd, 0x25e5, 0x25ed, 0x25ed, 0x45ed, 0x25e5, 0x25dd, 0x46dd, 0x46dd, 0x26dd, 0x47e5, 0x05e5, 0x05e5, 0x05ed, 0x05ed, 0x05ed, 0x05ed, 0x05e5, 0x06e5, 0x26dd, 0x26dd, 0x26d5, 0x26d5, 0x46cd, 0x47cd, 0x47cd, 0x47c5, 0x47c5, 0x47c5, 0x47c5, 0x47c5, 0x27cd, 0x27cd, 0x86bc, 0xa4ab, 0x6292, 0x8079, 
0x8078, 0x0089, 0xc0a1, 0x81b2, 0x43c3, 0xc3cb, 0x24cc, 0x85cc, 0xa5cc, 0xa5c4, 0xc5c4, 0xc5c4, 0xc5cc, 0xc4cc, 0xc5d4, 0xa4dc, 0x84dc, 0xa5e4, 0xa4dc, 0xa4dc, 0xc5dc, 0xa4d4, 0x64cc, 0x84d4, 0xa4dc, 0x84dc, 0x84e4, 0x84e4, 0xa4e4, 0xa4e4, 0xa5dc, 0xa5d4, 0xa5d4, 0xc5cc, 0xc5cc, 0xc5cc, 0xc6c4, 0xc6c4, 0xe6bc, 0xc6bc, 0xe6bc, 0xc5bc, 0xc5bc, 0xc5bc, 0xc6bc, 0xa6c4, 0x25bc, 0x64a3, 0x4292, 0x8081, 
0x6070, 0xc080, 0x6091, 0x00a2, 0xa2b2, 0x22b3, 0x63b3, 0xc4bb, 0xc4b3, 0xe4b3, 0xe4b3, 0xe4b3, 0x04b4, 0x03bc, 0xe3bb, 0xe3c3, 0xc3cb, 0xe4d3, 0xc3cb, 0xc3cb, 0xe3cb, 0xe3cb, 0xc3cb, 0xe4cb, 0xc3cb, 0xc3cb, 0xc3d3, 0xc3d3, 0xc3d3, 0xe4cb, 0xe4cb, 0xe4c3, 0xe4c3, 0xe4bb, 0xe4bb, 0xe4bb, 0x04b4, 0x04b4, 0x04b4, 0x04ac, 0x05ac, 0xe4ab, 0xe4ab, 0xe4ab, 0xe4b3, 0xe5b3, 0x84ab, 0xc29a, 0x2292, 0x6179, 
0xc178, 0xc078, 0x0081, 0x6089, 0xc199, 0x019a, 0x419a, 0x629a, 0xa29a, 0xa29a, 0xa292, 0xa292, 0xa29a, 0xc29a, 0xa2a2, 0x82a2, 0xa2aa, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0xa2b2, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0x82b2, 0x82aa, 0x82aa, 0xa2aa, 0xa2a2, 0xa2a2, 0xa2a2, 0xa29a, 0xa29a, 0xa29a, 0xa29a, 0xa292, 0xa29a, 0xa29a, 0xa292, 0xa29a, 0xa29a, 0x8292, 0x4392, 0xa281, 0xa381, 
0xe180, 0xe078, 0xc078, 0xe078, 0x0081, 0x0079, 0x2079, 0x2079, 0x4071, 0x4071, 0x4071, 0x4071, 0x4071, 0x4071, 0x4079, 0x2079, 0x2081, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2089, 0x2091, 0x2089, 0x2089, 0x2089, 0x2081, 0x4081, 0x2081, 0x4079, 0x4079, 0x4079, 0x4079, 0x4071, 0x4071, 0x2071, 0x4071, 0x4071, 0x6071, 0x6079, 0x8079, 0xa081, 0x8179, 0xa381, 0xa489
};