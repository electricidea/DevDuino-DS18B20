/**************************************************************************
 * 1-Wire DS18B20 Temperature Sensor
 * 
 * A simple program that read out the values from one or multile
 * DS18B20 Temperature Sensors
 * 
 * Hague Nusseck @ electricidea
 * v1.01 20.December.2020
 * https://github.com/electricidea/DevDuino-DS18B20
 * 
 * 
 * Distributed as-is; no warranty is given.
 * 
 * ************************************************************************
 * MIT License
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
 **************************************************************************/

// Include board with DevDuino components.
#include <devduino.h>
// some Devduino configuration stuff:
#define NO_GLOBAL_RTC true
#define NO_GLOBAL_TEMPERATURE true
#define NO_GLOBAL_SPREADSHEET true
#define NO_GLOBAL_BUZZER true

// Devduino INFO:
// https://devduino.cc/product/devduino/
// Devduino Screen: 128×64 OLED Display with SSD1306 controller.
// 8-bit AVR (ATmega32u4)
// Operating Voltage = 5V
// Flash Memory = 32 KB (4 KB used by bootloader)
// SRAM = 2.5 KB
// EEPROM = 1 KB
// Clock Speed = 16 MHz


// Include one-Wire library
#include <OneWire.h>
// https://platformio.org/lib/show/1/OneWire
// pio lib install "paulstoffregen/OneWire"


// DS18B20 Library by Mathias Munk Hansen
#include <DS18B20.h>
// https://platformio.org/lib/show/6432/DS18B20
// install:
// pio lib install "matmunk/DS18B20"


// define the digital I/O pin to be used for the 1-Wire network
const uint8_t ONE_WIRE_PIN = 4;
// initialize the DS18B20 on the configured I/O pin
DS18B20 ds(ONE_WIRE_PIN);

// String buffer for console output
char String_buffer[128];

// Trigger Flag for button press
boolean Button_Trigger = false;
//This method has been bound to "INT" button of DevDuino board in the above "setup" method.
void buttonPressed()
{
  Button_Trigger = true;
  delay(250);
}

void setup() {
  //First thing to do is to initialize DevDuino board.
  devduino.begin();
  // clear the screen for text output
  console.clear();
  //Attach "interrupt" button to "buttonPressed" function.
  devduino.attachToIntButton(buttonPressed);
  // start screen
  console.println(F("    1-Wire DS18B20"));
  console.println(F("  Temperature Sensor"));
  console.println(F("         v1.01"));
  console.println(F(" "));
  console.println(F(" "));
  console.println(F(" "));
  console.println(F("START"));
  console.println(F("    press button --->"));
}


void loop(){
  if(Button_Trigger){ 
    int NumberOfDevices = 0; 
    console.clear();
    // Iterate through all devices.
    while(ds.selectNext()){      
      // Print temperature in degrees Celcius
      float temperature = ds.getTempC();
      char str_temp[6];
      // 4 is mininum width, 2 is precision; float value is copied onto str_temp
      dtostrf(temperature, 4, 2, str_temp);
      snprintf(String_buffer, sizeof(String_buffer), "Temp. = %sC", str_temp);
      console.println(String_buffer);
      NumberOfDevices++;
    }
    // Print number of DS18B20 devices on the bus.
    snprintf(String_buffer, sizeof(String_buffer), "\nFound  %i devices", NumberOfDevices);
    console.println(String_buffer);
    delay(250);
    Button_Trigger = false; 
  }
  delay(10);
}