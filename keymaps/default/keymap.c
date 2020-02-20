#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
  [LETTERS] = LAYOUT
    ( LSFT(KC_A), LSFT(KC_B), LSFT(KC_C), LSFT(KC_D), LSFT(KC_E), LSFT(KC_F),
      LSFT(KC_G), LSFT(KC_H), LSFT(KC_I), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L),
      LSFT(KC_M), LSFT(KC_N), LSFT(KC_O), LSFT(KC_P), LSFT(KC_Q), LSFT(KC_R),
      LSFT(KC_S), LSFT(KC_T), LSFT(KC_U),
      LSFT(KC_V), LSFT(KC_W), LSFT(KC_X),
      KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
      KC_G, KC_H, KC_I, KC_J, KC_K, KC_L,
      KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R,
      KC_S, KC_T, KC_U,
      KC_V, KC_W, KC_X )
};

