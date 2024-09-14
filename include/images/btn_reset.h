#include "Arduino.h"
#include "images.h"

// btn_reset.png
// width 53
// height 40
// mode RGB

static const ImageSize image_btn_reset_size = {53, 40, 4240};
static const uint16_t image_btn_reset[] PROGMEM = {
0x0000, 0x1084, 0x38c6, 0x9ad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0xbad6, 0x9ad6, 0x9ad6, 0x38c6, 0x1084, 0x0000, 
0xf07b, 0x9ad6, 0xfbde, 0x1cdf, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x3ce7, 0x1cdf, 0xfbde, 0x9ad6, 0xf07b, 
0x39c6, 0xdbde, 0x3de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x5de7, 0x3de7, 0xdbde, 0x38c6, 
0x9ace, 0x1cdf, 0x5de7, 0x7eef, 0x7eef, 0x7eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x7eef, 0x7eef, 0x7eef, 0x5de7, 0x1cdf, 0x9ace, 
0x9ace, 0x1cdf, 0x5de7, 0x7ee7, 0x7eef, 0x7eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0xbfef, 0xffff, 0xffff, 0xffff, 0xffff, 0xbfff, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x9eef, 0x7eef, 0x7eef, 0x7ee7, 0x5de7, 0x1cdf, 0x9ace, 
0x9ace, 0xfcde, 0x3ddf, 0x7ee7, 0x7ee7, 0x9eef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0xbfef, 0xffff, 0x99ff, 0x44aa, 0x6d89, 0x1fbf, 0xffff, 0xdfff, 0x9fef, 0x9fef, 0xfff7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9fef, 0x9eef, 0x7ee7, 0x7ee7, 0x3ddf, 0xfcde, 0x9ace, 
0x7ac6, 0xfcd6, 0x3ddf, 0x7ee7, 0x7ee7, 0x9fe7, 0x9fef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xffff, 0x99ff, 0x44aa, 0x4188, 0x4188, 0x6d89, 0x1fbf, 0xffff, 0xdfff, 0xbfef, 0xfeff, 0x6fe5, 0x6992, 0x6992, 0x6992, 0x6992, 0x6b92, 0x13a4, 0x5fcf, 0xffff, 0xdfff, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0x9fef, 0x9fe7, 0x7ee7, 0x5ee7, 0x3ddf, 0xfcd6, 0x7ac6, 
0x7ac6, 0xfcd6, 0x3ddf, 0x5edf, 0x7ee7, 0x9fe7, 0x9fe7, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xfff7, 0x99ff, 0x44aa, 0x4188, 0x4188, 0x4188, 0x4188, 0x6d89, 0x1fbf, 0xffff, 0xbff7, 0xf9ff, 0x41a8, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4888, 0x5eae, 0xffff, 0xdff7, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0xbfef, 0x9fe7, 0x9fe7, 0x7ee7, 0x5edf, 0x3ddf, 0xfcd6, 0x7ac6, 
0x7ac6, 0xfcce, 0x1dd7, 0x5edf, 0x5edf, 0x7fe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0xffef, 0x44d4, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x168b, 0xffef, 0x9fef, 0xfeff, 0x6fe5, 0x6992, 0x6992, 0x6992, 0x6992, 0x6992, 0x0189, 0x4188, 0x1089, 0xbfcf, 0xdfff, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0xbfe7, 0x9fe7, 0x7fe7, 0x5edf, 0x5edf, 0x1dd7, 0xfcce, 0x7ac6, 
0x7ac6, 0xdcce, 0x1dd7, 0x5edf, 0x5edf, 0x7fdf, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0xfff7, 0x51f6, 0x0191, 0x4188, 0x4188, 0x4188, 0x4188, 0x4588, 0x1a9d, 0xffff, 0x9fef, 0xfff7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x92fe, 0x4188, 0x4488, 0x7fae, 0xffff, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x7fdf, 0x5edf, 0x5edf, 0x1dd7, 0xdcce, 0x7ac6, 
0x5ac6, 0xdcce, 0x1dd7, 0x3ed7, 0x5edf, 0x7fdf, 0x7fdf, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0xdfef, 0xffff, 0xffff, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0xffff, 0xffff, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0xffe7, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x9fe7, 0x7fdf, 0x7fdf, 0x5edf, 0x3ed7, 0x1dd7, 0xdcce, 0x5ac6, 
0x5abe, 0xdcce, 0x1dd7, 0x3ed7, 0x5ed7, 0x5fdf, 0x7fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x9fdf, 0x7fdf, 0x5fdf, 0x5ed7, 0x3ed7, 0x1dd7, 0xdcce, 0x5abe, 
0x5abe, 0xdcc6, 0xfdce, 0x3ed7, 0x5ed7, 0x5fd7, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x5fd7, 0x5ed7, 0x3ed7, 0xfdce, 0xdcc6, 0x5abe, 
0x5abe, 0xbcc6, 0xfdce, 0x1ecf, 0x3ed7, 0x5fd7, 0x5fd7, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0xdfdf, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x7fdf, 0x5fd7, 0x5fd7, 0x3ed7, 0x1ecf, 0xfdce, 0xbcc6, 0x5abe, 
0x3ab6, 0xbcbe, 0xfdc6, 0x1ecf, 0x3ecf, 0x3fd7, 0x5fd7, 0x7fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x7fd7, 0xdfd7, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0x5fd7, 0x7fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0xdfe7, 0xffff, 0xffff, 0x35ff, 0x4198, 0x4188, 0x5fae, 0xffff, 0xffff, 0xdfff, 0x7fdf, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x3fd7, 0x3ecf, 0x1ecf, 0xfdc6, 0xbcbe, 0x3ab6, 
0x3ab6, 0xbcbe, 0xfdc6, 0x1ecf, 0x3ecf, 0x3fcf, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0xbfd7, 0x56ff, 0x4198, 0x4188, 0x9e9d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5fe7, 0xffef, 0x10ee, 0x0191, 0x4188, 0x4188, 0x4188, 0x4188, 0x4588, 0x1a9d, 0xffff, 0x5fe7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x5fd7, 0x3fcf, 0x3ecf, 0x1ecf, 0xfdc6, 0xbcbe, 0x3ab6, 
0x3ab6, 0x9cbe, 0xddc6, 0x1ec7, 0x1ecf, 0x3fcf, 0x3fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x9fcf, 0xfbff, 0x61ba, 0x4188, 0x4588, 0x698a, 0x6992, 0x6992, 0x6992, 0x6992, 0x379c, 0xffef, 0x9ff7, 0xdfe7, 0x44d4, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x168b, 0xffef, 0x5fd7, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x3fcf, 0x3fcf, 0x1ecf, 0x1ec7, 0xddc6, 0x9cbe, 0x3ab6, 
0x3ab6, 0x9cbe, 0xddbe, 0xfec6, 0x1ec7, 0x1fcf, 0x3fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0xfff7, 0x15ff, 0x0199, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4188, 0x4b88, 0x1fbf, 0x5fef, 0xdfef, 0x9aff, 0x84b2, 0x4188, 0x4188, 0x4188, 0x4188, 0x6d89, 0x1fbf, 0xffff, 0x5fe7, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x5fcf, 0x3fcf, 0x1fcf, 0x1ec7, 0xfec6, 0xddbe, 0x9cbe, 0x3ab6, 
0x1aae, 0x9cb6, 0xddbe, 0xfec6, 0x1ec7, 0x1fc7, 0x3fc7, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x9fd7, 0xffff, 0x9aff, 0xafc4, 0x699a, 0x6992, 0x6992, 0x6992, 0x6992, 0x799c, 0xfff7, 0x9ff7, 0x7fcf, 0xfff7, 0x9aff, 0x84b2, 0x4188, 0x4188, 0x6d89, 0x1fbf, 0xffff, 0x9ff7, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fcf, 0x3fc7, 0x1fc7, 0x1ec7, 0xfec6, 0xddbe, 0x9cb6, 0x1aae, 
0x1aae, 0x7cb6, 0xbdbe, 0xfebe, 0xfec6, 0x1fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x7fcf, 0xdfef, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xdfff, 0x3fdf, 0x3fc7, 0x7fc7, 0xfff7, 0x9aff, 0xc5b2, 0x6d89, 0x1fbf, 0xffff, 0x9ff7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x1fc7, 0xfec6, 0xfebe, 0xbdbe, 0x7cb6, 0x1aae, 
0x1aae, 0x7cb6, 0xbdb6, 0xdebe, 0xfebe, 0x1fbf, 0x1fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x7fc7, 0xfff7, 0xffff, 0xffff, 0xffff, 0x9fef, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x3fc7, 0x1fc7, 0x1fbf, 0xfebe, 0xdebe, 0xbdb6, 0x7cb6, 0x1aae, 
0x1aa6, 0x7cae, 0xbdb6, 0xdebe, 0xfebe, 0xffbe, 0x1fbf, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fc7, 0x1fbf, 0xffbe, 0xfebe, 0xdebe, 0xbdb6, 0x7cae, 0x1aa6, 
0x1aa6, 0x5cae, 0x9db6, 0xdeb6, 0xdeb6, 0xffbe, 0xffbe, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0xffbe, 0xffbe, 0xdeb6, 0xbeb6, 0x9db6, 0x5cae, 0x1aa6, 
0xfaa5, 0x5cae, 0x9dae, 0xbeb6, 0xdeb6, 0xffb6, 0xffbe, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0x1fbf, 0xffbe, 0xffb6, 0xdeb6, 0xbeb6, 0x9dae, 0x5cae, 0xfaa5, 
0xfaa5, 0x5ca6, 0x9dae, 0xbeb6, 0xbeb6, 0xdfb6, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xffbe, 0xffb6, 0xdfb6, 0xbeb6, 0xbeb6, 0x9dae, 0x5ca6, 0xfaa5, 
0xfa9d, 0x5ca6, 0x9dae, 0xbeae, 0xbeae, 0xdfb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xdfb6, 0xbeae, 0xbeae, 0x9dae, 0x5ca6, 0xfa9d, 
0xfa9d, 0x3ca6, 0x7da6, 0x9eae, 0xbeae, 0xdfae, 0xdfb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xffb6, 0xdfb6, 0xdfae, 0xbeae, 0x9eae, 0x7da6, 0x3ca6, 0xfa9d, 
0xda9d, 0x3c9e, 0x7da6, 0x9ea6, 0xbeae, 0xbfae, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0x79ae, 0x6262, 0x0000, 0x0000, 0x0400, 0x5a44, 0xdfae, 0x0f9d, 0x0020, 0x0000, 0x0000, 0xd001, 0x7f8e, 0xddae, 0xa98b, 0x0000, 0x0000, 0x0000, 0x3623, 0xbf9e, 0x15ae, 0xc040, 0x0000, 0x0000, 0x0a00, 0xbe6d, 0xddae, 0x888b, 0x0000, 0x0000, 0x0000, 0x0900, 0x9e65, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0xbfae, 0xbeae, 0x9ea6, 0x7da6, 0x3c9e, 0xda9d, 
0xda9d, 0x3c9e, 0x7da6, 0x9ea6, 0x9ea6, 0xbfae, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0xd4a5, 0xc040, 0xd122, 0x106c, 0x4041, 0xf61a, 0xbf9e, 0xef9c, 0x0520, 0x723b, 0x336c, 0xb86c, 0x9f9e, 0x9aae, 0x2162, 0xee01, 0x3264, 0x6452, 0x9001, 0x7f86, 0xf5a5, 0xe040, 0xd122, 0x336c, 0x766c, 0x5f8e, 0xdeae, 0x559d, 0xef6b, 0x6030, 0x7012, 0x5664, 0x5f8e, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0xbfae, 0x9ea6, 0x9ea6, 0x7da6, 0x3c9e, 0xda9d, 
0xda95, 0x3c9e, 0x5d9e, 0x9ea6, 0x9ea6, 0xbfa6, 0xbfae, 0xdfae, 0xdfae, 0xdfae, 0xd4a5, 0xe540, 0xbc44, 0x7ba6, 0x636a, 0xf61a, 0xbf9e, 0xef9c, 0xca20, 0xbe65, 0xdfae, 0xdfae, 0xdfae, 0x7aae, 0x2362, 0x3723, 0xbe9e, 0xb094, 0x5443, 0x7f8e, 0xf5a5, 0x0441, 0x9b44, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0x58ae, 0x8251, 0xf933, 0xdfa6, 0xdfae, 0xdfae, 0xdfae, 0xdfae, 0xbfae, 0xbfa6, 0x9ea6, 0x9ea6, 0x5d9e, 0x3c9e, 0xda95, 
0xba95, 0x1c96, 0x5d9e, 0x7ea6, 0x7ea6, 0x9fa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xd4a5, 0xc040, 0x8a09, 0x6a3a, 0x0020, 0xf61a, 0x9f96, 0xef9c, 0x0020, 0x0b22, 0xae42, 0x3d65, 0xbfa6, 0x7aa6, 0x2062, 0xc800, 0x8c3a, 0x8d42, 0x5a54, 0x9f9e, 0xd5a5, 0xe040, 0x6a01, 0x8c3a, 0x5a54, 0xbfa6, 0xbfa6, 0xbfa6, 0x58a6, 0x8251, 0xd933, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0x9fa6, 0x7ea6, 0x7e9e, 0x5d9e, 0x1c96, 0xba95, 
0xba95, 0x1c96, 0x5d9e, 0x7e9e, 0x7e9e, 0x9fa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xd49d, 0xa040, 0x0000, 0x0000, 0x0200, 0x5a44, 0xbf9e, 0xef94, 0x0020, 0x0000, 0x0400, 0xbc44, 0xbfa6, 0x9da6, 0xa97b, 0x0000, 0x0000, 0x0000, 0x7001, 0x5f7e, 0xd59d, 0xc040, 0x0000, 0x0000, 0x7823, 0x9f9e, 0xbfa6, 0xbfa6, 0x58a6, 0x8251, 0xd933, 0xbf9e, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0x9fa6, 0x7e9e, 0x7e9e, 0x5d9e, 0x1c96, 0xba95, 
0xba95, 0x1c96, 0x3d96, 0x7e9e, 0x7e9e, 0x9f9e, 0x9f9e, 0xbfa6, 0xbfa6, 0xbfa6, 0xb49d, 0xe538, 0x9c44, 0x7b9e, 0x636a, 0x171b, 0x9f96, 0xcf94, 0xaa18, 0x9e65, 0xbfa6, 0xbfa6, 0xbfa6, 0x9da6, 0xb484, 0x1b6d, 0x9e9e, 0xc983, 0x9009, 0x5f7e, 0xd59d, 0x0439, 0x7b3c, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0x38a6, 0x8251, 0xd92b, 0xbf9e, 0xbfa6, 0xbfa6, 0xbfa6, 0xbfa6, 0x9f9e, 0x9f9e, 0x7e9e, 0x7e9e, 0x3d96, 0x1c96, 0xba95, 
0xba8d, 0xfc95, 0x3d96, 0x5e96, 0x7e9e, 0x7f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0x949d, 0xe538, 0x7c44, 0x3b9e, 0x6362, 0xd61a, 0x7f8e, 0xcf8c, 0x4818, 0x784c, 0x7a85, 0x9c85, 0x7f9e, 0x3a9e, 0x025a, 0x931a, 0x3875, 0x0763, 0x9001, 0x3f7e, 0xb59d, 0xe238, 0x9633, 0x7a7d, 0x7b85, 0x5f8e, 0x9f9e, 0x9f9e, 0x389e, 0x8251, 0xd92b, 0x9f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0x9f9e, 0x7f9e, 0x7e9e, 0x5e96, 0x3d96, 0xfc95, 0xba8d, 
0xba8d, 0xfc8d, 0x3d96, 0x5e96, 0x5e96, 0x5e96, 0x7f96, 0x7f9e, 0x7f9e, 0x7f9e, 0x9495, 0xe538, 0x7c44, 0x5b96, 0x4362, 0xd61a, 0x5f8e, 0xaf8c, 0x0018, 0x0000, 0x0000, 0xb001, 0x1f76, 0x5b9e, 0xa462, 0x0000, 0x0000, 0x0000, 0x5302, 0x3f86, 0xb595, 0xc038, 0x0000, 0x0000, 0x0a00, 0x5e5d, 0x7f9e, 0x7f9e, 0x189e, 0x8249, 0xb92b, 0x7f96, 0x7f9e, 0x7f9e, 0x7f9e, 0x7f9e, 0x7f96, 0x5e96, 0x5e96, 0x5e96, 0x3d96, 0xfc8d, 0xba8d, 
0x9a8d, 0xfc8d, 0x1d8e, 0x3e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x3d96, 0x5985, 0xfe85, 0x5d96, 0x998d, 0x9d7d, 0x5e96, 0xfc95, 0x397d, 0x397d, 0x397d, 0x7c7d, 0x3e8e, 0x5e96, 0xfc95, 0x397d, 0x397d, 0x397d, 0xfe85, 0x5e96, 0x3d96, 0x5985, 0x397d, 0x397d, 0x3a7d, 0x3e86, 0x5e96, 0x5e96, 0x3d96, 0x7985, 0xbd85, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x5e96, 0x3e96, 0x1d8e, 0xfc8d, 0x9a8d, 
0x9a85, 0xdc85, 0x1d8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x3e8e, 0x1d8e, 0xdc85, 0x9a85, 
0x387d, 0xbb85, 0xfd85, 0xfd8d, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0x1d8e, 0xfd8d, 0xfd85, 0xbb85, 0x387d, 
0x504b, 0x7a85, 0xbb85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xdc85, 0xbb85, 0x7a85, 0x504b, 
0x0000, 0x504b, 0x387d, 0x7a85, 0x7a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x9a85, 0x7a85, 0x7a85, 0x387d, 0x504b, 0x0000
};
