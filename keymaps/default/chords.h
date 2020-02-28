#ifndef KLAVAROG_CHORDGEN
#define KLAVAROG_CHORDGEN
enum combo_events {
  combo_event_7221106290368032118, //tap_code16(RU_SHCH);
  combo_event_5262084835235689220, //tap_code16(RU_JU);
  combo_event_4866074708772856744, //tap_code16(KC_GRAVE);
  combo_event_5182942735034104428, //tap_code16(RU_SH);
  combo_event_4254755315356570871, //tap_code16(RU_JO);
  combo_event_4625029284480707723, //tap_code16(KC_UNDS);
  combo_event_6056952580134243859, //tap_code16(KK_LCBR);
  combo_event_4456766911489843082, //tap_code16(KK_RCBR);
  combo_event_5422050067313524820, //tap_code16(KC_UNDS);
  combo_event_6934737794895982308, //tap_code16(KK_LCBR);
  combo_event_2097007959599295537, //tap_code16(KK_RCBR);
  
};
const uint16_t PROGMEM combo_array_7221106290368032118[] = {
  RU_SOFT, RU_JA, COMBO_END
};
const uint16_t PROGMEM combo_array_5262084835235689220[] = {
  RU_JA, RU_U, COMBO_END
};
const uint16_t PROGMEM combo_array_4866074708772856744[] = {
  RU_A, RU_Y, COMBO_END
};
const uint16_t PROGMEM combo_array_5182942735034104428[] = {
  RU_Z, RU_M, COMBO_END
};
const uint16_t PROGMEM combo_array_4254755315356570871[] = {
  RU_F, RU_TS, COMBO_END
};
const uint16_t PROGMEM combo_array_4625029284480707723[] = {
  RU_JE, RU_O, RU_I, COMBO_END
};
const uint16_t PROGMEM combo_array_6056952580134243859[] = {
  RU_D, RU_N, COMBO_END
};
const uint16_t PROGMEM combo_array_4456766911489843082[] = {
  RU_SOFT, RU_JE, COMBO_END
};
const uint16_t PROGMEM combo_array_5422050067313524820[] = {
  KC_E, KC_O, KC_I, COMBO_END
};
const uint16_t PROGMEM combo_array_6934737794895982308[] = {
  KC_D, KC_N, COMBO_END
};
const uint16_t PROGMEM combo_array_2097007959599295537[] = {
  KC_F, KC_E, COMBO_END
};
combo_t key_combos[COMBO_COUNT] = {
  [combo_event_7221106290368032118] = COMBO_ACTION(combo_array_7221106290368032118),
  [combo_event_5262084835235689220] = COMBO_ACTION(combo_array_5262084835235689220),
  [combo_event_4866074708772856744] = COMBO_ACTION(combo_array_4866074708772856744),
  [combo_event_5182942735034104428] = COMBO_ACTION(combo_array_5182942735034104428),
  [combo_event_4254755315356570871] = COMBO_ACTION(combo_array_4254755315356570871),
  [combo_event_4625029284480707723] = COMBO_ACTION(combo_array_4625029284480707723),
  [combo_event_6056952580134243859] = COMBO_ACTION(combo_array_6056952580134243859),
  [combo_event_4456766911489843082] = COMBO_ACTION(combo_array_4456766911489843082),
  [combo_event_5422050067313524820] = COMBO_ACTION(combo_array_5422050067313524820),
  [combo_event_6934737794895982308] = COMBO_ACTION(combo_array_6934737794895982308),
  [combo_event_2097007959599295537] = COMBO_ACTION(combo_array_2097007959599295537),
  
};
void process_combo_event(uint8_t combo_index, bool pressed) {
  if (layer_state & (1 << CYRILLIC)) {
    switch (combo_index) {
      case combo_event_7221106290368032118: {
        if (pressed) {
  tap_code16(RU_SHCH);

}
return;
}
    case combo_event_5262084835235689220: {
        if (pressed) {
  tap_code16(RU_JU);

}
return;
}
    case combo_event_4866074708772856744: {
        if (pressed) {
  tap_code16(KC_GRAVE);

}
return;
}
    case combo_event_5182942735034104428: {
        if (pressed) {
  tap_code16(RU_SH);

}
return;
}
    case combo_event_4254755315356570871: {
        if (pressed) {
  tap_code16(RU_JO);

}
return;
}
    case combo_event_4625029284480707723: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_6056952580134243859: {
        if (pressed) {
  tap_code16(KK_LCBR);

}
return;
}
    case combo_event_4456766911489843082: {
        if (pressed) {
  tap_code16(KK_RCBR);

}
return;
}

}

}
 else if (1) {
    switch (combo_index) {
      case combo_event_5422050067313524820: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_6934737794895982308: {
        if (pressed) {
  tap_code16(KK_LCBR);

}
return;
}
    case combo_event_2097007959599295537: {
        if (pressed) {
  tap_code16(KK_RCBR);

}
return;
}

}

}

}
#endif
