
#include QMK_KEYBOARD_H

enum layers {
    LAYER_QUERTY,
    LAYER_NAVIGATION,
    LAYER_SYMBOL,
    LAYER_SPECIAL
};

/* Layer Switches */
#define L_RESET TO(LAYER_QUERTY)
#define L_NAVIG TO(LAYER_NAVIGATION)
#define L_SYMBO TO(LAYER_SYMBOL)
#define L_SPECI TO(LAYER_SPECIAL)

/* Custom Keycodes */
#define C_SHIFT OSM(MOD_LSFT)
#define C_ALT OSM(MOD_RALT)
#define C_SUPER OSM(MOD_LGUI)
#define C_CTRL OSM(MOD_LCTL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QUERTY

 ,-----------------------------------------------------.                     ,-----------------------------------------------------.
 |        |        |        |        |        |        |                     |        |        |        |        |        |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        |   Q    |   W    |   E    |   R    |   T    |                     |   Y    |   U    |   I    |   O    |   P    |        |
 |--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
 |        |   A    |   S    |   D    |   F    |   G    |--------.   ,--------|   H    |   J    |   K    |   L    |   ;    |        |
 |--------+--------+--------+--------+--------+--------|        |   |        |--------+--------+--------+--------+--------+--------|
 |        |   Z    |   X    |   C    |   V    |   B    |--------|   |--------|   N    |   M    |   ,    |   .    |   /    |        |
 `-----------------------------------------------------/        /    \        \----------------------------------------------------'
                         |  SUPER |  CTRL  | SPACE  | / SHIFT  /      \ ENTER  \ | RAISE  |   BS   |  ALT   |
                         `------------------------------------'        '------------------------------------'
*/
[LAYER_QUERTY] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
  XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, XXXXXXX,
  C_ALT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,     XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
                             C_SUPER, C_CTRL, KC_SPC,  C_SHIFT,     KC_ENT,  L_NAVIG, KC_BSPC, C_ALT
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
[LAYER_NAVIGATION] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_INS,  KC_HOME, KC_UP,   KC_END,  XXXXXXX,                       XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX,
  _______, KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,                       XXXXXXX, KC_4,    KC_5,    KC_6,    KC_0,    XXXXXXX,
  _______, XXXXXXX, KC_PGUP, XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
                             _______, _______, L_RESET, _______,     _______, L_SYMBO, _______, _______
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
[LAYER_SYMBOL] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, S(KC_2), S(KC_MINS),KC_LBRC,KC_RBRC,S(KC_6),                       S(KC_1), S(KC_COMM),S(KC_DOT),KC_EQL,S(KC_7),XXXXXXX,
  _______, KC_BSLS, KC_SLSH, S(KC_LBRC),S(KC_RBRC),S(KC_8),                   S(KC_SLSH),S(KC_9),S(KC_0),KC_MINS,S(KC_SCLN),XXXXXXX,
  _______, S(KC_3), S(KC_4), S(KC_BSLS),S(KC_GRV),KC_GRV, XXXXXXX,   XXXXXXX, S(KC_EQL),S(KC_5),S(KC_QUOT),KC_QUOT,KC_SCLN,_______,
                             _______, _______, L_RESET, _______,         _______, L_SPECI, _______, _______
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
[LAYER_SPECIAL] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                             _______, _______, L_RESET, _______,     _______, _______, _______, _______
)

};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [LAYER_QUERTY] = { ENCODER_CCW_CW(QK_MOUSE_WHEEL_LEFT, QK_MOUSE_WHEEL_RIGHT), ENCODER_CCW_CW(QK_MOUSE_WHEEL_DOWN, QK_MOUSE_WHEEL_UP) },
    [LAYER_NAVIGATION] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_SYMBOL] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [LAYER_SPECIAL] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};

#endif // ENCODER_MAP_ENABLE
