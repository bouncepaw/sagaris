#ifndef KLAVAROG_CHORDGEN
#define KLAVAROG_CHORDGEN
enum combo_events {
  combo_event_6520682086739457858, //tap_code16(RU_SHCH);
  combo_event_2455770768751311551, //tap_code16(RU_JU);
  combo_event_2114637924840119279, //tap_code16(KC_GRAVE);
  combo_event_4643176359876124645, //tap_code16(RU_SH);
  combo_event_2541380556355484790, //tap_code16(RU_JO);
  combo_event_3759336099767838422, //tap_code16(KC_UNDS);
  combo_event_4163067225626669251, //tap_code16(KC_UNDS);
  
};
const uint16_t PROGMEM combo_array_6520682086739457858[] = {
  RU_SOFT, RU_JA, COMBO_END
};
const uint16_t PROGMEM combo_array_2455770768751311551[] = {
  RU_JA, RU_U, COMBO_END
};
const uint16_t PROGMEM combo_array_2114637924840119279[] = {
  RU_A, RU_Y, COMBO_END
};
const uint16_t PROGMEM combo_array_4643176359876124645[] = {
  RU_Z, RU_M, COMBO_END
};
const uint16_t PROGMEM combo_array_2541380556355484790[] = {
  RU_F, RU_TS, COMBO_END
};
const uint16_t PROGMEM combo_array_3759336099767838422[] = {
  RU_JE, RU_O, RU_I, COMBO_END
};
const uint16_t PROGMEM combo_array_4163067225626669251[] = {
  KC_E, KC_O, KC_I, COMBO_END
};
combo_t key_combos[COMBO_COUNT] = {
  [combo_event_6520682086739457858] = COMBO_ACTION(combo_array_6520682086739457858),
  [combo_event_2455770768751311551] = COMBO_ACTION(combo_array_2455770768751311551),
  [combo_event_2114637924840119279] = COMBO_ACTION(combo_array_2114637924840119279),
  [combo_event_4643176359876124645] = COMBO_ACTION(combo_array_4643176359876124645),
  [combo_event_2541380556355484790] = COMBO_ACTION(combo_array_2541380556355484790),
  [combo_event_3759336099767838422] = COMBO_ACTION(combo_array_3759336099767838422),
  [combo_event_4163067225626669251] = COMBO_ACTION(combo_array_4163067225626669251),
  
};
void process_combo_event(uint8_t combo_index, bool pressed) {
  if (layer_state & (1 << CYRILLIC)) {
    switch (combo_index) {
      case combo_event_6520682086739457858: {
        if (pressed) {
  tap_code16(RU_SHCH);

}
return;
}
    case combo_event_2455770768751311551: {
        if (pressed) {
  tap_code16(RU_JU);

}
return;
}
    case combo_event_2114637924840119279: {
        if (pressed) {
  tap_code16(KC_GRAVE);

}
return;
}
    case combo_event_4643176359876124645: {
        if (pressed) {
  tap_code16(RU_SH);

}
return;
}
    case combo_event_2541380556355484790: {
        if (pressed) {
  tap_code16(RU_JO);

}
return;
}
    case combo_event_3759336099767838422: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}

}

}
 else if (1) {
    switch (combo_index) {
      case combo_event_4163067225626669251: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}

}

}

}
#endif
