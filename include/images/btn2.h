#include "Arduino.h"

// btn2.png
// width 50
// height 50
// mode RGB

static const uint16_t image_btn2_size[] PROGMEM = {50, 50, 5000};
static const uint16_t image_btn2[] PROGMEM = {
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xfbe6, 0xf7c5, 0xf3a4, 0xb2a4, 0x13ad, 0x37ce, 0x5def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdade, 0x7094, 0x885a, 0xc539, 0xc639, 0xc639, 0xc641, 0xe639, 0x064a, 0x8862, 0xcd8b, 0xf7cd, 0xbeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x2f94, 0xc541, 0x4331, 0x6531, 0x8531, 0xa531, 0xe641, 0xe641, 0xe541, 0xe641, 0xa539, 0x064a, 0x4752, 0xac83, 0x1ce7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x1be7, 0x675a, 0x6439, 0x4331, 0x0329, 0x2329, 0x6431, 0x4429, 0xe320, 0x2329, 0x6431, 0x4429, 0x4429, 0x4429, 0x8531, 0x6752, 0x6c7b, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9ef7, 0x475a, 0xe220, 0xe220, 0x2321, 0x4429, 0x0329, 0x2431, 0x6431, 0xe320, 0xa218, 0x0329, 0xe320, 0xe318, 0x2329, 0x0319, 0x8529, 0xc539, 0x8c73, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x6c7b, 0xa120, 0xa118, 0xe218, 0xe318, 0xe218, 0xc220, 0x8118, 0x8118, 0xa118, 0x6110, 0x8118, 0xc220, 0xc220, 0xe220, 0x0321, 0xc118, 0x6529, 0xa631, 0xce7b, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xb6bd, 0x0229, 0xa118, 0x8110, 0xa110, 0xa118, 0x6110, 0x4008, 0x2008, 0x2008, 0x2010, 0x4010, 0x4018, 0x8120, 0xc128, 0xc128, 0x0229, 0x0229, 0x6429, 0x6429, 0xe639, 0x13a5, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7df7, 0x0752, 0x0329, 0xc218, 0x8110, 0x8110, 0x6110, 0x4008, 0x2010, 0x2008, 0x0008, 0x4018, 0xa128, 0xe230, 0x8449, 0xc451, 0x2662, 0xa77a, 0xc449, 0xe218, 0x4421, 0x8529, 0x2842, 0x1ce7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf2a4, 0x0329, 0xa218, 0x8118, 0xa118, 0x8110, 0x6118, 0xc120, 0xe228, 0xe228, 0xc130, 0x4341, 0xa451, 0x256a, 0xa87a, 0x2a8b, 0xab9b, 0xcba3, 0xe87a, 0xc228, 0xc218, 0x2421, 0xa531, 0xb294, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0b6b, 0xe228, 0xa118, 0x6110, 0x8118, 0x8110, 0xa120, 0x0239, 0x4349, 0x6459, 0x8459, 0xe561, 0x4672, 0xc882, 0x098b, 0x6a93, 0xcb9b, 0x0ca4, 0xca9b, 0x6441, 0xc218, 0x2321, 0x6531, 0x4c6b, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x2b73, 0xa120, 0x6118, 0x4010, 0x6010, 0xa120, 0xe130, 0x6351, 0xc461, 0xe469, 0x467a, 0xc782, 0x298b, 0x4a93, 0x8a9b, 0xcc9b, 0xcca3, 0x0dac, 0x0cac, 0xe551, 0x0329, 0x2329, 0x6429, 0x8952, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xae83, 0x6110, 0x4010, 0x4010, 0xa120, 0xe138, 0x6351, 0xc461, 0x657a, 0xc782, 0x2893, 0x699b, 0x8a9b, 0xcca3, 0x0cac, 0x4eac, 0x6fb4, 0x4eac, 0x2dac, 0x8872, 0x2331, 0x4321, 0x6421, 0x2742, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0f8c, 0x6010, 0x4008, 0x4010, 0x0231, 0x6351, 0x2562, 0xa782, 0x2993, 0x6a9b, 0xab9b, 0xcca3, 0xeca3, 0xcba3, 0x8b93, 0x6b8b, 0x2a83, 0x6a83, 0xab93, 0xed9b, 0x6331, 0x4429, 0x6429, 0xc639, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x919c, 0x6018, 0x4010, 0x4010, 0x6449, 0xe461, 0x0462, 0x0562, 0x8772, 0xe88a, 0x4993, 0x8aa3, 0x6a9b, 0xa77a, 0x4349, 0xe230, 0x2341, 0x2562, 0xe87a, 0x4a83, 0xc86a, 0x2331, 0x4429, 0xa531, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf3a4, 0x4018, 0x4010, 0x8118, 0x6349, 0xe138, 0xe138, 0xa028, 0xa028, 0x4249, 0xe469, 0xc78a, 0x8682, 0xc461, 0x4349, 0x6349, 0x666a, 0xe882, 0x8b93, 0x0c9c, 0xed93, 0xa549, 0x4331, 0x484a, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x95bd, 0x6118, 0x4008, 0xc128, 0x8351, 0x0562, 0x0562, 0xa451, 0x0241, 0x0141, 0x6259, 0x8782, 0x288b, 0x877a, 0x4351, 0xe138, 0xa349, 0x466a, 0xa77a, 0x6a8b, 0x6eac, 0x6b83, 0x6331, 0x8952, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9ad6, 0x8118, 0x6008, 0xa449, 0xc359, 0x4249, 0x4249, 0x6349, 0x0241, 0xc130, 0x8359, 0x0993, 0xcc9b, 0xe982, 0x6351, 0x6349, 0xe130, 0x6762, 0x6762, 0x0873, 0x4da4, 0xd0b4, 0xc549, 0x2752, 0x3cef, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x074a, 0xa120, 0x666a, 0x8359, 0x2249, 0x4349, 0x2341, 0x2662, 0x8349, 0xc359, 0xaa9b, 0xafbc, 0x6a9b, 0xa77a, 0x0462, 0xe461, 0x656a, 0x2983, 0x0d9c, 0x6eac, 0xf0bc, 0xe97a, 0x8772, 0x74c5, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xad8b, 0x2339, 0xc872, 0x656a, 0xe561, 0xa461, 0xa461, 0xe469, 0xe469, 0x046a, 0xcbab, 0x10cd, 0x2db4, 0x8a9b, 0x498b, 0x088b, 0x6993, 0x2dac, 0xf0bc, 0xf0bc, 0x10bd, 0x2e9c, 0x2983, 0xb5cd, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x13b5, 0x8349, 0x087b, 0x288b, 0x6a93, 0x6a93, 0x098b, 0xe88a, 0x657a, 0xa682, 0x2db4, 0x51dd, 0xcfc4, 0xeba3, 0xcca3, 0x0dac, 0x6db4, 0xefcc, 0x51d5, 0x10cd, 0x30c5, 0xafac, 0x8672, 0x37d6, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x95c5, 0x8349, 0x0883, 0x4993, 0xcaa3, 0xcba3, 0x8a9b, 0x2893, 0x457a, 0xe78a, 0xebab, 0xefcc, 0xf0cc, 0xeca3, 0x4a93, 0x0cac, 0x6db4, 0xcfc4, 0x10cd, 0xf0cc, 0x10bd, 0xafb4, 0xec9b, 0xf6cd, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x74bd, 0x456a, 0xc67a, 0x078b, 0x699b, 0x8a9b, 0x8a9b, 0xe78a, 0xa682, 0x256a, 0xc682, 0x6a9b, 0x2a93, 0x0cac, 0x2993, 0x699b, 0xeaa3, 0x2cac, 0x6db4, 0xafbc, 0xafb4, 0x4ea4, 0x4eac, 0xd5cd, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x94c5, 0x4572, 0x6572, 0xa57a, 0x078b, 0x4893, 0x0793, 0x8582, 0x046a, 0x0249, 0x6359, 0x657a, 0x056a, 0x4672, 0xcba3, 0x4893, 0x288b, 0x6993, 0xab9b, 0x4dac, 0x6ea4, 0x0d94, 0x2da4, 0xb4cd, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x38d6, 0x877a, 0x2462, 0x446a, 0x857a, 0xa67a, 0x857a, 0xa682, 0x457a, 0xa361, 0xa459, 0x6672, 0xc882, 0x6b93, 0xec9b, 0x698b, 0xa77a, 0xa67a, 0x4993, 0x0b9c, 0x0d9c, 0xed8b, 0x11b5, 0x1bef, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x99de, 0x4a83, 0xe461, 0x046a, 0x046a, 0xe469, 0x4472, 0x2572, 0x256a, 0xa77a, 0xc782, 0x4a93, 0xab9b, 0x8b93, 0xc872, 0x4562, 0x8672, 0x288b, 0xcb9b, 0xec93, 0x94bd, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x38ce, 0xc459, 0xc461, 0xa361, 0x4251, 0xa459, 0x266a, 0x066a, 0xe569, 0x467a, 0x677a, 0x8682, 0x098b, 0x8772, 0x045a, 0x866a, 0x298b, 0xab93, 0x0d94, 0x79d6, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdeff, 0x6862, 0xa459, 0xc361, 0x4249, 0x0249, 0x0249, 0xa461, 0x2772, 0xa87a, 0x4a93, 0x2a8b, 0xc982, 0x8772, 0x456a, 0x866a, 0x4983, 0xcb93, 0x0d94, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x33ad, 0x8451, 0xa359, 0x8359, 0xc561, 0xc569, 0x8882, 0x0a93, 0x2a9b, 0x4ba3, 0x8ca3, 0x8c93, 0x6a8b, 0x2883, 0x866a, 0x287b, 0xaa8b, 0xf1a4, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x59ce, 0x2341, 0x4249, 0x6251, 0xc461, 0xa461, 0x6361, 0x8461, 0xa459, 0xc461, 0x4672, 0xc882, 0x2983, 0x087b, 0xe772, 0x287b, 0x697b, 0x17ce, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xb6b5, 0x8118, 0x6020, 0xc130, 0x0139, 0x6351, 0xa359, 0x8459, 0x4249, 0x8349, 0xe361, 0x656a, 0xc67a, 0xe77a, 0xe872, 0xc76a, 0xc76a, 0x096b, 0xdade, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x8952, 0x2008, 0x4010, 0xa120, 0xa020, 0x2241, 0xc459, 0x0562, 0x466a, 0xc772, 0x0883, 0x288b, 0x2983, 0x077b, 0xa76a, 0x4662, 0x255a, 0x497b, 0x709c, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3ce7, 0xa539, 0x6018, 0x2008, 0xc120, 0x8020, 0x8020, 0x2239, 0xa451, 0xc459, 0x0462, 0x656a, 0xe772, 0x0883, 0xa772, 0xe551, 0xe551, 0x876a, 0x6a83, 0xc541, 0xd394, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x5084, 0x2521, 0x4110, 0x4010, 0x8120, 0xa028, 0xa020, 0x8020, 0xa128, 0x0239, 0x0239, 0x6349, 0xa451, 0xc459, 0x6249, 0x2239, 0x6662, 0xe77a, 0x2983, 0x2329, 0xe729, 0x39c6, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x79ce, 0xf29c, 0x0a5b, 0xe639, 0xa629, 0x8531, 0x6010, 0x6020, 0xc028, 0xc130, 0xa028, 0x6020, 0x6020, 0x6020, 0xa128, 0xc130, 0xc130, 0xe130, 0xe451, 0xa66a, 0xe772, 0xc66a, 0x4339, 0x063a, 0x4d63, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9df7, 0xb9de, 0x53b5, 0x8d7b, 0xaa52, 0x894a, 0xc962, 0x6752, 0xa539, 0xe762, 0x875a, 0xe228, 0x4018, 0xc028, 0xe138, 0x0139, 0xc138, 0xa030, 0xa128, 0xa028, 0xa028, 0xc130, 0x6249, 0x2562, 0x8572, 0xe67a, 0x666a, 0x656a, 0x054a, 0xca5a, 0xd6bd, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xffff, 0xffff, 0x7df7, 0x58ce, 0x33ad, 0xcfac, 0x2c94, 0xe96a, 0x0963, 0x4752, 0xe76a, 0x477b, 0xe451, 0x8431, 0xe549, 0x287b, 0x8529, 0x0519, 0x4110, 0x8028, 0xe140, 0x2249, 0x0141, 0x2141, 0x2249, 0x2141, 0x0141, 0x2249, 0x8251, 0x0462, 0xa67a, 0xe67a, 0x245a, 0x455a, 0xc639, 0x6a3a, 0x6c6b, 0x708c, 0x16c6, 0xfbde, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
0xffff, 0xfae6, 0xd1a4, 0xab4a, 0x6b3a, 0x8a42, 0x6a73, 0x8a83, 0xa952, 0xa821, 0x4842, 0x898b, 0xa89b, 0xe67a, 0xe649, 0x265a, 0x287b, 0x6631, 0x2719, 0x2529, 0xc128, 0xc138, 0x2241, 0x4251, 0x4251, 0x8359, 0x8361, 0xc359, 0xa461, 0x8359, 0x0462, 0xa57a, 0xa672, 0x4241, 0x8239, 0xc631, 0x2a3a, 0xc731, 0x6c63, 0x6b6b, 0x6b6b, 0xcd7b, 0x909c, 0x53ad, 0xdade, 0xdeff, 0xffff, 0xffff, 0xffff, 0xffff, 
0x4c6b, 0xeb8b, 0x4973, 0x093a, 0x4a32, 0x493a, 0x096b, 0xa983, 0x8852, 0x8821, 0x8831, 0x4752, 0x0673, 0x2552, 0xe420, 0x265a, 0x4783, 0x8852, 0xa929, 0x093a, 0xc541, 0x2241, 0x4249, 0x6251, 0x8359, 0xc261, 0x8472, 0xa672, 0x6672, 0x056a, 0xe461, 0xa57a, 0x4462, 0xc028, 0x4452, 0xc762, 0x4b73, 0x2321, 0x0a63, 0x0d84, 0x0d84, 0xedb4, 0xccac, 0x2c8c, 0x2d84, 0x8f94, 0x14ce, 0xf9ee, 0x9df7, 0xffff, 
0xe418, 0x6883, 0x4aac, 0x2973, 0x0a5b, 0x0a63, 0x697b, 0x6aa4, 0xa88b, 0x875a, 0x885a, 0xa762, 0xa88b, 0xc762, 0xc410, 0xe541, 0xa98b, 0xa762, 0x0321, 0x4208, 0xe220, 0x055a, 0xa351, 0xa359, 0xc461, 0x246a, 0xe67a, 0x0683, 0xe782, 0x867a, 0x867a, 0xc67a, 0x245a, 0x4239, 0xc78b, 0x888b, 0x885a, 0x273a, 0x296b, 0x0c8c, 0xcb52, 0x4b6b, 0x0a94, 0x296b, 0xaa52, 0xcb4a, 0xcc7b, 0xaca4, 0x8d9c, 0xee7b, 
0x6852, 0x8462, 0xa793, 0x0873, 0x8752, 0x684a, 0xa65a, 0xa88b, 0xc893, 0x0773, 0xa65a, 0x855a, 0xc57a, 0x09a4, 0xa762, 0x4429, 0xe228, 0x0008, 0x2008, 0x2008, 0x4110, 0x6339, 0xa66a, 0x6472, 0xa572, 0xe682, 0x268b, 0x468b, 0x478b, 0x278b, 0xe682, 0xe67a, 0x045a, 0x4562, 0x855a, 0xe541, 0xc631, 0x095b, 0xaa8b, 0xccb4, 0x0b5b, 0x2b32, 0xea5a, 0x4b6b, 0xea31, 0xea19, 0x4a2a, 0xcc73, 0x4d8c, 0x6c6b, 
0xe641, 0x4231, 0x655a, 0xa762, 0x8629, 0x6719, 0x6729, 0xc762, 0x467b, 0x455a, 0x6531, 0x4521, 0x6339, 0xc572, 0xc66a, 0x6431, 0x8110, 0x2000, 0x2008, 0x8018, 0x2010, 0x6018, 0xa251, 0x488b, 0x8993, 0x6893, 0x6893, 0x6893, 0x6793, 0xa99b, 0x698b, 0xa672, 0x8441, 0xa451, 0x6529, 0xe408, 0xe631, 0x884a, 0x697b, 0x89b4, 0xcdac, 0x8a42, 0x8a4a, 0xab83, 0xca4a, 0x0a2a, 0x2a2a, 0x2b5b, 0x6d94, 0x4d9c, 
0x0411, 0xc310, 0x8439, 0xa75a, 0xa729, 0x4811, 0x2719, 0x254a, 0x267b, 0x8762, 0x2621, 0x0611, 0x0421, 0x455a, 0xa562, 0xa531, 0xc410, 0x8308, 0xa410, 0xa118, 0x6010, 0x0000, 0x4010, 0xa120, 0xc449, 0xab93, 0xcba3, 0x8a9b, 0x8a9b, 0xeba3, 0x8993, 0x055a, 0x264a, 0x8431, 0x2511, 0x0511, 0x0419, 0x8721, 0x283a, 0x477b, 0x8cac, 0xab73, 0x6a73, 0xabac, 0xaba4, 0xab7b, 0x4a6b, 0x6973, 0x8da4, 0x0dbd, 
0xe508, 0xc408, 0xe320, 0x2452, 0x274a, 0x6719, 0x2619, 0x8431, 0x066b, 0x086b, 0x6629, 0x0611, 0x0519, 0xe549, 0x6562, 0x8439, 0xa410, 0xc508, 0xe508, 0xe410, 0x0229, 0x4010, 0x2000, 0x2000, 0x4008, 0xc228, 0x297b, 0xeba3, 0xeba3, 0x2cac, 0x689b, 0x6662, 0x4752, 0x6621, 0xe508, 0x2611, 0x8729, 0x8811, 0xa719, 0xa752, 0x4c94, 0x0963, 0x8852, 0x298c, 0x0bb5, 0x2a94, 0x8a7b, 0xc762, 0x096b, 0xea93, 
0x0419, 0x6621, 0x8539, 0xe351, 0x477b, 0x8752, 0x073a, 0x464a, 0x067b, 0xa78b, 0xc76a, 0x0742, 0xa639, 0x2552, 0x2683, 0xc66a, 0x2229, 0xc210, 0xe408, 0x2611, 0x675a, 0x856a, 0x8439, 0x6429, 0x4329, 0x6439, 0x6118, 0xc551, 0x4da4, 0x4db4, 0x078b, 0xc77a, 0xe741, 0xc408, 0x2609, 0x083a, 0xa852, 0x8819, 0x4711, 0x2742, 0x0a8c, 0xc952, 0xa819, 0x6742, 0xea8b, 0xab83, 0x8a52, 0xc841, 0x8731, 0x674a
};
