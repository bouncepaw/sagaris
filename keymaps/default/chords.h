#ifndef KLAVAROG_CHORDGEN
#define KLAVAROG_CHORDGEN
enum combo_events {
  combo_event_3296280244104932357, //tap_code16(RU_SHCH);
  combo_event_2906466214886324572, //tap_code16(RU_JU);
  combo_event_4250217083255976522, //tap_code16(KC_GRAVE);
  combo_event_6842580542927239802, //tap_code16(RU_SH);
  combo_event_4949924079818340136, //tap_code16(KC_UNDS);
  combo_event_3023742482167573862, //tap_code16(KC_UNDS);
  combo_event_1161442351491608332, //tap_code16(KC_LCBR);
  combo_event_4802480844219420277, //tap_code16(KC_RCBR);
  
};
const uint16_t PROGMEM combo_array_3296280244104932357[] = {
  RU_SOFT, RU_JA, COMBO_END
};
const uint16_t PROGMEM combo_array_2906466214886324572[] = {
  RU_JA, RU_U, COMBO_END
};
const uint16_t PROGMEM combo_array_4250217083255976522[] = {
  RU_A, RU_Y, COMBO_END
};
const uint16_t PROGMEM combo_array_6842580542927239802[] = {
  RU_Z, RU_M, COMBO_END
};
const uint16_t PROGMEM combo_array_4949924079818340136[] = {
  RU_JE, RU_O, RU_I, COMBO_END
};
const uint16_t PROGMEM combo_array_3023742482167573862[] = {
  KC_E, KC_O, KC_I, COMBO_END
};
const uint16_t PROGMEM combo_array_1161442351491608332[] = {
  KC_H, KC_N, COMBO_END
};
const uint16_t PROGMEM combo_array_4802480844219420277[] = {
  KC_F, KC_E, COMBO_END
};
combo_t key_combos[COMBO_COUNT] = {
  [combo_event_3296280244104932357] = COMBO_ACTION(combo_array_3296280244104932357),
  [combo_event_2906466214886324572] = COMBO_ACTION(combo_array_2906466214886324572),
  [combo_event_4250217083255976522] = COMBO_ACTION(combo_array_4250217083255976522),
  [combo_event_6842580542927239802] = COMBO_ACTION(combo_array_6842580542927239802),
  [combo_event_4949924079818340136] = COMBO_ACTION(combo_array_4949924079818340136),
  [combo_event_3023742482167573862] = COMBO_ACTION(combo_array_3023742482167573862),
  [combo_event_1161442351491608332] = COMBO_ACTION(combo_array_1161442351491608332),
  [combo_event_4802480844219420277] = COMBO_ACTION(combo_array_4802480844219420277),
  
};
void process_combo_event(uint8_t combo_index, bool pressed) {
  if (layer_state & (1 << CYRILLIC)) {
    switch (combo_index) {
      case combo_event_3296280244104932357: {
        if (pressed) {
  tap_code16(RU_SHCH);

}
return;
}
    case combo_event_2906466214886324572: {
        if (pressed) {
  tap_code16(RU_JU);

}
return;
}
    case combo_event_4250217083255976522: {
        if (pressed) {
  tap_code16(KC_GRAVE);

}
return;
}
    case combo_event_6842580542927239802: {
        if (pressed) {
  tap_code16(RU_SH);

}
return;
}
    case combo_event_4949924079818340136: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}

}

}
 else if (1) {
    switch (combo_index) {
      case combo_event_3023742482167573862: {
        if (pressed) {
  tap_code16(KC_UNDS);

}
return;
}
    case combo_event_1161442351491608332: {
        if (pressed) {
  tap_code16(KC_LCBR);

}
return;
}
    case combo_event_4802480844219420277: {
        if (pressed) {
  tap_code16(KC_RCBR);

}
return;
}

}

}

}
#endif
