/* Copyright 2018 u/mythosmann
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
#define _BL 0
#define _FL 1

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};
//Tap Dance Declarations
enum {
  TD_1 = 0,
  TD_2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
,-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.
|  Tab  |   q   |   w   |   e   |   r   |   t   |   y   |   u   |   i   |   o   |   p   |   '   | Bspc  |
|-------'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-------|
|  Caps   |   a   |   s   |   d   |   f   |   g   |   h   |   j   |   k   |   l   |   ;   |    Enter    |
|---------'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----------|
|  Shift     |   z   |   x   |   c   |   v   |   b   |   n   |   m   |   ,   |   .   |   /   |   Shift  |
|-------,----'--,----'--,----'-------'-------'-------'-------'-------'--,----'--,----'--,----'--,-------|
|  Ctl  |  Alt  |  Win  |                                               |  Fn   | Left  |  Up   | Right |
`-------'-------'-------'-----------------------------------------------'-------'-------'-------'-------'
*/
  [_BL] = LAYOUT( /* Base */
//,-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.
  TD(TD_1), KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  , KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_SCLN,KC_BSPC, \
//|-------'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-------------|
   KC_TAB  , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  , KC_H  , KC_J  , KC_K  , KC_L  ,KC_QUOT,    KC_ENT   , \
//|---------'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'-----,-'-------------|
    KC_LSFT    , KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  , KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH, KC_RSFT  , \
//|-------,----'--,----'--,----'-------'-------'-------'-------'-------'--,----'--,----'--,----'--,-------|
   KC_LCTL,TD(TD_2),MO(_FL),        KC_SPC                                ,MO(_FL),KC_LEFT, KC_UP ,KC_RGHT   \
//`-------'-------'-------'-----------------------------------------------'-------'-------'-------'-------'
),

/*
,-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.
|   `   |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |   -   |  Del  |
|-------'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-------|
|  Caps   |       |       |       |       |       |       |   [   |   ]   |   =   |   \   |    Enter    |
|---------'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----------|
|  Shift     |       |       |       |       |       |       |       |       |       |       |   Shift  |
|-------,----'--,----'--,----'-------'-------'-------'-------'-------'--,----'--,----'--,----'--,-------|
|  Ctl  |  Alt  |  Win  |                                               |  Fn   | Left  | Down  | Right |
`-------'-------'-------'-----------------------------------------------'-------'-------'-------'-------'
*/
  [_FL] = LAYOUT( /* Function */
//,-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.-------.
   KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  , KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,KC_DEL , \
//|-------'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-----'-,-------------|
   KC_CAPS  ,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LBRC,KC_RBRC,KC_EQL ,KC_BSLS,    KC_ENT   , \
//|---------'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----'--,----------|
    KC_LSFT    ,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_RSFT  , \
//|-------,----'--,----'--,----'-------'-------'-------'-------'-------'--,----'--,----'--,----'--,-------|
   KC_TRNS,KC_TRNS,KC_TRNS,         KC_SPC                                ,MO(_FL),KC_LEFT,KC_DOWN,KC_RGHT  \
//`-------'-------'-------'-----------------------------------------------'-------'-------'-------'-------'
),
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_1]  = ACTION_TAP_DANCE_DOUBLE(KC_TAB, KC_ESC),
  [TD_2]  = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LGUI)
// Other declarations would go here, separated by commas, if you have them
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {
  #ifdef RGBLIGHT_ENABLE

  if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
    rgblight_setrgb_at( 0xFF, 0xA0 ,0x00, 1);
  }

  static uint8_t old_layer = 255;
  uint8_t new_layer = biton32(layer_state);

  if (old_layer != new_layer) {
    switch (new_layer) {
      case _FL:
        rgblight_setrgb(0x00, 0xA0, 0xFF);
        break;
    }

    old_layer = new_layer;
  }

  #endif
}
