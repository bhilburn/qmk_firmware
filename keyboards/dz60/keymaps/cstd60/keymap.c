#include QMK_KEYBOARD_H

#define ______ KC_TRNS

enum keyboard_layers {
  _QWERTY = 0, // QWERTY Layer
  _DVORAK,     // Dvorak Layer
  _FUNCTION,   // Function Layer
  _CONTROL     // Control Layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0 - QWERTY, standard 60% without arrows, Space Cadet Shifts, 'Linux Ctrl'
  * ,-----------------------------------------------------------------------------------------.
  * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
  * |-----------------------------------------------------------------------------------------+
  * | LCtrl   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |    Right Shift   |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl |  GUI  |  Alt  |             Space               |  Alt  |  Ctrl  |  FN1  |  FN2  |
  * `-----------------------------------------------------------------------------------------'
  */
  [_QWERTY] = LAYOUT_60_ansi(
      KC_GESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,      KC_8,   KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
      KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,      KC_I,   KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
      KC_LCTL,  KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,     KC_J,      KC_K,   KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
      KC_LSFT,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_N,      KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
      KC_LCTL,  KC_LGUI,  KC_LALT,  KC_SPC,  KC_RALT,  KC_RCTRL,  MO(_FUNCTION),    MO(_CONTROL)),

  /* Layer 1 - Dvorak, standard 60% without arrows, Space Cadet Shifts, 'Linux Ctrl'
  * ,-----------------------------------------------------------------------------------------.
  * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  [  |  ]  |   Bkspc   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  "  |  <  |  >  |  P  |  Y  |  F  |  G  |  C  |  R  |  L  |  /  |  =  |    \   |
  * |-----------------------------------------------------------------------------------------+
  * | LCtrl   |  A  |  O  |  E  |  U  |  I  |  D  |  H  |  T  |  N  |  S  |  -  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift    |  :  |  Q  |  J  |  K  |  X  |  B  |  M  |  W  |  V  |  Z  |    Right Shift   |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl |  GUI  |  Alt  |             Space               |  Alt  |  Ctrl  |  FN1  |  FN2  |
  * `-----------------------------------------------------------------------------------------'
  */
  [_DVORAK] = LAYOUT_60_ansi(
      KC_GESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,      KC_8,   KC_9,   KC_0,    KC_LBRC,  KC_RBRC,  KC_BSPC,
      KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,    KC_Y,    KC_F,     KC_G,      KC_C,   KC_R,   KC_L,    KC_SLSH,  KC_EQL,   KC_BSLS,
      KC_LCTL,  KC_A,     KC_O,     KC_E,    KC_U,    KC_I,    KC_D,     KC_H,      KC_T,   KC_N,   KC_S,    KC_MINS,  KC_ENT,
      KC_LSFT,  KC_SCLN,  KC_Q,    KC_J,    KC_K,    KC_X,     KC_B,      KC_M,   KC_W,   KC_V,    KC_Z,     KC_RSFT,
      KC_LCTL,  KC_LGUI,  KC_LALT,  KC_SPC,  KC_RALT,  KC_RCTRL,  MO(_FUNCTION),  MO(_CONTROL)),

  /* Layer 2 - Function Layer 1
  * ,-----------------------------------------------------------------------------------------.
  * | ` ~ | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11  | F12 |  Delete  |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |  UP |    | PGUP | HME | PSCR|     |     |     |     |     |     |  INS   |
  * |-----------------------------------------------------------------------------------------+
  * |  Caps   |  LT |  DN |  RT | PGDN|  END | PAUS|     |     |     |     |     |            |
  * |-----------------------------------------------------------------------------------------+
  * |          |     |     |     |     |     |     |     |     |     |     |                  |
  * |-----------------------------------------------------------------------------------------+
  * |      |       |       |                                 |       |        |       |       |
  * `-----------------------------------------------------------------------------------------'
  */
  [_FUNCTION] = LAYOUT_60_ansi(
      KC_GRV,  KC_F1,    KC_F2,    KC_F3,     KC_F4,    KC_F5,    KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,
      ______,  ______,   KC_UP,    ______,    KC_PGUP,  KC_HOME,  KC_PSCR,  ______,  ______,  ______,  ______,   ______,  ______,  KC_INS,
      KC_CAPS, KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_PGDN,  KC_END,   KC_PAUS,  ______,  ______,  ______,  ______,   ______,  ______,
      ______,  ______,   ______,   ______,    ______,   ______,   ______,   ______,  ______,  ______,  ______,  ______,
      ______,  ______,   ______,   ______,    ______,   ______,   ______,   ______),

  /* Layer 3 - Function Layer 2
   * Note that this layer is used to switch between QWERTY and Dvorak.*/
  [_CONTROL] = LAYOUT_60_ansi(
      ______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MSTP,  KC_MPLY,  ______,   ______,   ______,   ______,  ______,   ______,  ______,  ______,
      ______,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  ______,  ______,   ______,  ______,  ______,
      ______,  BL_TOGG,  BL_STEP,  BL_DEC,   BL_INC,   ______,   ______,   ______,   ______,   ______,  ______,   ______,  ______,
      ______,  ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   DF(_QWERTY),   DF(_DVORAK),    ______,
      RESET,   ______,   ______,   ______,   ______,   ______,   ______,  ______),
};
