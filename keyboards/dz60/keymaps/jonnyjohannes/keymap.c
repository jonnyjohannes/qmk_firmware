#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, MO(1),   KC_LGUI,                   KC_SPC,  KC_SPC,  KC_SPC,           KC_RGUI, MO(1),   XXXXXXX, KC_RCTL, KC_RALT
    ),

    LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC__VOLDOWN, KC__VOLUP, XXXXXXX, KC__MUTE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_CAPS, _______, _______, _______, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, _______, _______,          _______,
        _______, XXXXXXX, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______, _______, _______, XXXXXXX,
        _______, _______, KC_MPRV,                   KC_MPLY, KC_MPLY, KC_MPLY,          KC_MNXT, _______, XXXXXXX, _______, _______
    )
};
