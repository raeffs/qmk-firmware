
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _RAISE,
    _LOWER,
    _ADJUST
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define KC_AUML RALT(KC_A)
#define KC_OUML RALT(KC_O)
#define KC_UUML RALT(KC_U)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QUERTY

 ,-----------------------------------------------------.                     ,-----------------------------------------------------.
 |  ESC   |   1    |   2    |   3    |   4    |   5    |                     |   6    |   7    |   8    |   9    |   0    |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |  TAB   |   Q    |   W    |   E    |   R    |   T    |                     |   Y    |   U    |   I    |   O    |   P    |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 | L CTRL |   A    |   S    |   D    |   F    |   G    |--------.   ,--------|   H    |   J    |   K    |   L    |   ;    |        |
 |--------+--------+--------+--------+--------+--------|        |   |        |--------+--------+--------+--------+--------+--------|
 | L SFT  |   Z    |   X    |   C    |   V    |   B    |--------|   |--------|   N    |   M    |   ,    |   .    |   /    | R SFT  |
 `-----------------------------------------------------/        /    \        \----------------------------------------------------'
                         | L ALT  | L GUI  | LOWER  | / SPACE  /      \ ENTER  \ | RAISE  | BackSp | R GUI  |
                         `------------------------------------'        '------------------------------------'
*/
[_QWERTY] = LAYOUT(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, XXXXXXX,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,     XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                             KC_LALT, KC_LGUI, LOWER,   KC_SPC,      KC_ENT,  RAISE,   KC_BSPC, KC_RGUI
),

/* NAVIGATION

 ,-----------------------------------------------------.                     ,-----------------------------------------------------.
 |        |        |        |        |        |        |                     |        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        | Insert |  Home  |   Up   |  End   |        |                     |        |   7    |   8    |   9    |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        | Delete |  Left  |  Down  | Right  |        |--------.   ,--------|        |   4    |   5    |   6    |   0    |        |
 |--------+--------+--------+--------+--------+--------|        |   |        |--------+--------+--------+--------+--------+--------|
 |        |        |  PgUp  |        | PgDown |        |--------|   |--------|        |   1    |   2    |   3    |        |        |
 `-----------------------------------------------------/        /    \        \----------------------------------------------------'
                         |        |        |        | /        /      \        \ |        |        |        |
                         `------------------------------------'        '------------------------------------'
*/
[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_INS,  KC_HOME, KC_UP,   KC_END,  XXXXXXX,                       XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX,
  _______, KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,                       XXXXXXX, KC_4,    KC_5,    KC_6,    KC_0,    XXXXXXX,
  _______, XXXXXXX, KC_PGUP, XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
                             _______, _______, _______, _______,     _______, _______, _______, _______
),

/* SYMBOL

 ,-----------------------------------------------------.                     ,-----------------------------------------------------.
 |  ESC   |        |        |        |        |        |                     |        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |  TAB   |   @    |   _    |   [    |   ]    |   ^    |                     |   !    |   <    |   >    |   =    |   &    |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 | L CTRL |   \    |   /    |   {    |   }    |   *    |--------.   ,--------|   ?    |   (    |   )    |   -    |   :    |        |
 |--------+--------+--------+--------+--------+--------|        |   |        |--------+--------+--------+--------+--------+--------|
 | L SFT  |   #    |   $    |   |    |   ~    |   `    |--------|   |--------|   +    |   %    |   "    |   '    |   ;    | R SFT  |
 `-----------------------------------------------------/        /    \        \----------------------------------------------------'
                         |        |        |        | /        /      \        \ |        |        |        |
                         `------------------------------------'        '------------------------------------'
*/
[_RAISE] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, S(KC_2), S(KC_MINS),KC_LBRC,KC_RBRC,S(KC_6),                       S(KC_1), S(KC_COMM),S(KC_DOT),KC_EQL,S(KC_7),XXXXXXX,
  _______, KC_BSLS, KC_SLSH, S(KC_LBRC),S(KC_RBRC),S(KC_8),                   S(KC_SLSH),S(KC_9),S(KC_0),KC_MINS,S(KC_SCLN),XXXXXXX,
  _______, S(KC_3), S(KC_4), S(KC_BSLS),S(KC_GRV),KC_GRV, XXXXXXX,   XXXXXXX, S(KC_EQL),S(KC_5),S(KC_QUOT),KC_QUOT,KC_SCLN,_______,
                             _______, _______, _______, _______,     _______, _______, _______, _______
),

/* SPECIAL

 ,-----------------------------------------------------.                     ,-----------------------------------------------------.
 |        |        |        |        |        |        |                     |        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        |        |        |        |        |        |                     |        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        |        |        |        |        |        |--------.   ,--------|        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|        |   |        |--------+--------+--------+--------+--------+--------|
 |        |        |        |        |        |        |--------|   |--------|        |        |        |        |        |        |
 `-----------------------------------------------------/        /    \        \----------------------------------------------------'
                         |        |        |        | /        /      \        \ |        |        |        |
                         `------------------------------------'        '------------------------------------'
*/
[_ADJUST] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                             _______, _______, _______, _______,     _______, _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_RAISE] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ADJUST] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};

#endif // ENCODER_MAP_ENABLE
