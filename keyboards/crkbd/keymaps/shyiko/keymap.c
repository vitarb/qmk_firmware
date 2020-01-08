#include QMK_KEYBOARD_H

// layers
#define L_DEFAULT 0
#define L_LOWER 1
#define L_RAISE 2
#define L_ADJUST 3 // LOWER+RAISE

// custom key codes for layer switching
enum kc_custom {
  LOWER = SAFE_RANGE,
  RAISE
};

#include "keymap_layers.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
  }
  return true;
}
