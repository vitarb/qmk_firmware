#include QMK_KEYBOARD_H

// layers
// https://beta.docs.qmk.fm/using-qmk/software-features/feature_layers
#define L_DEFAULT 0
#define L_LOWER 1
#define L_LOWER_SHIFT 2
#define L_RAISE 3
#define L_EXTRA 4
#define L_ADJUST 5 // LOWER+RAISE
#define L_NUMPAD 6

// custom key codes for layer switching
enum kc_custom {
  LOWER = SAFE_RANGE,
  RAISE,
  EXTRA,
  NUMPAD
};

#include "keymap_layers.h"

bool restore_shift = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (restore_shift) {
    register_code(KC_LSFT);
    restore_shift = false;
  }
  switch (keycode) {
    case KC_MPRV: case KC_MNXT: case KC_PGUP:
    case KC_MPLY: case KC_HOME: case KC_PGDOWN: case KC_END:
      if (!IS_LAYER_ON(L_LOWER_SHIFT) || IS_LAYER_ON(L_RAISE)) {
        break;
      }
      if (record->event.pressed) {
        unregister_code(KC_LSFT);
      } else {
        restore_shift = true;
      }
      break; // let qmk handle keycode as usual
    case KC_LSFT:
      if (!IS_LAYER_ON(L_LOWER)) {
        break;
      }
      if (record->event.pressed) {
        layer_on(L_LOWER_SHIFT);
      } else {
        layer_off(L_LOWER_SHIFT);
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
    case NUMPAD:
      if (record->event.pressed) {
        tap_code(KC_NUMLOCK);
        layer_invert(L_NUMPAD);
      }
      return false;
  }
  return true;
}
