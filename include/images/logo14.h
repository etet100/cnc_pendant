#include "Arduino.h"

// logo14.png
// width 40
// height 33
// mode RGB

static const uint16_t image_logo14_size[] PROGMEM = {40, 33, 2640};
static const uint16_t image_logo14[] PROGMEM = {
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdeff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
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
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbeff, 0xbef7, 0xbef7, 0xdfff, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbef7, 0x1cd7, 0x5bae, 0x9cbe, 0x7def, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x7def, 0xda85, 0xf813, 0x9934, 0xfcde, 0xffff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3cef, 0x596d, 0x5703, 0xf80b, 0x9bce, 0xdeff, 
0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3ce7, 0x7975, 0x9803, 0x3814, 0x9ace, 0xdeff, 
0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3ce7, 0x5975, 0x9803, 0x3814, 0x9ace, 0xdeff, 
0xdcc6, 0x1ddf, 0x9ef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x7eef, 0x5de7, 0x7def, 0x9ef7, 0x5de7, 0xdcce, 0xdcc6, 0x5de7, 0xbef7, 0xdfff, 0xffff, 0xdfff, 0xbeff, 0x5de7, 0xfcd6, 0xdcc6, 0xbcc6, 0xdcc6, 0xfcce, 0x5de7, 0xbef7, 0xdfff, 0xffff, 0xffff, 0xffff, 0x3ce7, 0x5975, 0x9803, 0x3814, 0x9ace, 0xdeff, 
0x1955, 0x7975, 0x3aa6, 0x1cd7, 0x9ef7, 0xffff, 0xffff, 0xffff, 0x9ef7, 0x5bae, 0x9a75, 0x3aae, 0xbbce, 0xda85, 0x195d, 0x195d, 0xba85, 0xfcce, 0xdeff, 0xbef7, 0x3ddf, 0x7bb6, 0xba8d, 0x3965, 0xf954, 0xf94c, 0xf954, 0x3965, 0xda8d, 0x9bbe, 0x5de7, 0xdfff, 0xffff, 0xffff, 0x3ce7, 0x5975, 0x9803, 0x3814, 0x9ace, 0xdeff, 
0x381c, 0x1814, 0x582c, 0x7a75, 0xdcce, 0xbef7, 0xffff, 0xffff, 0x7df7, 0x1955, 0xb803, 0xd854, 0x3875, 0x181c, 0x180c, 0xf813, 0x381c, 0xfb95, 0xbdff, 0x1cdf, 0xba85, 0x9834, 0x3814, 0x381c, 0x381c, 0x381c, 0x381c, 0x1814, 0x1814, 0xb944, 0x1a9e, 0x5def, 0xdfff, 0xffff, 0x3ce7, 0x5975, 0x9803, 0x3814, 0x9ace, 0xbeff, 
0x396d, 0x782c, 0xd80b, 0xf813, 0x7975, 0x1cdf, 0xdfff, 0xffff, 0x5cef, 0xb93c, 0x7703, 0x1814, 0x3724, 0x1824, 0x9834, 0x7834, 0xd93c, 0x5bae, 0x3ce7, 0xba85, 0x3824, 0xd803, 0x582c, 0x3965, 0x997d, 0x9985, 0x596d, 0x9834, 0xf813, 0xb803, 0xb93c, 0xbbce, 0xbef7, 0xffff, 0x3ce7, 0x7975, 0x9803, 0x1814, 0x9ace, 0x9dff, 
0xfcd6, 0x1aa6, 0x983c, 0xd803, 0x3824, 0x1aa6, 0xbeff, 0xffff, 0x3cef, 0xd944, 0xb803, 0xf803, 0x5824, 0x998d, 0x5ab6, 0x7bb6, 0xbcbe, 0x5def, 0xbbce, 0x782c, 0xd803, 0x7834, 0xd99d, 0xdbd6, 0x3ddf, 0x3de7, 0xfcd6, 0x5abe, 0xf84c, 0xb803, 0x3814, 0xfa9d, 0x7def, 0xffff, 0x3ce7, 0x7975, 0x9803, 0x1814, 0x59c6, 0x3cf7, 
0xdeff, 0x5def, 0xd995, 0x381c, 0x9803, 0x3965, 0x5cef, 0xdfff, 0x5cef, 0xb93c, 0x9803, 0x180c, 0x3965, 0xfbe6, 0x9dff, 0xdeff, 0xdfff, 0xdeff, 0xdcce, 0xb93c, 0x782c, 0xba8d, 0x3ce7, 0xbeff, 0xdfff, 0xdfff, 0xbef7, 0x5cff, 0x997d, 0xd803, 0x1814, 0x797d, 0x5de7, 0xffff, 0x3ce7, 0x7975, 0x9803, 0x1814, 0xf8bd, 0x19b6, 
0xffff, 0xbeff, 0xdbde, 0xb83c, 0x7803, 0xb844, 0xbbce, 0xbeff, 0x5cef, 0xb93c, 0x9803, 0x582c, 0xfa9d, 0x7def, 0xffff, 0xffff, 0xffff, 0xffff, 0x5de7, 0x5bae, 0x1b96, 0xdcd6, 0x7df7, 0x9ef7, 0x9ef7, 0x7df7, 0x3de7, 0xbbce, 0x596d, 0xf803, 0x180c, 0x7975, 0x3de7, 0xffff, 0x3ce7, 0x7975, 0x9803, 0x180c, 0x3785, 0xb84c, 
0xffff, 0xffff, 0x3cef, 0x1955, 0xb803, 0x782c, 0x3aae, 0xbeff, 0x5cef, 0xb93c, 0x7803, 0x983c, 0x5abe, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9ef7, 0x3ce7, 0xbbce, 0x7bb6, 0x5bae, 0x3aa6, 0xfa95, 0x997d, 0x1965, 0x782c, 0xd803, 0x180c, 0x5975, 0x3ce7, 0xffff, 0x3ce7, 0x5975, 0xb803, 0xf80b, 0x5734, 0xf813, 
0xffff, 0xffff, 0x5cef, 0x3965, 0xd803, 0x5824, 0xfa9d, 0x9ef7, 0x5cef, 0xb93c, 0x7803, 0xb83c, 0x7ac6, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0xbeff, 0x3cdf, 0x3ba6, 0x596d, 0xb93c, 0x7834, 0x582c, 0x3824, 0x381c, 0x3824, 0x381c, 0xd803, 0xf80b, 0x5975, 0x3ce7, 0xffff, 0x3ce7, 0x5975, 0xb803, 0xf803, 0xf803, 0x381c, 
0xffff, 0xffff, 0x5cef, 0x3965, 0xd803, 0x5824, 0x1a9e, 0x9ef7, 0x5cef, 0xb93c, 0x7803, 0xb844, 0x9ac6, 0xbef7, 0xffff, 0xffff, 0xffff, 0xffff, 0x3ddf, 0x9a7d, 0x582c, 0x1814, 0x3814, 0x582c, 0x783c, 0xb944, 0xf954, 0x5975, 0xd854, 0xf80b, 0xf80b, 0x5975, 0x3ce7, 0xffff, 0x3ce7, 0x5975, 0xb803, 0xf803, 0x582c, 0x587d
};
