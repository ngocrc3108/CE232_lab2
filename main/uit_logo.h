#ifndef __UIT_LOGO_H_
#define __UIT_LOGO_H_

#include "ssd1306.h"

#define UIT_LOGO_LENGTH 128*64

extern uint8_t uit_logo[UIT_LOGO_LENGTH];

void draw_uit_logo();

#endif