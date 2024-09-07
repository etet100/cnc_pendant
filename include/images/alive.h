#include "Arduino.h"
#include "images.h"

// alive.png
// width 16
// height 68
// mode RGB

static const ImageSize image_alive_size = {16, 68, 2176};
static const uint16_t image_alive[] PROGMEM = {
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0510, 0x1750, 0x1e70, 0x1750, 0x0510, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1750, 0x1e70, 0x1e70, 0x1e70, 0x1750, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1750, 0x1e70, 0x1e70, 0x1e70, 0x1750, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0510, 0x1750, 0x1e70, 0x1750, 0x0510, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0610, 0x1548, 0x1d68, 0x1d68, 0x1548, 0x0610, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0610, 0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x0610, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1548, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1548, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1d68, 0x1e70, 0x1e70, 0x0618, 0x0618, 0x1e70, 0x1e70, 0x1d68, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1d68, 0x1e70, 0x1e70, 0x0618, 0x0618, 0x1e70, 0x1e70, 0x1d68, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1548, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1548, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0610, 0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x0610, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0610, 0x1548, 0x1d68, 0x1d68, 0x1548, 0x0610, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a28, 0x1750, 0x1d68, 0x1e70, 0x1d68, 0x1750, 0x0a28, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1038, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1038, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0a28, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x0a28, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1750, 0x1e70, 0x1e70, 0x1340, 0x0208, 0x0000, 0x0208, 0x1340, 0x1e70, 0x1e70, 0x1750, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1d68, 0x1e70, 0x1e70, 0x0208, 0x0000, 0x0000, 0x0000, 0x0208, 0x1e70, 0x1e70, 0x1d68, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1d68, 0x1e70, 0x1e70, 0x0208, 0x0000, 0x0000, 0x0000, 0x0208, 0x1e70, 0x1e70, 0x1d68, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1750, 0x1e70, 0x1e70, 0x1340, 0x0208, 0x0000, 0x0208, 0x1340, 0x1e70, 0x1e70, 0x1750, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0a28, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x0a28, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1038, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1038, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a28, 0x1750, 0x1d68, 0x1e70, 0x1d68, 0x1750, 0x0a28, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x1240, 0x1a60, 0x1e70, 0x1e70, 0x1a60, 0x1240, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1240, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1240, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x1650, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1650, 0x0000, 0x0000, 
0x0000, 0x1240, 0x1e70, 0x1e70, 0x1e70, 0x1348, 0x0718, 0x0000, 0x0000, 0x0718, 0x1348, 0x1e70, 0x1e70, 0x1e70, 0x1240, 0x0000, 
0x0618, 0x1e70, 0x1e70, 0x1e70, 0x0d30, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0d30, 0x1e70, 0x1e70, 0x1e70, 0x0618, 
0x1240, 0x1e70, 0x1e70, 0x1348, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1348, 0x1e70, 0x1e70, 0x1240, 
0x1a60, 0x1e70, 0x1e70, 0x0718, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0718, 0x1e70, 0x1e70, 0x1a60, 
0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e70, 0x1e70, 0x1e70, 
0x1a60, 0x1e70, 0x1e70, 0x0718, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0718, 0x1e70, 0x1e70, 0x1a60, 
0x1240, 0x1e70, 0x1e70, 0x1348, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1348, 0x1e70, 0x1e70, 0x1240, 
0x0618, 0x1e70, 0x1e70, 0x1e70, 0x0d30, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0d30, 0x1e70, 0x1e70, 0x1e70, 0x0618, 
0x0000, 0x1240, 0x1e70, 0x1e70, 0x1e70, 0x1348, 0x0718, 0x0000, 0x0000, 0x0718, 0x1348, 0x1e70, 0x1e70, 0x1e70, 0x1240, 0x0000, 
0x0000, 0x0000, 0x1650, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1650, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x1240, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1240, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0618, 0x1240, 0x1a60, 0x1e70, 0x1e70, 0x1a60, 0x1240, 0x0618, 0x0000, 0x0000, 0x0000, 0x0000
};