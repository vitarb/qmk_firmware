/*
This is the c configuration file for the keymap

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

// QMK config options
// https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md

// read handedness value stored in the EEPROM after eeprom-lefthand.eep/eeprom-righthand.eep
// has been flashed to their respective halves
#define EE_HANDS
// #define MASTER_LEFT
// #define MASTER_RIGHT

// required in case of Elite C v3.0
#define SPLIT_USB_DETECT

// https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_MAX_SPEED 12
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

// Custom config options

// QWERTY with ;p swapped
// #define LAYOUT_QERTY_SCLN

// https://colemak.com/
// #define LAYOUT_COLEMAK

// https://colemakmods.github.io/mod-dh/
// #define LAYOUT_COLEMAK_DH
