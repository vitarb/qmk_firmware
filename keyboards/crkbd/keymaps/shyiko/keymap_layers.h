// QMK key codes
// https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes
//
// _______ == KC_TRNS (transparent, i.e. pass-through to lower layer)
// XXXXXXX == KC_NO (noop)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#ifdef LAYOUT_COLEMAK_DH
  [L_DEFAULT] = LAYOUT(                                                                                 \
    KC_TAB,  KC_Q, KC_W, KC_F,    KC_P,  KC_B,   /**/ KC_J,   KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_BSPC, \
    KC_LSFT, KC_A, KC_R, KC_S,    KC_T,  KC_G,   /**/ KC_K,   KC_N,  KC_E,    KC_I,   KC_O,    KC_QUOT, \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_D,  KC_V,   /**/ KC_M,   KC_H,  KC_COMM, KC_DOT, KC_SLSH, EXTRA,   \
                         KC_LALT, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LGUI                            \
  ),
#elseif LAYOUT_COLEMAK
  [L_DEFAULT] = LAYOUT(                                                                                 \
    KC_TAB,  KC_Q, KC_W, KC_F,    KC_P,  KC_G,   /**/ KC_J,   KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_BSPC, \
    KC_LSFT, KC_A, KC_R, KC_S,    KC_T,  KC_D,   /**/ KC_H,   KC_N,  KC_E,    KC_I,   KC_O,    KC_QUOT, \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,  KC_B,   /**/ KC_K,   KC_M,  KC_COMM, KC_DOT, KC_SLSH, EXTRA,   \
                         KC_LALT, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LGUI                            \
  ),
#elseif LAYOUT_QERTY_SCLN
  [L_DEFAULT] = LAYOUT(                                                                                 \
    KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,  KC_T,   /**/ KC_Y,   KC_U,  KC_I,    KC_O,   KC_SCLN, KC_BSPC, \
    KC_LSFT, KC_A, KC_S, KC_D,    KC_F,  KC_G,   /**/ KC_H,   KC_J,  KC_K,    KC_L,   KC_P,    KC_QUOT, \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,  KC_B,   /**/ KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH, EXTRA,   \
                         KC_LALT, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LGUI                            \
  ),
#else
  [L_DEFAULT] = LAYOUT(                                                                                 \
    KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,  KC_T,   /**/ KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC, \
    KC_LSFT, KC_A, KC_S, KC_D,    KC_F,  KC_G,   /**/ KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, \
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,  KC_B,   /**/ KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH, EXTRA,   \
                         KC_LALT, LOWER, KC_SPC, /**/ KC_ENT, RAISE, KC_LGUI                            \
  ),
#endif

  [L_LOWER] = LAYOUT(                                                                                                               \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,     /**/ KC_6,      KC_7,     KC_8,    KC_9,        KC_0,        _______,  \
    _______, KC_VOLD, KC_VOLU, KC_UP,   KC_PIPE,   KC_TILD,  /**/ KC_MINUS,  KC_EQUAL, KC_GT,   KC_LBRACKET, KC_RBRACKET, KC_GRAVE, \
    _______, KC_MUTE, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_UNDS,  /**/ KC_PLUS,   KC_LT,    _______, _______,     KC_BSLASH,   _______,  \
                               _______, _______,   _______,  /**/ _______,   _______,  _______                                      \
  ),

  // NOTE: make sure to update keymap.c if you change this layer
  [L_LOWER_SHIFT] = LAYOUT(                                                                                             \
    _______, _______, _______, _______,   _______,  _______, /**/ _______, _______, _______, _______, _______, _______, \
    _______, KC_MPRV, KC_MNXT, KC_PGUP,   _______,  _______, /**/ _______, _______, _______, _______, _______, _______, \
    _______, KC_MPLY, KC_HOME, KC_PGDOWN, KC_END,   _______, /**/ _______, _______, _______, _______, _______, _______, \
                               _______,   _______,  _______, /**/ _______, _______, _______                             \
  ),

  [L_RAISE] = LAYOUT(                                                                                                     \
    _______, KC_F1,  KC_F2,  KC_F3,   KC_F4,     KC_F5,   /**/ KC_F6,    KC_F7,    KC_F8,   KC_F9,    KC_F10,  KC_DELETE, \
    _______, KC_F11, KC_F12, XXXXXXX, XXXXXXX,   XXXXXXX, /**/ KC_MINUS, KC_EQUAL, KC_UP,   XXXXXXX,  XXXXXXX, _______,   \
    _______, KC_Z,   KC_X,   KC_C,    KC_V,      XXXXXXX, /**/ KC_PLUS,  KC_LEFT,  KC_DOWN, KC_RIGHT, KC_APP,  _______,   \
                             _______, _______,   _______, /**/ _______,  _______,  _______                                \
  ),

  [L_ADJUST] = LAYOUT(                                                                                                 \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, /**/ _______, _______, KC_PGUP,   _______, _______, _______, \
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    _______, /**/ _______, KC_HOME, KC_PGDOWN, KC_END,  _______, _______, \
                               _______, _______, _______, /**/ _______, _______, _______                               \
  ),

  [L_EXTRA] = LAYOUT(                                                                                                                        \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    /**/ XXXXXXX,    XXXXXXX,       KC_INSERT,  XXXXXXX,    KC_PSCR,     XXXXXXX, \
    KC_CAPS, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX,    /**/ XXXXXXX,    KC_MS_WH_UP,   XXXXXXX,    KC_MS_UP,   XXXXXXX,     NUMPAD,  \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    /**/ XXXXXXX,    KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, \
                               _______, _______, KC_MS_BTN1, /**/ KC_MS_BTN2, _______,       _______                                         \
  ),

  [L_NUMPAD] = LAYOUT(                                                                                                          \
    _______, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_SLASH, KC_KP_ASTERISK, /**/ _______, _______, _______, _______, _______, _______, \
    _______, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_MINUS, KC_KP_PLUS,     /**/ _______, _______, _______, _______, _______, _______, \
    KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, NUMPAD,      _______,        /**/ _______, _______, _______, _______, _______, _______, \
                               _______, _______,     _______,        /**/ _______, _______, _______                             \
  )
};
