#ifndef DEVDUINO_CLOCKSPRITE
#define DEVDUINO_CLOCKSPRITE

#include "DevduinoSprite.h"

static const uint8_t clockSpriteBuffer[7][53] PROGMEM = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x06, 0x0E, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x70, 0x60, 0x60, 0x60, 0x40, 0xC0, 0xC0, 0xC0, 0xFE, 0xC0, 0xC0, 0xC0, 0x40, 0x60, 0x60, 0x60, 0x70, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x0E, 0x06, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1C, 0x78, 0xE0, 0xC0, 0xC0, 0x20, 0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x10, 0x20, 0xC0, 0xC0, 0xE0, 0x78, 0x1C, 0x0F, 0x03, 0x00, 0x00, 0x00 }, 
	{ 0x01, 0x3F, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x3F, 0x01 }, 
	{ 0xFC, 0xFF, 0x21, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x21, 0xFF, 0xFC }, 
	{ 0x00, 0xE0, 0xF8, 0x3E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3E, 0xF8, 0xE0, 0x00 }, 
	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0x38, 0x1C, 0x1E, 0x26, 0x43, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0x43, 0x26, 0x1E, 0x1C, 0x38, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0x60, 0x60, 0x70, 0x30, 0x30, 0x30, 0x10, 0x18, 0x18, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x10, 0x30, 0x30, 0x30, 0x70, 0x60, 0x60, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

DevduinoSprite clockSprite((uint8_t*) clockSpriteBuffer, 53, 7);

#endif //DEVDUINO_CLOCKSPRITE