/** MIT License
*
* Copyright(c) 2017 DevDuino
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files(the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions :
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef DEVDUINO_LOGO
#define DEVDUINO_LOGO

#include "DevduinoSprite.h"

static const uint8_t devduinoLogoBuffer[8][58] PROGMEM = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x3C, 0x38, 0x70, 0x70, 0x70, 0x70, 0x70, 0x38, 0x3C, 0x1F, 0x0F, 0x03, 0x00, 0x60, 0x78, 0x7F, 0x7F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x07, 0x0F, 0x0F, 0x1F, 0xFF, 0xFE, 0xFC, 0x1E, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x1E, 0xFC, 0xF8, 0xE0, 0x01, 0x03, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3E, 0x3F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x03, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3E, 0x7C, 0x7C, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x07, 0x03, 0x01, 0x00, 0x80, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x80, 0x00, 0x01, 0x03, 0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
	{ 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x01, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFC, 0x7E, 0x7F, 0x7F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x7F, 0x7E, 0x7C, 0xFC, 0xF8, 0xF8, 0xF0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x07, 0x1F, 0x3F, 0x78, 0x70, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x70, 0x78, 0x3F, 0x1F, 0x07 }, 
	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0x7C, 0x7E, 0x3E, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x01, 0x01, 0x80, 0x80, 0x80, 0x80, 0x01, 0x01, 0x03, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x3E, 0x3E, 0x3C, 0x04, 0x00, 0xC0, 0xF0, 0xF8, 0x3C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x3C, 0xF8, 0xF0, 0xC0 }, 
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

DevduinoSprite devduinoLogo((uint8_t*) devduinoLogoBuffer, 58, 8);

#endif //DEVDUINO_LOGO