// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t bomb_data[1026] = {
 32,32,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x24,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x21,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x08,0x08,0x08,0x24,0x08,0x08,0x08,0x08,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x08,0x08,0x08,0x08,0x21,0x21,0x21,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x21,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x06,0x06,0x06,0x06,0x06,0x08,0x08,0x08,0x06,0x06,0x08,0x06,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x19,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x19,0x08,0x06,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x19,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x19,0x06,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x19,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x06,0x06,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x19,0x08,0x06,0x06,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x19,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x19,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x06,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x19,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x19,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x19,0x08,0x08,0x08,0x08,0x08,0x19,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x19,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x19,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x19,0x06,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x19,0x06,0x06,0x06,0x06,0x06,0x08,0x08,0x06,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x19,0x08,0x08,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x19,0x08,0x08,0x08,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x06,0x06,0x08,0x08,0x19,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x19,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x08,0x08,0x06,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x08,0x08,0x08,0x08,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x08,0x08,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};