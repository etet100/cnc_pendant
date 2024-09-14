#include "Arduino.h"
#include "images.h"

// btn_spindle.png
// width 53
// height 40
// mode RGB

static const ImageSize image_btn_spindle_size = {53, 40, 4240};
static const uint16_t image_btn_spindle[] PROGMEM = {
0x0000, 0x1084, 0x38c6, 0x9ad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0x9ad6, 0x38c6, 0x1084, 0x0000, 
0xf07b, 0x9ad6, 0xfbde, 0x1cdf, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x1cdf, 0xfbde, 0x9ad6, 0xf07b, 
0x39c6, 0xdbde, 0x3de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x9eef, 0x9eef, 0xbef7, 0x9ef7, 0x9eef, 0x5def, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x3de7, 0xdbde, 0x38c6, 
0x9ace, 0x1cdf, 0x5de7, 0x7eef, 0x7eef, 0x7eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0xdff7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x9eff, 0x9ef7, 0x9ef7, 0xffff, 0xffff, 0xffff, 0xdfff, 0xdff7, 0xdfff, 0xdff7, 0xdeff, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x7eef, 0x7eef, 0x7eef, 0x5de7, 0x1cdf, 0x9ace, 
0x9ace, 0x1cdf, 0x5de7, 0x7ee7, 0x7eef, 0x7eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0xdff7, 0x95f6, 0x72ac, 0x72ac, 0x72ac, 0x72ac, 0xb7ac, 0xffef, 0x21d4, 0x4188, 0x4188, 0x4588, 0x7393, 0xfec6, 0xffff, 0xffff, 0x75f6, 0x9ebe, 0xffff, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x7eef, 0x7eef, 0x7ee7, 0x5de7, 0x1cdf, 0x9ace, 
0x9ace, 0xfcde, 0x3ddf, 0x7ee7, 0x7ee7, 0x9eef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0xdff7, 0x51f6, 0x4190, 0x4188, 0x4188, 0x4188, 0x5188, 0xffd7, 0x21d4, 0x4188, 0x4188, 0x4188, 0x4188, 0x4488, 0xb693, 0x11de, 0x4190, 0x398c, 0xffff, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9eef, 0x7ee7, 0x7ee7, 0x3ddf, 0xfcde, 0x9ace, 
0x7ac6, 0xfcd6, 0x3ddf, 0x7ee7, 0x7ee7, 0x9fe7, 0x9fef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xdfef, 0xffff, 0x30f6, 0x4188, 0x4188, 0x4188, 0x5188, 0xffd7, 0x5bf7, 0x9ef7, 0x97e6, 0xaec4, 0x6191, 0x4188, 0x4188, 0x4188, 0x4188, 0x398c, 0xffff, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0x9fef, 0x9fe7, 0x7ee7, 0x5ee7, 0x3ddf, 0xfcd6, 0x7ac6, 
0x7ac6, 0xfcd6, 0x3ddf, 0x5edf, 0x7ee7, 0x9fe7, 0x9fe7, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xdfef, 0xfeff, 0x28d4, 0x4188, 0x4188, 0x4188, 0x5188, 0xffd7, 0xdfff, 0xffff, 0xffff, 0xffff, 0xddff, 0x21bb, 0x4188, 0x4188, 0x4188, 0x398c, 0xffff, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0x9fe7, 0x9fe7, 0x7ee7, 0x5edf, 0x3ddf, 0xfcd6, 0x7ac6, 
0x7ac6, 0xfcce, 0x1dd7, 0x5edf, 0x5edf, 0x7fe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xfff7, 0x92fe, 0x4190, 0x4188, 0xcb92, 0x4190, 0x5188, 0xffd7, 0xbfff, 0x9fe7, 0xbfe7, 0xffff, 0x31f6, 0x4190, 0x4188, 0x4188, 0x4188, 0x398c, 0xffff, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0x7fe7, 0x5edf, 0x5edf, 0x1dd7, 0xfcce, 0x7ac6, 
0x7ac6, 0xdcce, 0x1dd7, 0x5edf, 0x5edf, 0x7fdf, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0xbfe7, 0xfeff, 0xe4cb, 0x4188, 0xb189, 0xbfd7, 0x31f6, 0xf391, 0xffdf, 0x9ff7, 0x9fe7, 0x9fe7, 0xdaef, 0xe1b1, 0x4188, 0x4188, 0x4188, 0x4188, 0xba94, 0xffff, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x7fdf, 0x5edf, 0x5edf, 0x1dd7, 0xdcce, 0x7ac6, 
0x5ac6, 0xdcce, 0x1dd7, 0x3ed7, 0x5edf, 0x7fdf, 0x7fdf, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0xbfe7, 0xf9ff, 0x01a9, 0x4188, 0xfb94, 0xffff, 0xffff, 0xdff7, 0xffff, 0x9ff7, 0x9fe7, 0x9fe7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbff7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x7fdf, 0x7fdf, 0x5edf, 0x3ed7, 0x1dd7, 0xdcce, 0x5ac6, 
0x5abe, 0xdcce, 0x1dd7, 0x3ed7, 0x5ed7, 0x5fdf, 0x7fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0xdfdf, 0x73fe, 0x6992, 0x6f92, 0x5fc7, 0xbff7, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x7fdf, 0x5fdf, 0x5ed7, 0x3ed7, 0x1dd7, 0xdcce, 0x5abe, 
0x5abe, 0xdcc6, 0xfdce, 0x3ed7, 0x5ed7, 0x5fd7, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xdfdf, 0x35ff, 0x4198, 0x4688, 0x9fb6, 0xffff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xffdf, 0x92fe, 0x4188, 0x4b88, 0x3fbf, 0xdfff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x5fd7, 0x5ed7, 0x3ed7, 0xfdce, 0xdcc6, 0x5abe, 
0x5abe, 0xbcc6, 0xfdce, 0x1ecf, 0x3ed7, 0x5fd7, 0x5fd7, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xbfdf, 0x57ff, 0x69a2, 0x6992, 0x7fb6, 0xbfff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xffef, 0x51fe, 0x4188, 0x4b88, 0x3fbf, 0xbfff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x5fd7, 0x5fd7, 0x3ed7, 0x1ecf, 0xfdce, 0xbcc6, 0x5abe, 
0x3ab6, 0xbcbe, 0xfdc6, 0x1ecf, 0x3ecf, 0x3fd7, 0x5fd7, 0x7fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x7fd7, 0xbfd7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5fef, 0x5fd7, 0x5fd7, 0xfff7, 0xdfff, 0xffff, 0xffff, 0xe9e4, 0x4188, 0x1189, 0xffd7, 0xbff7, 0x5fd7, 0x5fd7, 0x7fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x3fd7, 0x3ecf, 0x1ecf, 0xfdc6, 0xbcbe, 0x3ab6, 
0x3ab6, 0xbcbe, 0xfdc6, 0x1ecf, 0x3ecf, 0x3fcf, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0xffef, 0xa8dc, 0x4188, 0x4188, 0x4188, 0x4188, 0xf389, 0xdfdf, 0x5fdf, 0x5fd7, 0x5fd7, 0xfaff, 0xe8b1, 0xfea5, 0x99ff, 0xa1a9, 0x4188, 0xf78b, 0xffff, 0x7fef, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x3fcf, 0x3ecf, 0x1ecf, 0xfdc6, 0xbcbe, 0x3ab6, 
0x3ab6, 0x9cbe, 0xddc6, 0x1ec7, 0x1ecf, 0x3fcf, 0x3fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0xfff7, 0x21d4, 0x4188, 0x4188, 0x4188, 0x4888, 0x3eae, 0xffff, 0x5fef, 0x5fcf, 0x5fcf, 0xf9ff, 0x41a8, 0x4888, 0xc89a, 0x4188, 0x4888, 0x9fb6, 0xffff, 0x5fdf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x3fcf, 0x3fcf, 0x1ecf, 0x1ec7, 0xddc6, 0x9cbe, 0x3ab6, 
0x3ab6, 0x9cbe, 0xddbe, 0xfec6, 0x1ec7, 0x1fcf, 0x3fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0xfff7, 0x21d4, 0x4188, 0x4188, 0x4188, 0xb38a, 0xdfe7, 0xffff, 0xffff, 0xdff7, 0x9fe7, 0xf9ff, 0x41a8, 0x4188, 0x4188, 0x4188, 0x3994, 0xfff7, 0xbff7, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x3fcf, 0x1fcf, 0x1ec7, 0xfec6, 0xddbe, 0x9cbe, 0x3ab6, 
0x1aae, 0x9cb6, 0xddbe, 0xfec6, 0x1ec7, 0x1fc7, 0x3fc7, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0xfff7, 0x21d4, 0x4188, 0x4188, 0x4188, 0x4188, 0x6a89, 0x75a4, 0x5ac6, 0x9eef, 0x5ee7, 0xf9ff, 0x41a8, 0x4188, 0x4188, 0x4788, 0x1eae, 0xffff, 0xbfff, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fc7, 0x1fc7, 0x1ec7, 0xfec6, 0xddbe, 0x9cb6, 0x1aae, 
0x1aae, 0x7cb6, 0xbdbe, 0xfebe, 0xfec6, 0x1fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0xffef, 0x21d4, 0x4888, 0x1aae, 0x09c4, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x398c, 0xf9ff, 0x41a8, 0x4188, 0x4188, 0x4188, 0x4888, 0x3eae, 0xbff7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x1fc7, 0xfec6, 0xfebe, 0xbdbe, 0x7cb6, 0x1aae, 
0x1aae, 0x7cb6, 0xbdb6, 0xdebe, 0xfebe, 0x1fbf, 0x1fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0xdfef, 0x95f6, 0x7ebe, 0xffff, 0xffff, 0xf7f6, 0x6ab3, 0x0189, 0x4188, 0x4188, 0x398c, 0xfdff, 0xb2cc, 0x72ac, 0x72ac, 0x72ac, 0x72ac, 0x9ebe, 0xbff7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x1fc7, 0x1fbf, 0xfebe, 0xdebe, 0xbdb6, 0x7cb6, 0x1aae, 
0x1aa6, 0x7cae, 0xbdb6, 0xdebe, 0xfebe, 0xffbe, 0x1fbf, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x9fd7, 0x9fef, 0x9fdf, 0x9fef, 0x9fdf, 0xfff7, 0xffff, 0xffff, 0x9ef7, 0x9ef7, 0x9ff7, 0xffff, 0xdff7, 0xffff, 0xffff, 0xffff, 0xffff, 0xdff7, 0x9fef, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fbf, 0xffbe, 0xfebe, 0xdebe, 0xbdb6, 0x7cae, 0x1aa6, 
0x1aa6, 0x5cae, 0x9db6, 0xdeb6, 0xdeb6, 0xffbe, 0xffbe, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x7fd7, 0x7fd7, 0x9fe7, 0x7fd7, 0x5fd7, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0xffbe, 0xffbe, 0xdeb6, 0xbeb6, 0x9db6, 0x5cae, 0x1aa6, 
0xfaa5, 0x5cae, 0x9dae, 0xbeb6, 0xdeb6, 0xffb6, 0xffbe, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0xffbe, 0xffb6, 0xdeb6, 0xbeb6, 0x9dae, 0x5cae, 0xfaa5, 
0xfaa5, 0x5ca6, 0x9dae, 0xbeb6, 0xbeb6, 0xdfb6, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xdfb6, 0xbeb6, 0xbeb6, 0x9dae, 0x5ca6, 0xfaa5, 
0xfa9d, 0x5ca6, 0x9dae, 0xbeae, 0xbeae, 0xdfb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xdfb6, 0xbeae, 0xbeae, 0x9dae, 0x5ca6, 0xfa9d, 
0xfa9d, 0x3ca6, 0x7da6, 0x9eae, 0xbeae, 0xdfae, 0xdfb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xdfb6, 0xdfae, 0xbeae, 0x9eae, 0x7da6, 0x3ca6, 0xfa9d, 
0xda9d, 0x3c9e, 0x7da6, 0x9da6, 0xae9c, 0x0020, 0x0000, 0x0000, 0xf001, 0x3f8e, 0xf4ad, 0xa040, 0x0000, 0x0000, 0x0400, 0x5a44, 0xddae, 0x888b, 0x0000, 0x0000, 0x0000, 0x0900, 0x9e65, 0x9aae, 0x2062, 0xcf01, 0xfc7d, 0xc98b, 0xb009, 0x7f8e, 0xee9c, 0x0018, 0x0000, 0x0000, 0x6a00, 0x7d65, 0xdfae, 0x0f9d, 0xca20, 0xbe6d, 0xdfae, 0xdfae, 0xdfae, 0x9aae, 0x406a, 0x0000, 0x0000, 0x0200, 0x7a44, 0x9ea6, 0x7da6, 0x3c9e, 0xda9d, 
0xda9d, 0x3c9e, 0x7da6, 0x9ca6, 0x6883, 0xca00, 0xf353, 0x2963, 0x0908, 0x9e65, 0xd4a5, 0xc040, 0xd122, 0x106c, 0x4041, 0xf61a, 0xbe9e, 0x559d, 0xef6b, 0x6030, 0x7012, 0x5664, 0x5f8e, 0x9aae, 0x2062, 0x0000, 0x8c01, 0x854a, 0x9001, 0x7f86, 0xee9c, 0x0518, 0x9343, 0xcd6b, 0x0220, 0x5b3c, 0xdfa6, 0xef9c, 0xca20, 0xbe6d, 0xdfae, 0xdfae, 0xdfae, 0x9aae, 0x626a, 0xce01, 0x1364, 0x5464, 0x9d7d, 0x9ea6, 0x7da6, 0x3c9e, 0xda9d, 
0xda95, 0x3c9e, 0x5d9e, 0x9ca6, 0x687b, 0xf109, 0x5f8e, 0xb49d, 0x1053, 0xfe7d, 0xd4a5, 0xe540, 0xbc44, 0x7ba6, 0x636a, 0xf61a, 0xbf9e, 0xdfae, 0x58ae, 0x8251, 0xf933, 0xdfa6, 0xdfae, 0x7aae, 0x2062, 0x2801, 0x0020, 0x0000, 0x9001, 0x5f86, 0xce9c, 0xcb20, 0xbe65, 0x16a6, 0x0341, 0x5b3c, 0xdfa6, 0xef9c, 0xca20, 0xbe65, 0xdfae, 0xdfae, 0xdfae, 0x7aae, 0x4362, 0x3723, 0xbf9e, 0xbfa6, 0x9ea6, 0x9ea6, 0x5d9e, 0x3c9e, 0xda95, 
0xba95, 0x1c96, 0x5d9e, 0x7ca6, 0x687b, 0x0500, 0x4c32, 0x8c42, 0xb643, 0x7f96, 0xd4a5, 0xc040, 0x8a09, 0x6a3a, 0x0020, 0xf61a, 0x9f96, 0xbfa6, 0x58a6, 0x8251, 0xd933, 0xbfa6, 0xbfa6, 0x7aa6, 0x2362, 0x3623, 0xf28c, 0xa030, 0x7001, 0x5f86, 0xce94, 0xcb20, 0xbe65, 0xf6a5, 0x0341, 0x5b3c, 0xbfa6, 0xef94, 0xaa20, 0x9e65, 0xbfa6, 0xbfa6, 0xbfa6, 0x7aa6, 0x4162, 0xa800, 0x6c3a, 0x7543, 0x5e8e, 0x7e9e, 0x5d9e, 0x1c96, 0xba95, 
0xba95, 0x1c96, 0x5d9e, 0x7d9e, 0xae94, 0x0020, 0x0000, 0x0000, 0x0900, 0x7e5d, 0xd49d, 0xa040, 0x0000, 0x0000, 0x0400, 0x5a44, 0xbf9e, 0xbfa6, 0x58a6, 0x8251, 0xd933, 0xbf9e, 0xbfa6, 0x7aa6, 0x235a, 0x3723, 0x7d9e, 0xa883, 0x9001, 0x5f7e, 0xce94, 0xab20, 0xbe65, 0xf69d, 0x0341, 0x5b3c, 0xbf9e, 0xef94, 0xaa20, 0x9e65, 0xbfa6, 0xbfa6, 0xbfa6, 0x7aa6, 0x2062, 0x0000, 0x0000, 0xf201, 0x3e86, 0x7e9e, 0x5d9e, 0x1c96, 0xba95, 
0xba95, 0x1c96, 0x3d96, 0x7d9e, 0x148d, 0x9964, 0x5f96, 0xef94, 0x8920, 0x7e5d, 0xb49d, 0xe538, 0x9c44, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0x38a6, 0x8251, 0xd92b, 0xbf9e, 0xbfa6, 0x5aa6, 0x035a, 0x3723, 0x9e96, 0xa983, 0x9009, 0x5f7e, 0xae94, 0xab18, 0x9e65, 0xf69d, 0x0341, 0x3b3c, 0xbf9e, 0xcf94, 0xaa18, 0x9e65, 0xbfa6, 0xbfa6, 0xbfa6, 0x5aa6, 0x2362, 0x171b, 0x7f96, 0x9f9e, 0x7e9e, 0x7e9e, 0x3d96, 0x1c96, 0xba95, 
0xba8d, 0xfc95, 0x3d96, 0x5c96, 0x4873, 0x6e01, 0x1965, 0x0c74, 0x4918, 0x5e5d, 0x949d, 0xe538, 0x7c44, 0x9f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0xdb9d, 0x147d, 0x0041, 0x1523, 0x7b7d, 0x5f8e, 0x3a9e, 0x035a, 0x1723, 0x7e96, 0xa97b, 0x9009, 0x3f7e, 0xae8c, 0x6818, 0x7854, 0xd27c, 0xa330, 0x3b34, 0x9f9e, 0xcf8c, 0x4818, 0x784c, 0x7a85, 0x9c85, 0x7f9e, 0x3a9e, 0x4262, 0x9312, 0x5a75, 0x5a85, 0xfd85, 0x5e96, 0x3d96, 0xfc95, 0xba8d, 
0xba8d, 0xfc8d, 0x3d96, 0x5d96, 0xca7b, 0x0000, 0x0000, 0x0000, 0xec00, 0xbe65, 0x9495, 0xe538, 0x7c44, 0x7f9e, 0x7f9e, 0x7f9e, 0x7d9e, 0x6873, 0x0000, 0x0000, 0x0000, 0x0900, 0x3e5d, 0x3a9e, 0x035a, 0x1723, 0x5e8e, 0xa97b, 0x9009, 0x1f76, 0x8e8c, 0x0018, 0x0000, 0x0000, 0x0600, 0xbc4c, 0x7f9e, 0xaf8c, 0x0018, 0x0000, 0x0000, 0xb001, 0x1f76, 0x3a9e, 0x205a, 0x0000, 0x0000, 0x0100, 0x3a3c, 0x5e96, 0x3d96, 0xfc8d, 0xba8d, 
0x9a8d, 0xfc8d, 0x1d8e, 0x3e96, 0x1c96, 0x597d, 0x397d, 0x397d, 0xbd7d, 0x5e96, 0x3d96, 0x5985, 0xfe85, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0xba8d, 0x397d, 0x397d, 0x397d, 0x3a7d, 0x3e86, 0x5d96, 0x7985, 0xbd7d, 0x5e96, 0xba8d, 0x7c7d, 0x3e8e, 0xfc95, 0x397d, 0x397d, 0x397d, 0x7c7d, 0x3e8e, 0x5e96, 0xfc95, 0x397d, 0x397d, 0x397d, 0x7c7d, 0x3e8e, 0x5d96, 0x798d, 0x397d, 0x397d, 0x397d, 0xdd7d, 0x3e96, 0x1d8e, 0xfc8d, 0x9a8d, 
0x9a85, 0xdc85, 0x1d8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x1d8e, 0xdc85, 0x9a85, 
0x387d, 0xbb85, 0xfd85, 0xfd8d, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0xfd8d, 0xfd85, 0xbb85, 0x387d, 
0x504b, 0x7a85, 0xbb85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xbb85, 0x7a85, 0x504b, 
0x0000, 0x504b, 0x387d, 0x7a85, 0x7a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x7a85, 0x7a85, 0x387d, 0x504b, 0x0000
};