#include "modular_left.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
  KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,       KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,  \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,  \
  KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,   KC_P4,    KC_P5,    KC_P6,    KC_NO,    \
  KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,  KC_P1,    KC_P2,    KC_P3,              \
  KC_LCTL,   KC_LGUI,  KC_LALT,  KC_SPC, KC_NO,  KC_6,  KC_SPC,     KC_RALT,    KC_RGUI,     KC_RGUI,    KC_RCTL,  KC_P0,    KC_NO,    KC_PDOT,  KC_PENT   \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
