#ifndef KLAVAROG_CHORDGEN
#define KLAVAROG_CHORDGEN
enum combo_events {
  combo_event_3635722050819258543, //tap_code16(RU_SHCH);
  combo_event_1869332572469108580, //tap_code16(RU_JU);
  combo_event_4060120399592134633, //tap_code16(KC_GRAVE);
  combo_event_2631682705235724930, //tap_code16(RU_SH);
  combo_event_2597827877647466371, //tap_code16(KC_UNDS);
  combo_event_5179501549317328715, //tap_code16(KC_UNDS);
  combo_event_1677738204539990625, //tap_code16(KC_LCBR);
  combo_event_6411135477331246535, //tap_code16(KC_RCBR);
  
};
const uint16_t PROGMEM combo_array_3635722050819258543[] = {
  RU_SOFT, RU_JA, COMBO_END
};
const uint16_t PROGMEM combo_array_1869332572469108580[] = {
  RU_JA, RU_U, COMBO_END
};
const uint16_t PROGMEM combo_array_4060120399592134633[] = {
  RU_A, RU_Y, COMBO_END
};
const uint16_t PROGMEM combo_array_2631682705235724930[] = {
  RU_Z, RU_M, COMBO_END
};
const uint16_t PROGMEM combo_array_2597827877647466371[] = {
  RU_JE, RU_O, RU_I, COMBO_END
};
const uint16_t PROGMEM combo_array_5179501549317328715[] = {
  KC_E, KC_O, KC_I, COMBO_END
};
const uint16_t PROGMEM combo_array_1677738204539990625[] = {
  KC_D, KC_N, COMBO_END
};
const uint16_t PROGMEM combo_array_6411135477331246535[] = {
  KC_F, KC_E, COMBO_END
};
combo_t key_combos[COMBO_COUNT] = {
  [combo_event_3635722050819258543] = COMBO_ACTION(combo_array_3635722050819258543),
  [combo_event_1869332572469108580] = COMBO_ACTION(combo_array_1869332572469108580),
  [combo_event_4060120399592134633] = COMBO_ACTION(combo_array_4060120399592134633),
  [combo_event_2631682705235724930] = COMBO_ACTION(combo_array_2631682705235724930),
  [combo_event_2597827877647466371] = COMBO_ACTION(combo_array_2597827877647466371),
  [combo_event_5179501549317328715] = COMBO_ACTION(combo_array_5179501549317328715),
  [combo_event_1677738204539990625] = COMBO_ACTION(combo_array_1677738204539990625),
  [combo_event_6411135477331246535] = COMBO_ACTION(combo_array_6411135477331246535),
  
};
void process_combo_event(uint8_t combo_index, bool pressed) {
  if (layer_state & (1 << CYRILLIC)) {
    switch (combo_index) {
      case combo_event_3635722050819258543: {
        if (pressed) {
  tap_code16(RU_SHCH);

}
return;
}
    case combo_event_1869332572469108580: {
        if (pressed) {
  tap_code16(RU_JU);

}
return;
}
    case combo_event_4060120399592134633: {
        if (pressed) {
  tap_code16(KC_GRAVE);

}
return;
}
    case combo_event_2631682705235724930: {
        if (pressed) {
  tap_code16(RU_SH);

}
return;
}
    case combo_event_2597827877647466371: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}

}

}
 else if (1) {
    switch (combo_index) {
      case combo_event_5179501549317328715: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_1677738204539990625: {
        if (pressed) {
  tap_code16(KC_LCBR);

}
return;
}
    case combo_event_6411135477331246535: {
        if (pressed) {
  tap_code16(KC_RCBR);

}
return;
}

}

}

}
#endif
