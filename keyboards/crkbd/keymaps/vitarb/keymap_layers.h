// QMK key codes
// https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes
//
// _______ == KC_TRNS (transparent, i.e. pass-through to lower layer)
// XXXXXXX == KC_NO (noop)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L_QWTY] = LAYOUT(																																\
    KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,    /**/ KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_UNDS,\
    KC_LCTL,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,    /**/ KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,\
    KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,	 /**/ KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	EXTRA,  \
										KC_LALT,	LOWER,		KC_SPC,  /**/ KC_ENT,	RAISE,		KC_LGUI										\
  ),

  [L_CLMK] = LAYOUT(																																\
    KC_TAB,		KC_Q,		KC_W,		KC_F,		KC_P,		KC_G,	 /**/ KC_J,		KC_L,		KC_U,		KC_Y,		KC_SCLN,	KC_UNDS,\
    KC_LCTL,	KC_A,		KC_R,		KC_S,		KC_T,		KC_D,    /**/ KC_H,		KC_N,		KC_E,		KC_I,		KC_O,		KC_QUOT,\
    KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,    /**/ KC_K,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	EXTRA,  \
										KC_LALT,	LOWER,		KC_SPC,  /**/ KC_ENT,	RAISE,		KC_LGUI										\
  ),
	
  [L_LOWER] = LAYOUT(																																\
    KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,	 /**/ KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_TILD,\
    _______,	KC_LBRC,	KC_RBRC,	KC_LPRN,	KC_RPRN,	KC_PERC, /**/ KC_PIPE,	KC_EQL,		KC_PLUS,	KC_MINS,	KC_COLN,	KC_GRV, \
    _______,	KC_EXLM,	KC_AT,		KC_LCBR,	KC_RCBR,	KC_HASH, /**/ KC_AMPR,	KC_ASTR,	KC_LT,		KC_GT,		KC_BSLS,	_______,\
										_______,	_______,	EXTRA,	 /**/ KC_BSPC,	_______,	_______										\
  ),

  [L_RAISE] = LAYOUT(																																\
    _______,	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,   /**/ KC_F6,	KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11, \
    _______,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ KC_LEFT,	KC_DOWN,	KC_UP,		KC_RIGHT,	KC_DEL,		KC_F12, \
    _______,	KC_PSCR,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ KC_HOME,	KC_PGDN,	KC_PGUP,	KC_END,		KC_INS,		_______,\
										_______,	_______,	_______, /**/ _______,	_______,	_______										\
  ),

  [L_EXTRA] = LAYOUT(																																\
    XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,\
    _______,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ XXXXXXX,	KC_VOLD,	KC_VOLU,	KC_MUTE,	XXXXXXX,	XXXXXXX,\
    _______,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ XXXXXXX,	KC_MPRV,	KC_MNXT,	KC_MPLY,	KC_CALC,	XXXXXXX,\
										_______,	XXXXXXX,	XXXXXXX, /**/ XXXXXXX,	XXXXXXX,    _______										\
  )

  [L_ADJUST] = LAYOUT(																																\
    _______,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ KC_MS_WH_UP,	KC_MS_BTN1,	KC_MS_UP,	KC_MS_BTN2,	XXXXXXX,	XXXXXXX,\
    _______,	XXXXXXX,	XXXXXXX,	DF(L_QWTY),	DF(L_CLMK),	XXXXXXX, /**/ KC_MS_WH_DOWN,KC_MS_LEFT,	KC_MS_DOWN,	KC_MS_RIGHT,KC_MS_BTN3,	XXXXXXX,\
    _______,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX, /**/ XXXXXXX,		XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,	_______,\
										_______,	_______,	_______, /**/ _______,		_______,	_______										\
  ),
};

