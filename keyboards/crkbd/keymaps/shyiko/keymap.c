#include QMK_KEYBOARD_H

// layers
// https://beta.docs.qmk.fm/using-qmk/software-features/feature_layers
#define L_QWERTY 0
#define L_COLEMAK 1
#define L_LOWER 2
#define L_LOWER_SHIFT 3
#define L_RAISE 4
#define L_EXTRA 5
#define L_ADJUST 6 // LOWER+RAISE
#define L_MOUSE 7

// custom key codes for layer switching
enum kc_custom {
  LOWER = SAFE_RANGE,
  RAISE,
  EXTRA
};

#include "keymap_layers.h"

bool restore_shift = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (restore_shift) {
    register_code(KC_LSFT);
    restore_shift = false;
  }
  if (IS_LAYER_ON(L_LOWER_SHIFT) && !IS_LAYER_ON(L_RAISE)) {
    switch (keycode) {
      case KC_SCLN:
      case KC_MPRV: case KC_MNXT: case KC_PGUP:
      case KC_MPLY: case KC_HOME: case KC_PGDOWN: case KC_END:
      case KC_MINUS: case KC_EQUAL: /* case KC_BSLASH:  */case KC_GRAVE:
        if (record->event.pressed) {
            unregister_code(KC_LSFT);
        } else {
            restore_shift = true;
        }
        break; // let qmk handle keycode as usual
      case LOWER:
      case KC_LSFT:
        break;
      default:
        register_code(KC_LSFT);
        break; // let qmk handle keycode as usual
    }
  }
  switch (keycode) {
    case KC_LSFT:
      if (!IS_LAYER_ON(L_LOWER)) {
        break; // let qmk handle keycode as usual
      }
      if (record->event.pressed) {
        layer_on(L_LOWER_SHIFT);
      } else {
        layer_off(L_LOWER_SHIFT);
        restore_shift = false;
      }
      break; // let qmk handle keycode as usual
    case LOWER:
      if (record->event.pressed) {
        layer_on(L_LOWER);
        if (get_mods() & MOD_BIT(KC_LSFT)) {
          layer_on(L_LOWER_SHIFT);
        }
      } else {
        layer_off(L_LOWER_SHIFT);
        restore_shift = false;
        layer_off(L_LOWER);
      }
      update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(L_RAISE);
      } else {
        layer_off(L_RAISE);
      }
      update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
      return false;
    case EXTRA:
      if (record->event.pressed) {
        layer_on(L_EXTRA);
      } else {
        layer_off(L_EXTRA);
      }
      return false;
  }
  return true;
}
