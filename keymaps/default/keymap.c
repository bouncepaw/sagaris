#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LATIN] = FINGERS(
    KC_DQUO, KC_Z, KC_P, KC_R, KC_D, KC_MINS,
    KK_LANG, KC_H, KC_S, KC_T, KC_N, KK_CMSP,
    KC_Q,    KC_Y, KC_K, KC_M, KC_C, KC_LPRN,
    KC_SCLN, KC_F, KC_W, KC_U, KC_J, KC_QUOT,
    KC_DOT,  KC_E, KC_O, KC_I, KC_L, KC_ENT,
    KC_RPRN, KC_A, KC_V, KC_B, KC_G, KC_X),
[CYRILLIC] = FINGERS(
    RU_ZH,   RU_CH,   RU_P,  RU_R,  RU_D, KC_MINS,
    KK_LANG, RU_V,    RU_S,  RU_T,  RU_N, KK_CMSP,
    RU_F,    RU_J,    RU_Z,  RU_M,  RU_K, KC_LPRN,
    RU_SCLN, RU_SOFT, RU_JA, RU_U,  RU_H, RU_E,
    RU_DOT,  RU_JE,   RU_O,  RU_I,  RU_L, KC_ENT,
    KC_RPRN, RU_A,    RU_Y,  RU_B,  RU_G, RU_TS),
[MARS] = FINGERS(
    KK_DQUO, _______, KK_GUIL, KK_LBRC, KC_PLUS, _______,
    _______, KK_PIPE, KK_TILD, KC_PERC, KK_COLN, KK_LT,
    _______, _______, KK_GRV,  KK_QUES, KK_SLSH, KK_AT,
    _______, KK_AMPR, KK_RBRC, KK_EMOT, _______, KK_QUOT,
    KK_GT,   KC_EQL,  KC_ASTR, KK_DLR,  KK_CIRC, _______,
    KK_HASH, KK_BSLS, KC_EXLM, _______, _______, _______),
[SUN] = FINGERS(
    KC_PAUS, KC_CAPS, KK_TPRV, KK_TNXT, KC_APP,  KC_INS,
    KC_ENT,  KK_SASK, KK_SSCN, KK_SWIN, KK_SSEL, KK_COPY,
    KC_PSCR, _______, KC_VOLU, KC_MUTE, KC_VOLD, KK_PAST,
    KC_F13,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F16,
    KC_F14,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F17,
    KC_F15,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F18),
[MOON] = FINGERS(
    _______, KC_7,    KC_6,    KC_5,    KC_4,    _______,
    _______, KC_3,    KC_2,    KC_1,    KC_0,    KK_COMM,
    _______, _______, _______, KC_8,    KC_9,    _______,
    _______, KC_HOME, KC_UP,   KC_END,  _______, _______,
    KK_DOT,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, _______,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_PGDN, _______),
[MOUSE] = FINGERS(
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_MS_BTN3, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_L, KC_WH_R,
    XXXXXXX,    KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, XXXXXXX,
    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_D, XXXXXXX),
};
void toggle_language(void) {
  layer_invert(CYRILLIC);
  tap_code(KC_CAPS);
}
#define TYPE_IN_LATIN(ck)\
case KK_##ck:\
if (record->event.pressed) {\
  bool should_toggle_back = false;\
  if (layer_state & _BV(CYRILLIC)) {\
    toggle_language();\
    should_toggle_back = true;\
  }\
  tap_code16(KC_##ck);\
  if (should_toggle_back) toggle_language();\
}\
return false
#define TYPE_IN_NATIVE(ck)\
case KK_##ck:\
if (record->event.pressed)\
  tap_code16((layer_state & _BV(CYRILLIC)) ? RU_##ck : KC_##ck);\
return false
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // If Cyrillic is on, toggle Latin, type this, go back.
    // If Cyrillic isn't on, just type this.
    TYPE_IN_LATIN(LBRC);
    TYPE_IN_LATIN(RBRC);
    TYPE_IN_LATIN(PIPE);
    TYPE_IN_LATIN(TILD);
    TYPE_IN_LATIN(LT);
    TYPE_IN_LATIN(GT);
    TYPE_IN_LATIN(GRV);
    TYPE_IN_LATIN(AT);
    TYPE_IN_LATIN(AMPR);
    TYPE_IN_LATIN(QUOT);
    TYPE_IN_LATIN(DLR);
    TYPE_IN_LATIN(CIRC);
    TYPE_IN_LATIN(HASH);

    // If Cyrillic is on, type RU_ version, else type KC_ version.
    TYPE_IN_NATIVE(COLN);
    TYPE_IN_NATIVE(QUES);
    TYPE_IN_NATIVE(DQUO);
    TYPE_IN_NATIVE(SLSH);
    TYPE_IN_NATIVE(BSLS);
    TYPE_IN_NATIVE(DOT);
    TYPE_IN_NATIVE(COMM);

    case KK_LANG:
    if (record->event.pressed) toggle_language();
    return false;

    case KK_GUIL:
    if (record->event.pressed) {
      bool should_toggle_back = layer_state & _BV(CYRILLIC);
      if (should_toggle_back) toggle_language();
      tap_code16(KC_LT);
      tap_code16(KC_LT);
      if (should_toggle_back) toggle_language();
    }
    return false;

    case KK_EMOT:
    if (record->event.pressed) {
      bool should_toggle_back = layer_state & _BV(CYRILLIC);
      if (should_toggle_back) toggle_language();
      tap_code16(KC_GT);
      tap_code16(KC_GT);
      if (should_toggle_back) toggle_language();
    }
    return false;

    // fix it! pastes the clipboard!!
    case KK_CMSP:
    if (record->event.pressed) {
      tap_code16(KK_COMM);
      tap_code16(KC_SPC);
    }
    return false;
  }
  return true;
}
