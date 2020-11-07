/* Copyright 2020 Eric Lau
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_all(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,            KC_DEL,   KC_PSLS, KC_PAST, KC_PMNS,
        MT(MOD_LALT | MOD_LSFT, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSPC,            KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,                      KC_P4,    KC_P5,   KC_P6,   
        KC_LSPO,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSPC,           KC_UP,    KC_P1,    KC_P2,   KC_P3,   KC_PENT,
        KC_LGUI, KC_LALT, KC_LGUI,                          KC_SPC,                 KC_PGDN, KC_PGUP, MO(1),              KC_LEFT, KC_DOWN,  KC_RIGHT, KC_P0,   KC_PDOT),

    [_FN] = LAYOUT_all(
     /*  esc      1        2        3        4       5       6       7       8       9         0        -         =     bkspc                 del           /         *       -   */
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,              KC_TRNS,   KC_PSLS, KC_PAST, KC_PMNS,
     /*  tab      Q        W        E        R        T      Y        U      I        O        P        [         ]        \                  7            8         9       +   */ 
        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,  KC_TRNS, KC_BSLS,              KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_PPLS,
     /*  caps     A       S        D        F        G      H        J      K        L        ;        '       enter                          4            5         6           */
        KC_CAPS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,  KC_TRNS,                       KC_PGUP,    KC_TRNS,   KC_TRNS,
     /* shift             Z         X        C       V       B       N      M        ,        .        /        shift                 up       1            2         3        enter*/
        KC_TRNS,          KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,           KC_VOLU,  KC_PGDN,    KC_P2,   KC_P3,   KC_PENT,
     /* ctrl     win      alt                              space                    command      fn                        left     down     right        0         .           */
        KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS,              RALT(RSFT(KC_LEFT)),KC_VOLD,  RALT(RSFT(KC_RIGHT)),   KC_TRNS,   KC_TRNS     )
};
