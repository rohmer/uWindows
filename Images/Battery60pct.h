#include "Image.h"
/*******************************************************************************
* image
* filename: unsaved
* name: Battery60pct
*
* preset name: Color R5G6B5
* data block size: 16 bit(s), uint16_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 16
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint16_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <stdint.h>



static const uint16_t image_data_Battery60pct[2040] = {
    0x18e3, 0x0842, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0840, 0x0840, 0x0861, 0x0840, 0x0861, 0x0861, 0x0861, 0x0840, 0x0861, 0x0861, 0x0861, 0x1041, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0842, 0x0861, 0x0821, 0x0840, 0x0842, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x18e3, 0x0840, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0840, 0x0840, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1041, 0x0861, 0x0861, 0x0861, 0x1041, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0821, 0x0862, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x1903, 0x1041, 0x0861, 0x0862, 0x1041, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1041, 0x0861, 0x0861, 0x0861, 0x0861, 0x1041, 0x1041, 0x0861, 0x1041, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1062, 0x1062, 0x0861, 0x0861, 0x1062, 0x1062, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x2103, 0x0861, 0x0861, 0x0862, 0x1041, 0x0861, 0x1062, 0x0862, 0x1041, 0x0861, 0x0861, 0x1061, 0x1061, 0x0861, 0x0881, 0x1041, 0x0861, 0x0862, 0x0862, 0x0862, 0x0881, 0x0861, 0x0861, 0x0881, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1062, 0x0881, 0x1062, 0x0861, 0x0881, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1062, 0x1062, 0x1062, 0x0881, 0x0861, 0x0881, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x2104, 0x0881, 0x1061, 0x0881, 0x0881, 0x0881, 0x18c3, 0x18e4, 0x0021, 0x0021, 0x0020, 0x0021, 0x0021, 0x0021, 0x0020, 0x0020, 0x0800, 0x0020, 0x0021, 0x0020, 0x0000, 0x0020, 0x0020, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000, 0x0020, 0x0821, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000, 0x2125, 0x18a3, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 
    0x2104, 0x0881, 0x1061, 0x0881, 0x0881, 0x0821, 0xc639, 0xb535, 0xdcf4, 0xe4f3, 0xe4d3, 0xe4d3, 0xe4f3, 0xe4f3, 0xb450, 0xd553, 0xd553, 0xd553, 0xd553, 0xd553, 0xd553, 0xacaf, 0x9e13, 0x9e13, 0x9e13, 0x9e13, 0x9e13, 0x9e13, 0x8d51, 0x95b2, 0x9e13, 0x9e13, 0x9e14, 0x9e14, 0x9e13, 0x95b2, 0x7bcf, 0x7bef, 0x7bcf, 0x7bcf, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0x7bef, 0xad95, 0x9d13, 0x0861, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 0x0881, 
    0x2124, 0x1082, 0x1082, 0x1082, 0x1082, 0x18e4, 0xc638, 0xcd14, 0xf4f3, 0xfcd3, 0xfcf3, 0xfcf3, 0xfcf3, 0xfcf3, 0xd490, 0xed73, 0xed73, 0xed73, 0xed73, 0xed73, 0xed73, 0xbd0f, 0x96b3, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x85d0, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9692, 0x52aa, 0x52ca, 0x52ca, 0x52ab, 0x52ca, 0x52ca, 0x52ca, 0x52ca, 0x52ca, 0x52ca, 0x52ca, 0x52aa, 0x52aa, 0x5289, 0x94b2, 0xbdd6, 0x0861, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 
    0x2124, 0x10a2, 0x10a2, 0x1082, 0x10a2, 0x31a7, 0xad75, 0xc492, 0xf451, 0xf451, 0xfc71, 0xfc71, 0xfc51, 0xfc71, 0xd42e, 0xe511, 0xe510, 0xe511, 0xe511, 0xe511, 0xe511, 0xacce, 0x8e31, 0x8e32, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x756e, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x9692, 0x3a48, 0x4247, 0x4228, 0x4208, 0x4228, 0x4228, 0x4228, 0x4228, 0x4228, 0x4228, 0x4228, 0x4228, 0x4208, 0x4208, 0x6b8d, 0xad95, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2124, 0x10a2, 0x18a3, 0x18a3, 0x10a2, 0x41e8, 0x7c10, 0xc3ce, 0xe3af, 0xebcf, 0xebcf, 0xebcf, 0xebcf, 0xebcf, 0xc3cc, 0xdc8f, 0xdc8f, 0xdc8e, 0xdc8e, 0xdc8f, 0xdc8f, 0x9cac, 0x75ef, 0x7dcf, 0x75ef, 0x75ce, 0x7dcf, 0x75ef, 0x652c, 0x7df0, 0x75ef, 0x7dcf, 0x75ce, 0x75ef, 0x75ce, 0x860f, 0x52e9, 0x52aa, 0x52ab, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x5289, 0x4a69, 0x4228, 0x62ec, 0x8430, 0x2125, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2124, 0x10a2, 0x10a2, 0x18a3, 0x10c2, 0x2125, 0x1925, 0xb9c7, 0xd1a6, 0xd9a6, 0xd966, 0xd9a6, 0xd966, 0xd9e8, 0xbb07, 0xc346, 0xc346, 0xc326, 0xc326, 0xc326, 0xc326, 0x8c49, 0x34e7, 0x34e6, 0x34e6, 0x34e6, 0x34e6, 0x34e7, 0x3ca7, 0x4d28, 0x34e6, 0x34e6, 0x34e6, 0x34e7, 0x34e7, 0x3d48, 0x3a87, 0x3a28, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x39e7, 0x31a6, 0x31a6, 0x39e8, 0x18e3, 0x2104, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2945, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x2104, 0x2965, 0xa800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xd0c2, 0xbaa1, 0xbac0, 0xbac0, 0xc2a0, 0xbac0, 0xc2a0, 0xc2a0, 0x73e4, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0c40, 0x14c2, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04c0, 0x3a87, 0x39e7, 0x39e7, 0x41e8, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x3186, 0x3186, 0x2965, 0x31a6, 0x2103, 0x18e4, 0x18e3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 
    0x2945, 0x18e3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x2924, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc880, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xbac0, 0xc2a0, 0xc2a0, 0x6ba1, 0x04a0, 0x0ca0, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x0c40, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04c0, 0x3247, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x2965, 0x2945, 0x2104, 0x2165, 0x18c3, 0x18e4, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2945, 0x18e3, 0x18e3, 0x18e3, 0x18e4, 0x0861, 0x1862, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x5bc0, 0x04a0, 0x0ca0, 0x0ca0, 0x04c0, 0x0ca0, 0x04a0, 0x0c40, 0x04a0, 0x0ca0, 0x0ca0, 0x04a0, 0x04a0, 0x04a0, 0x04c0, 0x21c4, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x1082, 0x0000, 0x0081, 0x0821, 0x18a3, 0x18e4, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2965, 0x18e3, 0x18e3, 0x18e3, 0x18e4, 0x0861, 0x1820, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xbac0, 0xc2c0, 0x5ba0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04a0, 0x0ca0, 0x0ca0, 0x0c40, 0x04a0, 0x04a0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x04c0, 0x21e4, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0000, 0x0081, 0x0000, 0x1903, 0x39c7, 0x2103, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2965, 0x18e4, 0x18e3, 0x1903, 0x18e4, 0x0861, 0x2020, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x5ba0, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x0c40, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0ca0, 0x04a0, 0x11c3, 0x18e3, 0x10c3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0021, 0x0080, 0x0000, 0x4a69, 0xad75, 0x4228, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2965, 0x18e4, 0x18e3, 0x18e3, 0x1903, 0x0821, 0x2000, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xc2a0, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2c0, 0x53c0, 0x0ca0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0ca0, 0x0c40, 0x04a0, 0x0ca0, 0x0ca0, 0x04a0, 0x04a0, 0x04a0, 0x04c0, 0x19e2, 0x18c3, 0x18e3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0021, 0x0080, 0x0000, 0x0861, 0x0881, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2965, 0x1903, 0x18e4, 0x1903, 0x20e3, 0x0821, 0x2000, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xc2c0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x53c0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0c40, 0x0ca0, 0x0ca0, 0x04a0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04a0, 0x11e2, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0000, 0x0080, 0x0000, 0x0000, 0x0000, 0x10a2, 0x1903, 0x1903, 0x1903, 0x1903, 0x1903, 
    0x2965, 0x1903, 0x1903, 0x18e3, 0x1903, 0x0861, 0x2000, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xc2a0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2c0, 0x53c0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x04a0, 0x04a0, 0x0c40, 0x0ca0, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x04c0, 0x19e2, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0000, 0x0080, 0x0000, 0x0000, 0x0000, 0x10a2, 0x1903, 0x1903, 0x1903, 0x1903, 0x1903, 
    0x2945, 0x18e3, 0x18e3, 0x18e3, 0x1903, 0x0020, 0x2000, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x53c0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0ca0, 0x0c40, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x04c0, 0x11c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0021, 0x0080, 0x0000, 0x0881, 0x18e4, 0x2103, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2945, 0x1903, 0x18e3, 0x18e4, 0x1903, 0x0861, 0x2000, 0xc000, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x5bc0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x04a0, 0x0c40, 0x04a0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x04c0, 0x19c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x08a2, 0x0021, 0x0081, 0x0000, 0x4a69, 0xb575, 0x4228, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2965, 0x18e3, 0x18e3, 0x18e4, 0x18c3, 0x0861, 0x2020, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x5bc0, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0ca0, 0x04a0, 0x0c40, 0x04a0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x04a0, 0x04a0, 0x21e4, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x1082, 0x0021, 0x0081, 0x0000, 0x31a6, 0x6b2c, 0x2124, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2945, 0x18e3, 0x18e3, 0x18c3, 0x10c3, 0x18e3, 0x28e3, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc020, 0xbac0, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x63c1, 0x0ca0, 0x04a0, 0x04a0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0c40, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x0ca0, 0x04a0, 0x04a0, 0x21c4, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x10a2, 0x0000, 0x0081, 0x18e3, 0x18e3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2945, 0x18e3, 0x18e3, 0x18e3, 0x10c3, 0x1903, 0x2924, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xc880, 0xbaa1, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x63c1, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0c40, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04c0, 0x3247, 0x3186, 0x3185, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x3186, 0x2985, 0x2945, 0x2945, 0x2104, 0x2965, 0x20e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 0x18e3, 
    0x2945, 0x18c3, 0x18c3, 0x10c2, 0x10c3, 0x2103, 0x2985, 0xb800, 0xc800, 0xd800, 0xd800, 0xd800, 0xd800, 0xd022, 0xbaa1, 0xbac0, 0xbac0, 0xc2a0, 0xc2a0, 0xc2a0, 0xc2a0, 0x6be3, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04a0, 0x0ca0, 0x0c40, 0x04c1, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x0ca0, 0x04c1, 0x3a67, 0x39e7, 0x39c7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x39e7, 0x3186, 0x2985, 0x2965, 0x31a6, 0x20e3, 0x1903, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 
    0x2124, 0x10c2, 0x18a3, 0x18c3, 0x18a3, 0x2103, 0x2165, 0xb986, 0xd145, 0xd966, 0xd925, 0xe104, 0xd925, 0xd9e8, 0xbb06, 0xc326, 0xc305, 0xc305, 0xc325, 0xc325, 0xc325, 0x9429, 0x24e5, 0x24e4, 0x24e4, 0x34e6, 0x24e4, 0x24e5, 0x3ca7, 0x4507, 0x24e5, 0x24e4, 0x24e4, 0x24e5, 0x24e4, 0x3d27, 0x3a87, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x39c7, 0x31a6, 0x3186, 0x41e8, 0x18c3, 0x1903, 0x10a2, 0x10a2, 0x18a3, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2124, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x41e8, 0x73cf, 0xc3ce, 0xe3ae, 0xebae, 0xebcf, 0xebcf, 0xebcf, 0xf3af, 0xcbcc, 0xdc8e, 0xdc8f, 0xdc8f, 0xdc8f, 0xdc8e, 0xdc8f, 0x9cac, 0x75ce, 0x75ce, 0x75ce, 0x75ce, 0x75ce, 0x75ce, 0x652c, 0x7dcf, 0x7dcf, 0x75ce, 0x75ce, 0x75ce, 0x75ce, 0x860f, 0x4ae9, 0x5289, 0x528a, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x4a69, 0x4228, 0x4228, 0x5aeb, 0x7bef, 0x2124, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2124, 0x10a2, 0x1082, 0x10a2, 0x10a2, 0x31a6, 0xad75, 0xc471, 0xf451, 0xf450, 0xfc71, 0xf451, 0xfc71, 0xfc51, 0xd40d, 0xe512, 0xe510, 0xe511, 0xe511, 0xe510, 0xe511, 0xaced, 0x8e31, 0x8e31, 0x8e31, 0x8e30, 0x8e31, 0x8e31, 0x758d, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x8e31, 0x8e30, 0x8e72, 0x3a48, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x4208, 0x41e8, 0x6b8d, 0xad75, 0x18a3, 0x1082, 0x18a3, 0x1082, 0x10a2, 0x10a2, 0x10a2, 0x10a2, 
    0x2104, 0x1082, 0x1082, 0x1082, 0x1082, 0x2103, 0xc638, 0xcd14, 0xf4d3, 0xfcf3, 0xfcf3, 0xfcd3, 0xfcf3, 0xfcd3, 0xdc70, 0xed73, 0xed73, 0xed73, 0xed73, 0xed73, 0xed73, 0xbd0f, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x9e93, 0x85d0, 0x9e72, 0x9e93, 0x9e93, 0x9e93, 0xa673, 0x9e93, 0x9e93, 0x52aa, 0x52ca, 0x52ab, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x5289, 0x94b2, 0xbdd6, 0x0861, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 
    0x2103, 0x0881, 0x1082, 0x1082, 0x1062, 0x0821, 0xc618, 0xb535, 0xe4f3, 0xf4f3, 0xf513, 0xf513, 0xf513, 0xf513, 0xc40e, 0xe593, 0xe593, 0xed73, 0xe593, 0xed73, 0xe593, 0xacaf, 0x9e73, 0x9e73, 0x9e73, 0xa653, 0x9e73, 0xa653, 0x8570, 0x9612, 0x9e73, 0x9e73, 0x9e73, 0x9e73, 0x9e73, 0x95f1, 0x6b8d, 0x6b8d, 0x738d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0x6b8d, 0xad75, 0x9d13, 0x0861, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 0x1082, 
    0x2103, 0x0881, 0x0881, 0x0881, 0x1061, 0x0881, 0x0000, 0x0062, 0x0020, 0x0020, 0x0020, 0x0800, 0x0021, 0x0020, 0x0020, 0x0020, 0x0800, 0x0020, 0x0800, 0x0020, 0x0020, 0x0020, 0x0020, 0x0800, 0x0020, 0x0000, 0x0020, 0x0020, 0x0000, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0800, 0x0020, 0x0800, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000, 0x0862, 0x0821, 0x0881, 0x0881, 0x0881, 0x1062, 0x0881, 0x0881, 0x0881, 0x0881, 
    0x2104, 0x1062, 0x0881, 0x1062, 0x0861, 0x0861, 0x0881, 0x1062, 0x0861, 0x0881, 0x0881, 0x0861, 0x0862, 0x0861, 0x1062, 0x0861, 0x0881, 0x0861, 0x0861, 0x1062, 0x0881, 0x1041, 0x1062, 0x1062, 0x1062, 0x0881, 0x0861, 0x0861, 0x0861, 0x1062, 0x1041, 0x1041, 0x0861, 0x1062, 0x0861, 0x1062, 0x0861, 0x0862, 0x0881, 0x1062, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1062, 0x1062, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x18e4, 0x0861, 0x0861, 0x1062, 0x0862, 0x1041, 0x0861, 0x0861, 0x1062, 0x1062, 0x0861, 0x0861, 0x0861, 0x1041, 0x1062, 0x0861, 0x1062, 0x1062, 0x1062, 0x0861, 0x0861, 0x0842, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x1041, 0x1062, 0x0861, 0x1062, 0x0861, 0x0862, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x18e3, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 
    0x18e3, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861, 0x0861
};
const tImage Battery60pct = { image_data_Battery60pct, 60, 34,
    16 };

