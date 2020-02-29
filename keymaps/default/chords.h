#ifndef KLAVAROG_CHORDGEN
#define KLAVAROG_CHORDGEN
enum combo_events {
  combo_event_8138344561115434341, //tap_code16(RU_SHCH);
  combo_event_4178515284213873733, //tap_code16(RU_JU);
  combo_event_6738338680210479001, //tap_code16(KC_GRAVE);
  combo_event_4858290360132765887, //tap_code16(RU_SH);
  combo_event_4629810008586955458, //tap_code16(RU_JO);
  combo_event_2435996559551743099, //tap_code16(KC_UNDS);
  combo_event_7464870379353719585, //tap_code16(KC_LCBR);
  combo_event_6293806798428736719, //tap_code16(KC_RCBR);
  combo_event_5098994651652686727, //tap_code16(KC_UNDS);
  combo_event_7144068384677023532, //tap_code16(KC_LCBR);
  combo_event_6621091604123896652, //tap_code16(KC_RCBR);
  
};
const uint16_t PROGMEM combo_array_8138344561115434341[] = {
  RU_SOFT, RU_JA, COMBO_END
};
const uint16_t PROGMEM combo_array_4178515284213873733[] = {
  RU_JA, RU_U, COMBO_END
};
const uint16_t PROGMEM combo_array_6738338680210479001[] = {
  RU_A, RU_Y, COMBO_END
};
const uint16_t PROGMEM combo_array_4858290360132765887[] = {
  RU_Z, RU_M, COMBO_END
};
const uint16_t PROGMEM combo_array_4629810008586955458[] = {
  RU_F, RU_TS, COMBO_END
};
const uint16_t PROGMEM combo_array_2435996559551743099[] = {
  RU_JE, RU_O, RU_I, COMBO_END
};
const uint16_t PROGMEM combo_array_7464870379353719585[] = {
  RU_D, RU_N, COMBO_END
};
const uint16_t PROGMEM combo_array_6293806798428736719[] = {
  RU_SOFT, RU_JE, COMBO_END
};
const uint16_t PROGMEM combo_array_5098994651652686727[] = {
  KC_E, KC_O, KC_I, COMBO_END
};
const uint16_t PROGMEM combo_array_7144068384677023532[] = {
  KC_D, KC_N, COMBO_END
};
const uint16_t PROGMEM combo_array_6621091604123896652[] = {
  KC_F, KC_E, COMBO_END
};
combo_t key_combos[COMBO_COUNT] = {
  [combo_event_8138344561115434341] = COMBO_ACTION(combo_array_8138344561115434341),
  [combo_event_4178515284213873733] = COMBO_ACTION(combo_array_4178515284213873733),
  [combo_event_6738338680210479001] = COMBO_ACTION(combo_array_6738338680210479001),
  [combo_event_4858290360132765887] = COMBO_ACTION(combo_array_4858290360132765887),
  [combo_event_4629810008586955458] = COMBO_ACTION(combo_array_4629810008586955458),
  [combo_event_2435996559551743099] = COMBO_ACTION(combo_array_2435996559551743099),
  [combo_event_7464870379353719585] = COMBO_ACTION(combo_array_7464870379353719585),
  [combo_event_6293806798428736719] = COMBO_ACTION(combo_array_6293806798428736719),
  [combo_event_5098994651652686727] = COMBO_ACTION(combo_array_5098994651652686727),
  [combo_event_7144068384677023532] = COMBO_ACTION(combo_array_7144068384677023532),
  [combo_event_6621091604123896652] = COMBO_ACTION(combo_array_6621091604123896652),
  
};
void process_combo_event(uint8_t combo_index, bool pressed) {
  if (layer_state & (1 << CYRILLIC)) {
    switch (combo_index) {
      case combo_event_8138344561115434341: {
        if (pressed) {
  tap_code16(RU_SHCH);

}
return;
}
    case combo_event_4178515284213873733: {
        if (pressed) {
  tap_code16(RU_JU);

}
return;
}
    case combo_event_6738338680210479001: {
        if (pressed) {
  tap_code16(KC_GRAVE);

}
return;
}
    case combo_event_4858290360132765887: {
        if (pressed) {
  tap_code16(RU_SH);

}
return;
}
    case combo_event_4629810008586955458: {
        if (pressed) {
  tap_code16(RU_JO);

}
return;
}
    case combo_event_2435996559551743099: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_7464870379353719585: {
        if (pressed) {
  tap_code16(KC_LCBR);

}
return;
}
    case combo_event_6293806798428736719: {
        if (pressed) {
  tap_code16(KC_RCBR);

}
return;
}

}

}
 else if (1) {
    switch (combo_index) {
      case combo_event_5098994651652686727: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_7144068384677023532: {
        if (pressed) {
  tap_code16(KC_LCBR);

}
return;
}
    case combo_event_6621091604123896652: {
        if (pressed) {
  tap_code16(KC_RCBR);

}
return;
}

}

}

}
#endif
