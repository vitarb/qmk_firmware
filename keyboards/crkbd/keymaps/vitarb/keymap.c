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
  }
  return true;
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
	leading = false;
	leader_end();
	// Replace the sequences below with your own sequences.
	SEQ_ONE_KEY(KC_A) {
	  SEND_STRING(SS_LCTRL("a"));
	}
	SEQ_ONE_KEY(KC_Z) {
	  SEND_STRING(SS_LCTRL("z"));
	}
	SEQ_ONE_KEY(KC_X) {
	  SEND_STRING(SS_LCTRL("x"));
	}
	SEQ_ONE_KEY(KC_C) {
	  SEND_STRING(SS_LCTRL("c"));
	}
	SEQ_ONE_KEY(KC_V) {
	  SEND_STRING(SS_LCTRL("v"));
	}
	SEQ_ONE_KEY(KC_N) {
	  SEND_STRING(SS_LCTRL("n"));
	}
	SEQ_ONE_KEY(KC_E) {
	  SEND_STRING(SS_LCTRL("e"));
	}
	SEQ_ONE_KEY(KC_T) {
	  SEND_STRING(SS_LCTRL("t"));
	}
	SEQ_ONE_KEY(KC_F) {
	  SEND_STRING(SS_LCTRL("f"));
	}
	SEQ_ONE_KEY(KC_R) {
	  SEND_STRING(SS_LCTRL("r"));
	}
	SEQ_ONE_KEY(KC_S) {
	  SEND_STRING(SS_LCTRL("s"));
	}
	SEQ_TWO_KEYS(KC_Z, KC_Z) {
      SEND_STRING(SS_LCTRL(SS_LSFT("z")));
    }
	SEQ_TWO_KEYS(KC_C, KC_C) {
      SEND_STRING(SS_LCTRL(SS_LSFT("c")));
    }
	SEQ_TWO_KEYS(KC_V, KC_V) {
      SEND_STRING(SS_LCTRL(SS_LSFT("v")));
    }
	SEQ_TWO_KEYS(KC_F, KC_F) {
      SEND_STRING(SS_LCTRL(SS_LSFT("f")));
    }
	SEQ_TWO_KEYS(KC_R, KC_R) {
      SEND_STRING(SS_LCTRL(SS_LSFT("r")));
    }
	SEQ_TWO_KEYS(KC_A, KC_C) {
      SEND_STRING(SS_LCTRL("a") SS_LCTRL("c"));
    }
  }
}
