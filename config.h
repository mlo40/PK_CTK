/* Copyright (C) 2023  emlo40
*
*This program is free software: you can redistribute it and/or modify
*it under the terms of the GNU General Public License as published by
*the Free Software Foundation, either version 3 of the License, or
*(at your option) any later version.
*
*This program is distributed in the hope that it will be useful,
*but WITHOUT ANY WARRANTY; without even the implied warranty of
*MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*GNU General Public License for more details.
*
*You should have received a copy of the GNU General Public License
*along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
 
#pragma once
 
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 11

/* key matrix pins */

#define MATRIX_ROW_PINS { B1, B3, B2, B6, D5 }
#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B0 }

// Min 0, max 32
#define JOYSTICK_BUTTON_COUNT 32
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 6
// Min 8, max 16
#define JOYSTICK_AXIS_RESOLUTION 16

/* COL2ROW or ROW2COL */
/*
#define DIODE_DIRECTION COL2ROW
*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNC 5
