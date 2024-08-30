#include "Arduino.h"

// btn1.png
// width 53
// height 40
// mode RGB

static const uint16_t image_btn1_size[] PROGMEM = {53, 40, 4240};
static const uint16_t image_btn1[] PROGMEM = {
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6108, 0x6108, 0x2421, 0x2842, 0x8e73, 0x718c, 0xf39c, 0xf39c, 0xef7b, 0x694a, 0x2842, 0xcb5a, 0xcb5a, 0xe739, 0x0421, 0x8210, 0xa210, 0x2000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2421, 0x8631, 0x0c63, 0x1084, 0x718c, 0xb294, 0x14a5, 0x75ad, 0xf39c, 0x3084, 0x0c63, 0x8a52, 0x2c63, 0xef7b, 0x8e73, 0x0842, 0x2421, 0x2c63, 0x38c6, 0x9ad6, 0xd39c, 0x694a, 0xc739, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe739, 0x2c63, 0xb294, 0x14a5, 0xb294, 0x9294, 0xd39c, 0x34a5, 0x55ad, 0x9294, 0xae73, 0xae73, 0x1084, 0x9294, 0xb294, 0x6d6b, 0x8631, 0xa631, 0x718c, 0x59ce, 0x34a5, 0x518c, 0x18c6, 0xdfff, 0x7def, 0xf39c, 0x4d6b, 0x4108, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0xc739, 0x4d6b, 0x3084, 0x718c, 0xef7b, 0x8e73, 0xcf7b, 0xb294, 0x14a5, 0x55ad, 0x518c, 0xcf7b, 0x3084, 0xd39c, 0x34a5, 0x14a5, 0x6d6b, 0x8631, 0xaa52, 0xf7bd, 0x18c6, 0x8e73, 0x0842, 0xc739, 0x0c63, 0x18c6, 0x7def, 0xbef7, 0x7def, 0x38c6, 0x8e73, 0x8210, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2842, 0xef7b, 0xae73, 0xef7b, 0x8e73, 0x6d6b, 0x2c63, 0x4d6b, 0x3084, 0xb294, 0x14a5, 0x9294, 0xae73, 0x1084, 0x3084, 0x14a5, 0x14a5, 0x4d6b, 0xa631, 0x2c63, 0xb6b5, 0x3084, 0x2421, 0x8210, 0x0421, 0x8631, 0x4529, 0xaa52, 0xb6b5, 0x1ce7, 0xfbde, 0x5def, 0x3ce7, 0x59ce, 0xeb5a, 0x2000, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0xc318, 0x518c, 0xb6b5, 0xcf7b, 0x4d6b, 0x6d6b, 0x2c63, 0xeb5a, 0xaa52, 0x6d6b, 0x718c, 0x3084, 0x718c, 0xcf7b, 0x1084, 0x6d6b, 0x9294, 0x14a5, 0x4d6b, 0xc739, 0x2c63, 0xb6b5, 0xd39c, 0x2842, 0x8a52, 0xcf7b, 0x9294, 0xb294, 0xcf7b, 0xc739, 0x8a52, 0x96b5, 0x1ce7, 0xfbde, 0xdbde, 0xfbde, 0xbef7, 0x34a5, 0x0421, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x8631, 0x96b5, 0x9ad6, 0xcf7b, 0x2c63, 0xae73, 0xcb5a, 0xcb5a, 0x494a, 0xaa52, 0x1084, 0xef7b, 0x718c, 0xae73, 0xae73, 0xcf7b, 0x0c63, 0x34a5, 0x1084, 0x8631, 0x694a, 0xf39c, 0xb6b5, 0x9294, 0xb294, 0xb6b5, 0x59ce, 0xdbde, 0xdbde, 0xdbde, 0x34a5, 0xaa52, 0x518c, 0x9ad6, 0x1ce7, 0xfbde, 0xdbde, 0xbad6, 0xdfff, 0xbad6, 0x494a, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0xe739, 0x96b5, 0x9ad6, 0x518c, 0x0c63, 0x6d6b, 0x4d6b, 0xcb5a, 0x494a, 0x8a52, 0x8e73, 0xae73, 0x3084, 0x8e73, 0x4d6b, 0x1084, 0x0c63, 0x8e73, 0xf39c, 0x8a52, 0x0421, 0xae73, 0x75ad, 0x55ad, 0xb6b5, 0x38c6, 0x9ad6, 0x9ad6, 0x79ce, 0xbad6, 0xfbde, 0x1ce7, 0x3084, 0xae73, 0x38c6, 0x1ce7, 0xdbde, 0xdbde, 0xdbde, 0x9ad6, 0x7def, 0xfbde, 0xeb5a, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0xa631, 0x75ad, 0x79ce, 0x75ad, 0x6d6b, 0x4d6b, 0xae73, 0xcb5a, 0xaa52, 0x494a, 0x6d6b, 0xcf7b, 0x8e73, 0xcf7b, 0x2842, 0x8e73, 0x1084, 0x694a, 0x718c, 0x3084, 0x0421, 0xc739, 0xd39c, 0xb6b5, 0xf7bd, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xfbde, 0x3ce7, 0x96b5, 0x8e73, 0xb6b5, 0x1ce7, 0xfbde, 0xdbde, 0xdbde, 0xdbde, 0xbad6, 0x3ce7, 0xbad6, 0xaa52, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x2000, 0x0421, 0x96b5, 0x59ce, 0xd7bd, 0xb294, 0x4d6b, 0x8e73, 0x2c63, 0x494a, 0x694a, 0x0c63, 0x1084, 0x8e73, 0x518c, 0x494a, 0x0842, 0xef7b, 0xae73, 0x0842, 0x14a5, 0x2c63, 0xa210, 0x6d6b, 0x96b5, 0xd7bd, 0x9ad6, 0xbad6, 0x59ce, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xdbde, 0xfbde, 0x9ad6, 0xae73, 0x96b5, 0x3ce7, 0xfbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xbad6, 0x5def, 0xbad6, 0x8631, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0xd39c, 0xf7bd, 0xd7bd, 0x96b5, 0x1084, 0x8e73, 0x8e73, 0xcb5a, 0x694a, 0xeb5a, 0xcf7b, 0xae73, 0x1084, 0x4d6b, 0xa631, 0xcb5a, 0x3084, 0x6d6b, 0x2842, 0x75ad, 0x494a, 0x8631, 0x718c, 0x96b5, 0x59ce, 0xbad6, 0x79ce, 0x59ce, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xdbde, 0xfbde, 0xef7b, 0xb6b5, 0x3ce7, 0xfbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xbad6, 0x5def, 0x79ce, 0x6108, 0x0000, 0x0000, 
0x0000, 0x0000, 0x2c63, 0xb6b5, 0xb6b5, 0xb6b5, 0x14a5, 0xae73, 0x8e73, 0x4d6b, 0x694a, 0xcb5a, 0x8e73, 0xef7b, 0xae73, 0xef7b, 0xe739, 0x2842, 0xae73, 0x1084, 0x0c63, 0x0c63, 0x96b5, 0xc739, 0xaa52, 0x14a5, 0xb6b5, 0xfbde, 0xbad6, 0x59ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0xdbde, 0x3ce7, 0x7def, 0x9ad6, 0xef7b, 0xb6b5, 0x1ce7, 0xfbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xfbde, 0x1ce7, 0xf39c, 0x0000, 0x0000, 
0x0000, 0x4108, 0x96b5, 0xb6b5, 0x75ad, 0x96b5, 0x9294, 0x6d6b, 0x6d6b, 0x0c63, 0x494a, 0x2c63, 0xef7b, 0x6d6b, 0xcf7b, 0x694a, 0xe739, 0xaa52, 0x518c, 0xcf7b, 0x8a52, 0x518c, 0xf39c, 0x2842, 0xae73, 0x96b5, 0x18c6, 0x59ce, 0x75ad, 0x96b5, 0xbad6, 0xfbde, 0xdbde, 0xdbde, 0xfbde, 0x59ce, 0x14a5, 0x9294, 0x55ad, 0x9ad6, 0x1ce7, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xbad6, 0x1ce7, 0xfbde, 0xe318, 0x0000, 
0x0000, 0x6d6b, 0x75ad, 0x75ad, 0x75ad, 0x55ad, 0x1084, 0x8e73, 0x6d6b, 0xaa52, 0x694a, 0x6d6b, 0xef7b, 0x2c63, 0xeb5a, 0x0842, 0x8a52, 0x4d6b, 0x518c, 0xae73, 0x694a, 0xb6b5, 0x8e73, 0x2c63, 0x718c, 0xd7bd, 0x9ad6, 0x34a5, 0x0c63, 0x694a, 0x4d6b, 0x14a5, 0xdbde, 0x3ce7, 0xd7bd, 0x2c63, 0x8a52, 0xcf7b, 0xf7bd, 0x1ce7, 0x1ce7, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xfbde, 0xf39c, 0x0000, 
0x0000, 0x14a5, 0x75ad, 0x34a5, 0x75ad, 0x14a5, 0xcf7b, 0x8e73, 0x2c63, 0x494a, 0x8a52, 0x4d6b, 0x4d6b, 0xcb5a, 0x694a, 0xcb5a, 0xaa52, 0xcf7b, 0x1084, 0x2c63, 0xcf7b, 0x75ad, 0xaa52, 0x3084, 0x75ad, 0x18c6, 0x18c6, 0x6d6b, 0xa631, 0xa631, 0x4529, 0x0842, 0x96b5, 0x3ce7, 0xae73, 0x518c, 0x6d6b, 0x0421, 0x0c63, 0x18c6, 0x1ce7, 0xdbde, 0xbad6, 0xdbde, 0xbad6, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xfbde, 0x9ad6, 0x0000, 
0xc318, 0x14a5, 0x55ad, 0x14a5, 0x55ad, 0xb294, 0xcf7b, 0x8e73, 0xeb5a, 0x494a, 0x2c63, 0x6d6b, 0xaa52, 0xcb5a, 0xaa52, 0x8a52, 0x0c63, 0x8e73, 0x6d6b, 0xae73, 0x9294, 0x0c63, 0x8e73, 0xf39c, 0xf7bd, 0xb6b5, 0x718c, 0x2842, 0x0421, 0xc739, 0xc739, 0xe739, 0x1084, 0x59ce, 0x14a5, 0x14a5, 0x14a5, 0xb6b5, 0xf7bd, 0x55ad, 0x9ad6, 0xfbde, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xfbde, 0x9ad6, 0xe739, 
0xaa52, 0x14a5, 0x34a5, 0x34a5, 0x34a5, 0x3084, 0xae73, 0xae73, 0xcb5a, 0x8a52, 0x4d6b, 0x2c63, 0x8a52, 0xeb5a, 0xaa52, 0x8a52, 0x4d6b, 0x6d6b, 0xcf7b, 0xae73, 0xeb5a, 0xe739, 0x34a5, 0x14a5, 0xd7bd, 0x38c6, 0xb294, 0x718c, 0xd39c, 0x718c, 0xae73, 0xcf7b, 0xcf7b, 0xf39c, 0xbad6, 0x79ce, 0x79ce, 0x1ce7, 0xdbde, 0x55ad, 0x59ce, 0xfbde, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xdbde, 0xbad6, 0x9294, 
0x1084, 0x14a5, 0x14a5, 0x34a5, 0x14a5, 0x1084, 0xcf7b, 0x8e73, 0xaa52, 0xcb5a, 0x6d6b, 0x0c63, 0xeb5a, 0xcb5a, 0x8a52, 0xeb5a, 0x6d6b, 0x8e73, 0x4d6b, 0x8a52, 0x8631, 0x8e73, 0x18c6, 0xf39c, 0xf7bd, 0x79ce, 0xb6b5, 0xd7bd, 0xd7bd, 0x55ad, 0x9294, 0x518c, 0xcf7b, 0x518c, 0x38c6, 0x1ce7, 0xfbde, 0x1ce7, 0x9ad6, 0x75ad, 0x59ce, 0xdbde, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xbad6, 0xdbde, 0xdbde, 0xdbde, 0xf7bd, 
0xb294, 0x14a5, 0xf39c, 0x14a5, 0xd39c, 0x3084, 0xef7b, 0x2c63, 0x8a52, 0x4d6b, 0x2c63, 0x8a52, 0xcb5a, 0x8a52, 0x4d6b, 0xef7b, 0x2c63, 0x694a, 0x494a, 0xe739, 0x0842, 0x75ad, 0xb6b5, 0x14a5, 0x59ce, 0x38c6, 0x96b5, 0xf7bd, 0xf7bd, 0x34a5, 0x1084, 0x8e73, 0x0c63, 0x3084, 0xf7bd, 0xdbde, 0xfbde, 0x3ce7, 0x9ad6, 0xd7bd, 0x79ce, 0xdbde, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xdbde, 0x9ad6, 
0xf39c, 0xf39c, 0xf39c, 0xf39c, 0x9294, 0x1084, 0xcf7b, 0xeb5a, 0xeb5a, 0xae73, 0xeb5a, 0x2842, 0x694a, 0x2c63, 0x518c, 0x694a, 0xe739, 0x0842, 0x494a, 0x0842, 0xcf7b, 0x18c6, 0x34a5, 0x96b5, 0x79ce, 0xd7bd, 0x75ad, 0xd7bd, 0xf7bd, 0xb294, 0xeb5a, 0x4d6b, 0xae73, 0xcf7b, 0x34a5, 0x79ce, 0x9ad6, 0xfbde, 0x18c6, 0xd7bd, 0x9ad6, 0xdbde, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xdbde, 
0xf39c, 0xf39c, 0xd39c, 0xf39c, 0x718c, 0x1084, 0x6d6b, 0x2c63, 0xae73, 0xae73, 0x8a52, 0x0842, 0x2c63, 0x518c, 0x494a, 0x8210, 0x0842, 0x2842, 0x0842, 0xcb5a, 0x14a5, 0xf39c, 0x9294, 0xf7bd, 0x38c6, 0x75ad, 0x75ad, 0xb6b5, 0x96b5, 0xd39c, 0x8e73, 0xcb5a, 0x494a, 0xaa52, 0x1084, 0xd7bd, 0x38c6, 0x9ad6, 0x75ad, 0x18c6, 0xbad6, 0xbad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xdbde, 0xdbde, 
0x9294, 0xd39c, 0xd39c, 0xb294, 0x518c, 0xef7b, 0xae73, 0x6d6b, 0x518c, 0xae73, 0x0842, 0x494a, 0x3084, 0xef7b, 0xc318, 0x2421, 0xc739, 0xc739, 0x2842, 0x3084, 0xd39c, 0x4d6b, 0x9294, 0x38c6, 0x96b5, 0xd39c, 0x14a5, 0x55ad, 0x34a5, 0x14a5, 0x34a5, 0xb294, 0x718c, 0xf39c, 0xb6b5, 0xdbde, 0xdbde, 0x18c6, 0xd7bd, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0x9ad6, 
0xcf7b, 0xb294, 0xb294, 0x9294, 0x3084, 0xef7b, 0x6d6b, 0x8e73, 0xb294, 0xcf7b, 0xc739, 0xcb5a, 0xf39c, 0xae73, 0xe318, 0x6529, 0x6529, 0xc739, 0x2c63, 0x518c, 0x6d6b, 0x0c63, 0xd39c, 0x96b5, 0xb294, 0x718c, 0x9294, 0x9294, 0x718c, 0x518c, 0x718c, 0x718c, 0x9294, 0xd39c, 0xd39c, 0x14a5, 0x18c6, 0x18c6, 0x59ce, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xbad6, 0xf7bd, 
0x8a52, 0x9294, 0xb294, 0x9294, 0x1084, 0x8e73, 0x0c63, 0xef7b, 0x14a5, 0x8e73, 0x8631, 0x4d6b, 0x75ad, 0xcf7b, 0x2421, 0x6529, 0x0421, 0x494a, 0x4d6b, 0x8e73, 0x4d6b, 0xae73, 0x718c, 0xd39c, 0x9294, 0x718c, 0x9294, 0x1084, 0x8a52, 0x6529, 0xc739, 0xe739, 0xaa52, 0x4d6b, 0xef7b, 0xf39c, 0x18c6, 0x59ce, 0x79ce, 0x9ad6, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0xbad6, 0x9294, 
0xe318, 0x718c, 0xb294, 0x518c, 0x1084, 0x2c63, 0x0c63, 0x718c, 0x34a5, 0xcb5a, 0xa631, 0xef7b, 0x55ad, 0x718c, 0xe739, 0xa631, 0x2421, 0x494a, 0xcb5a, 0xcb5a, 0xeb5a, 0x4d6b, 0xef7b, 0x9294, 0x9294, 0x718c, 0x718c, 0x718c, 0x518c, 0x1084, 0xcf7b, 0xef7b, 0x9294, 0xf39c, 0xb6b5, 0x9ad6, 0x9ad6, 0x9ad6, 0x79ce, 0x79ce, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xdbde, 0x79ce, 0x2842, 
0x0000, 0x718c, 0xb294, 0x518c, 0xae73, 0x0c63, 0x6d6b, 0x718c, 0x718c, 0x694a, 0xcb5a, 0xd39c, 0xb294, 0xb294, 0xaa52, 0x2842, 0xc739, 0x4529, 0x8a52, 0xcb5a, 0xc739, 0x2842, 0xcf7b, 0xd39c, 0xb294, 0x718c, 0x718c, 0x718c, 0x718c, 0xb294, 0xb294, 0xd39c, 0x9294, 0xf39c, 0x18c6, 0x9ad6, 0xbad6, 0x9ad6, 0x38c6, 0x38c6, 0x79ce, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xbad6, 0xbad6, 0xfbde, 0x9ad6, 0x0000, 
0x0000, 0x0c63, 0xb294, 0x518c, 0x2c63, 0x4d6b, 0xae73, 0xb294, 0xae73, 0xaa52, 0xf39c, 0x14a5, 0x2c63, 0x518c, 0xeb5a, 0x694a, 0xaa52, 0xe318, 0xa631, 0xcb5a, 0xa631, 0x2421, 0xcb5a, 0x518c, 0xb294, 0x9294, 0xb294, 0xb294, 0xb294, 0xd39c, 0x34a5, 0x96b5, 0xd7bd, 0x59ce, 0xdbde, 0xdbde, 0x1ce7, 0xf39c, 0xf39c, 0x18c6, 0x79ce, 0x59ce, 0x79ce, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0x9ad6, 0xbad6, 0xdbde, 0x14a5, 0x0000, 
0x0000, 0x4108, 0x9294, 0x518c, 0xaa52, 0x8e73, 0x718c, 0x9294, 0x0c63, 0xae73, 0x38c6, 0x718c, 0x8631, 0x2c63, 0xae73, 0x694a, 0xeb5a, 0x4529, 0x0421, 0x2421, 0xc318, 0x8210, 0x2421, 0x2842, 0x0c63, 0x8e73, 0x1084, 0x718c, 0xb294, 0xf39c, 0x55ad, 0x96b5, 0x38c6, 0x79ce, 0x79ce, 0xfbde, 0x55ad, 0x8a52, 0xcf7b, 0x75ad, 0x59ce, 0x59ce, 0x59ce, 0x79ce, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0xfbde, 0xdbde, 0x4529, 0x0000, 
0x0000, 0x0000, 0xcb5a, 0xae73, 0x0c63, 0xae73, 0x14a5, 0x3084, 0x0c63, 0x9294, 0x75ad, 0xef7b, 0xa631, 0xa631, 0xb294, 0xef7b, 0x0c63, 0x4529, 0x0421, 0xe318, 0xa210, 0xc318, 0x2421, 0x6529, 0x8631, 0xa631, 0x2842, 0x8a52, 0xcb5a, 0x4d6b, 0xae73, 0xef7b, 0xef7b, 0xef7b, 0xb294, 0xb6b5, 0xcb5a, 0x694a, 0x4d6b, 0x518c, 0x96b5, 0x38c6, 0x59ce, 0x59ce, 0x79ce, 0x79ce, 0x9ad6, 0x9ad6, 0x9ad6, 0xfbde, 0x34a5, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0xcb5a, 0x6d6b, 0xcf7b, 0xd39c, 0x6d6b, 0x2c63, 0x1084, 0x6d6b, 0x6d6b, 0x8a52, 0xc318, 0xcf7b, 0xb6b5, 0xcf7b, 0x2421, 0xe318, 0x0421, 0xc318, 0xe318, 0x8631, 0x494a, 0xeb5a, 0x6d6b, 0xae73, 0xef7b, 0xcf7b, 0x6d6b, 0xeb5a, 0x0842, 0xe318, 0xa631, 0xf39c, 0xcb5a, 0x8a52, 0x4d6b, 0x8e73, 0x8e73, 0x718c, 0xd7bd, 0x59ce, 0x59ce, 0x59ce, 0x79ce, 0x9ad6, 0x79ce, 0x1ce7, 0x79ce, 0xa210, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0xa210, 0x4d6b, 0x1084, 0xef7b, 0xeb5a, 0xef7b, 0x8e73, 0x0842, 0x2c63, 0x8a52, 0xa210, 0xe739, 0x55ad, 0x718c, 0x8631, 0xe318, 0x0421, 0xc318, 0x0421, 0xa631, 0xaa52, 0xae73, 0x718c, 0x718c, 0x9294, 0x718c, 0xef7b, 0x8e73, 0x494a, 0x0421, 0x0842, 0x3084, 0xa631, 0xcb5a, 0xcf7b, 0xef7b, 0x1084, 0x3084, 0x14a5, 0xf7bd, 0x38c6, 0x59ce, 0x59ce, 0x59ce, 0xfbde, 0x9ad6, 0x0842, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x2421, 0xcf7b, 0xef7b, 0x6d6b, 0x518c, 0xeb5a, 0xe739, 0x6d6b, 0xcb5a, 0xe318, 0xe318, 0xcb5a, 0x8e73, 0xc739, 0xa210, 0x2421, 0xe318, 0x2421, 0x8631, 0x494a, 0x4d6b, 0xae73, 0x8e73, 0xae73, 0xae73, 0xae73, 0xcf7b, 0xcb5a, 0x6529, 0x2421, 0xeb5a, 0xc739, 0x2842, 0x3084, 0x55ad, 0x34a5, 0xd39c, 0xd39c, 0x34a5, 0xd7bd, 0x59ce, 0x38c6, 0xbad6, 0x9ad6, 0x0c63, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe739, 0xae73, 0x3084, 0x4d6b, 0x694a, 0xcb5a, 0xef7b, 0x6d6b, 0x8631, 0xe318, 0xa631, 0x0c63, 0x494a, 0x8210, 0x4529, 0x0421, 0x6529, 0xe739, 0x8a52, 0x6d6b, 0xae73, 0x8e73, 0x8e73, 0x8e73, 0xae73, 0x3084, 0xae73, 0xe739, 0x0421, 0x4529, 0x694a, 0x2842, 0x8a52, 0x718c, 0x96b5, 0x96b5, 0xf39c, 0x9294, 0x9294, 0x14a5, 0x79ce, 0xbad6, 0x2c63, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2421, 0x6d6b, 0x0c63, 0xc739, 0x4d6b, 0xb294, 0xae73, 0x494a, 0x8631, 0x8a52, 0x1084, 0x8e73, 0xa210, 0x6529, 0x6529, 0x2421, 0xa631, 0x8a52, 0x2c63, 0x6d6b, 0x4d6b, 0x6d6b, 0x8e73, 0x1084, 0x9294, 0x3084, 0x494a, 0x2842, 0xc739, 0x8631, 0x494a, 0xe739, 0xc318, 0xa631, 0x6d6b, 0x9294, 0x34a5, 0xf39c, 0x34a5, 0x34a5, 0x2842, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6108, 0xa631, 0xe739, 0xae73, 0x34a5, 0x8e73, 0xcb5a, 0x2842, 0xef7b, 0xd39c, 0xef7b, 0x2842, 0x6529, 0xa631, 0x8631, 0xc739, 0x494a, 0xaa52, 0xeb5a, 0x0c63, 0x2c63, 0x8e73, 0x1084, 0x3084, 0xef7b, 0x0c63, 0x494a, 0x0c63, 0xeb5a, 0x8a52, 0xa210, 0x0000, 0x0000, 0x0000, 0xc318, 0xa631, 0x494a, 0x494a, 0xa210, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc318, 0xcf7b, 0xf39c, 0x2c63, 0x4d6b, 0xe739, 0x9294, 0xb294, 0x0c63, 0x2c63, 0x494a, 0x494a, 0xe739, 0x0842, 0x494a, 0x694a, 0x8a52, 0xaa52, 0xeb5a, 0x4d6b, 0xae73, 0xae73, 0xcf7b, 0x1084, 0x6d6b, 0xcb5a, 0xe739, 0x8210, 0x0000, 0x2000, 0x4108, 0x4108, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8210, 0xc739, 0xeb5a, 0x8e73, 0x0842, 0x14a5, 0xae73, 0x8631, 0x494a, 0xcb5a, 0x0c63, 0xaa52, 0x0842, 0x0842, 0xe739, 0xa631, 0xe739, 0xaa52, 0x2c63, 0x4d6b, 0x8e73, 0xef7b, 0x1084, 0x6d6b, 0xc739, 0x4108, 0x0000, 0x2000, 0x4108, 0x4108, 0x4108, 0x4108, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6108, 0x4529, 0xe739, 0xb294, 0x0842, 0x8210, 0x6529, 0xe739, 0x0c63, 0xae73, 0xaa52, 0x0842, 0xa631, 0x2421, 0xa631, 0xaa52, 0xeb5a, 0x0c63, 0x8e73, 0xcf7b, 0x0c63, 0x6529, 0x0000, 0x0000, 0x4108, 0x4108, 0x2000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4108, 0xe318, 0x6108, 0x6108, 0xc318, 0x6529, 0xe739, 0x6d6b, 0xeb5a, 0xe739, 0x2421, 0x0421, 0x494a, 0x2c63, 0xcb5a, 0xcb5a, 0x2c63, 0x694a, 0xe318, 0x0000, 0x0000, 0x2000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x8210, 0xe739, 0x694a, 0xc739, 0xc318, 0x6529, 0x0c63, 0x2c63, 0x8a52, 0x694a, 0xe739, 0xc318, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};
