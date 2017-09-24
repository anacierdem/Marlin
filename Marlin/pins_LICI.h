/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

#define X_STEP_PIN         56
#define X_DIR_PIN          55
#define X_ENABLE_PIN       57
#define X_MAX_PIN          54

#define Y_STEP_PIN         60
#define Y_DIR_PIN          59
#define Y_ENABLE_PIN       61
#define Y_MIN_PIN          58

#define Z_STEP_PIN         44
#define Z_DIR_PIN          46
#define Z_ENABLE_PIN       42
#define Z_MIN_PIN          48

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define HEATER_0_PIN      	8

#define TEMP_0_PIN         13   // ANALOG NUMBERING
#define TEMP_1_PIN         15   // ANALOG NUMBERING

#define HEATER_BED_PIN    	10    // BED

#define TEMP_BED_PIN        14   // ANALOG NUMBERING

#if ENABLED(ULTRA_LCD)
  #if ENABLED(NEWPANEL)
    #define LCD_PINS_RS 	16
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 	23
    #define LCD_PINS_D5 	25
    #define LCD_PINS_D6 	27
    #define LCD_PINS_D7 	29

    #define BEEPER_PIN 		33  // Beeper on AUX-4

    #define BTN_EN1 		35
    #define BTN_EN2 		37
    #define BTN_ENC 		39  // the click
  #endif // !NEWPANEL
#endif // ULTRA_LCD