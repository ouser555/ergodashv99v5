/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#include "config_common.h" // qmk v1.1.1

/* USB Device descriptor parameter */
//#define VENDOR_ID       0xFEEE
//#define PRODUCT_ID      0x6060
//#define DEVICE_VER      0x0100
//#define MANUFACTURER    Touchsensor
//#define PRODUCT         ErgoDashV99

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }
//#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, D5, B2 }
// #define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define DIODE_DIRECTION COL2ROW

/* define tapping term */
#define TAPPING_TERM 120

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

//#define AUDIO_PIN C6

/* number of backlight levels */
#ifdef BACKLIGHT_ENABLE
  #define BACKLIGHT_PIN B6
  #define BACKLIGHT_LEVELS 7
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_LIMIT_VAL 150

/* ws2812 RGB LED */
#define WS2812_DI_PIN D3
//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_MODE_STATIC_LIGHT
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_CHRISTMAS
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_TWINKLE
//#define RGBLED_NUM 24
#define RGBLED_NUM 70

#define RGBLIGHT_SLEEP  // enable rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 900000  // ms to wait until rgblight time out, 900K ms is 15min.

#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT { 12, 12 }    // Number of LEDs
#define RGBLED_SPLIT { 35, 35 }    // Number of LEDs

#define SPLIT_USB_DETECT
#define USB_SUSPEND_WAKEUP_DELAY 1000

#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

// The LEDs on the slave half go in reverse order
#if 0
#define RGBLIGHT_LED_MAP { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,\
                          69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35 }
#endif
#define RGBLIGHT_LED_MAP { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,\
                          65, 66, 67, 68, 69, 60, 61, 62, 63, 64, 55, 56, 57, 58, 59, 50, 51, 52, 53, 54, 45, 46, 47, 48, 49, 40, 41, 42, 43, 44, 35, 36, 37, 38, 39 }

#define SOFT_SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 0
/*Sets the protocol speed when using serial communication*/
//Speeds:
//0: about 189kbps (Experimental only)
//1: about 137kbps (default)
//2: about 75kbps
//3: about 39kbps
//4: about 26kbps
//5: about 20kbps
