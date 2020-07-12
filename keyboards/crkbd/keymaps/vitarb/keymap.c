#include QMK_KEYBOARD_H

// layers
// https://beta.docs.qmk.fm/using-qmk/software-features/feature_layers
#define L_QWTY 0
#define L_CLMK 1
#define L_LOWER 2
#define L_RAISE 3
#define L_EXTRA 4
#define L_ADJUST 5 // LOWER+RAISE

// custom key codes for layer switching
enum kc_custom {
  LOWER = SAFE_RANGE,
  RAISE,
  EXTRA,
  FATARROWR,
  FATARROWL,
  FITARROWR,
  FITARROWL,
  COLNEQUAL,
  NEGEEQUAL,
};

#include "keymap_layers.h"

bool restore_shift = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (restore_shift) {
    register_code(KC_LSFT);
    restore_shift = false;
  }
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(L_LOWER);
      } else {
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
    case FATARROWR:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING("=>");
      }
      return false;
    case FATARROWL:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING("<=");
      }
      return false;
    case FITARROWR:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING("->");
      }
      return false;
    case FITARROWL:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING("<-");
      }
      return false;
    case COLNEQUAL:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING(":=");
      }
      return false;
    case NEGEEQUAL:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            restore_shift = true;
        }
        SEND_STRING("!=");
      }
      return false;
  }
  return true;
}
