/*
Copyright 2019 Maarten Dekkers <maartenwut@gmail.com>

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

#include QMK_KEYBOARD_CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4705
#define PRODUCT_ID      0x0175
#define DEVICE_VER      0x0001
#define MANUFACTURER    You
#define PRODUCT         Knight75
#define DESCRIPTION     An Alps/MX 75% PCB

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_COL_PINS {F1,F4,F5,F6,F7,B0,B2,B1,B3,C7,B6,B5,B4,D7,D6,D4}
#define MATRIX_ROW_PINS {D0,C6,D5,D3,D2,D1}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 4

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define QMK_ESC_OUTPUT F1 // usually COL
#define QMK_ESC_INPUT D0 // usually ROW