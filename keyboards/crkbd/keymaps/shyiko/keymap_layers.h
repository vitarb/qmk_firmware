// QMK key codes
// https://beta.docs.qmk.fm/features/keycodes_basic

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#ifdef LAYOUT_COLEMAK_DH    
  [L_DEFAULT] = LAYOUT(                                                                                   \
    KC_TAB,  KC_Q, KC_W, KC_F,    KC_P,  KC_B,   /**/ KC_J,   KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_BSPC,   \
    KC_LSFT, KC_A, KC_R, KC_S,    KC_T,  KC_G,   /**/ KC_K,   KC_N,  KC_E,    KC_I,   KC_O,    KC_QUOT,   \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_D,  KC_V,   /**/ KC_M,   KC_H,  KC_COMM, KC_DOT, KC_SLSH, KC_BSLASH, \
                         KC_LGUI, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LALT                              \
  ),
#else
  [L_DEFAULT] = LAYOUT(                                                                                   \
    KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,  KC_T,   /**/ KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC,   \
    KC_LSFT, KC_A, KC_S, KC_D,    KC_F,  KC_G,   /**/ KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,   \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,  KC_B,   /**/ KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_BSLASH, \
                         KC_LGUI, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LALT                              \
  ),
#endif

  [L_LOWER] = LAYOUT(                                                                                                              \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    /**/ KC_6,      KC_7,     KC_8,      KC_9,    KC_0,        KC_BSPC,     \
    KC_LSFT, KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID,  KC_BRIU, /**/ KC_MINUS,  KC_EQUAL, KC_PGUP,   XXXXXXX, KC_LBRACKET, KC_RBRACKET, \
    KC_LCTL, KC_MPLY, KC_MPRV, KC_MNXT, KC_GRAVE, XXXXXXX, /**/ KC_INSERT, KC_HOME,  KC_PGDOWN, KC_END,  KC_SLSH,     KC_BSLASH,   \
                               KC_LGUI, LOWER,    KC_SPC,  /**/ KC_ENT,    RAISE,    KC_LALT                                       \
  ),

  [L_RAISE] = LAYOUT(                                                                                                     \
    KC_ESC,  KC_1,  KC_2,  KC_3,    KC_4,  KC_5,   /**/ KC_6,      KC_7,     KC_8,    KC_9,     KC_0,        KC_DELETE,   \
    KC_LSFT, KC_F1, KC_F2, KC_F3,   KC_F3, KC_F5,  /**/ KC_MINUS,  KC_EQUAL, KC_UP,   KC_GRAVE, KC_LBRACKET, KC_RBRACKET, \
    KC_LCTL, KC_F6, KC_F7, KC_F8,   KC_F9, KC_F10, /**/ KC_INSERT, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_SLSH,     KC_BSLASH,   \
                           KC_LGUI, LOWER, KC_SPC, /**/ KC_ENT,    RAISE,    KC_LALT                                      \
  ),

  [L_ADJUST] = LAYOUT(                                                                                                 \
    XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    /**/ KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    XXXXXXX, \
    KC_LSFT, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, KC_PGUP,   XXXXXXX, XXXXXXX, XXXXXXX, \
    KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, KC_HOME, KC_PGDOWN, KC_END,  XXXXXXX, XXXXXXX, \
                               KC_LGUI, LOWER,   KC_SPC,  /**/ KC_ENT,  RAISE,   KC_LALT                               \
  )
};
