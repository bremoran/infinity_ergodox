/*
Copyright 2016 Fred Sundvik <fsundvik@gmail.com>
Jun Wako <wakojun@gmail.com>

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

#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : Colemak
        // left hand
        GRV, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   F,   P,   G,   EQL,
        CAPS,A,   R,   S,   T,   D,
        LSFT,Z,   X,   C,   V,   B,   MINS,
        LGUI,HOME,LEFT,RGHT,END,
                                      LCTL,LALT,
                                           FN1,
                                 BSPC,DEL, FN2,
        // right hand
             FN0, 6,   7,   8,   9,   0,   FN3,
             LBRC,J,   L,   U,   Y,   SCLN,BSLS,
                  H,   N,   E,   I,   O,QUOT,
             RBRC,K,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,RGUI,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN4,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2: numpad
        // left hand
        BTLD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           FN4,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    KEYMAP(  // layer 3 : QWERTY
        // left hand
        GRV, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   EQL,
        CAPS,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   MINS,
        LGUI,HOME,LEFT,RGHT,END,
                                      LCTL,LALT,
                                           FN1,
                                 BSPC,DEL, FN4,
        // right hand
             FN0, 6,   7,   8,   9,   0,   FN3,
             LBRC,Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   SCLN,QUOT,
             RBRC,N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,RGUI,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),
    KEYMAP(  // layer 4 : emoji
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN4,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
};


/*
 * Macro definition
 */
enum macro_id {
    SHRUGGIE,
    TABLEFLIP,
};

#if 0
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    //uint8_t tap_count = record->tap_count;

    switch (id) {
        case SHRUGGIE:
            return (event.pressed ?
                    MACRO( D(LSHIFT), T(GRV), U(LSHIFT), T(N), END ) :
                    MACRO( END ) );
        case TABLEFLIP:
            return (event.pressed ?
                    MACRO( D(LSHIFT), T(GRV), T(N), U(LSHIFT), END ) :
                    MACRO( END ) );
    }
    return MACRO_NONE;
}


const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MACRO(ENE),
    [1] = ACTION_MACRO(ENEMAYUSCULA),
};
#endif

const uint16_t fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),                      // FN0 - switch to Layer1
    ACTION_LAYER_TOGGLE(2),                         // FN1 - toggle Layer2 aka Numpad layer
    ACTION_LAYER_SET(3, ON_PRESS),                  // FN2 - set Layer3 (QWERTY)
    ACTION_LAYER_MOMENTARY(4),                      // FN3 - switch to Layer4
    ACTION_LAYER_SET(0, ON_PRESS),                  // FN4 - set Layer0
};
