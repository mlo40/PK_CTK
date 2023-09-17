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
#include QMK_KEYBOARD_H

enum layers {
	_QWERTY,
	_EMPTY,
	_CONTROLLER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_vc_custom(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_QUOT,
		KC_RCTL,  KC_RALT, KC_SPC, KC_RGUI, EE_CLR, KC_MINS, KC_EQL, KC_SCLN, KC_SLSH, KC_BSLS, KC_BSPC
	),
	[_EMPTY] = LAYOUT_vc_custom(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[_CONTROLLER] = LAYOUT_vc_custom(
		JS_0, JS_1, JS_2, JS_3, JS_4, JS_5, JS_6, JS_7, JS_8, JS_9, JS_10,
		JS_11, JS_12, JS_13, JS_14, JS_15, JS_16, JS_17, JS_18, JS_19, JS_20, JS_21,
		JS_22, JS_23, JS_24, JS_25, JS_26, JS_27, JS_28, JS_29, JS_30, JS_31, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};

#if defined(JOYSTICK_ENABLE)
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    JOYSTICK_AXIS_IN(F4, 900, 575, 285),// x
    JOYSTICK_AXIS_IN(F5, 900, 575, 285), // y
    JOYSTICK_AXIS_VIRTUAL,//z
	JOYSTICK_AXIS_IN(F6, 900, 575, 285),//Rx
	JOYSTICK_AXIS_IN(F7, 900, 575, 285),//Ry
	JOYSTICK_AXIS_VIRTUAL//Rz
};
#endif
