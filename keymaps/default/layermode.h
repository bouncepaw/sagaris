/* Altered version */
#ifndef KLAVAROG_LAYERMODE
#define KLAVAROG_LAYERMODE
#define KEYTIMER(name) static uint16_t timer_##name
#define KEYMATCH(ck, layers_off, layers_on, kc_on_hold, kc_on_tap)\
case ck:\
  layermode_router(ck, &timer_##ck, record, layers_off, layers_on, kc_on_hold, kc_on_tap);\
  return false
void
layermode_router (
    enum custom_key ck, uint16_t * timer, keyrecord_t * record,
    layer_state_t layers_off, layer_state_t layers_on,
    uint16_t kc_on_hold, uint16_t kc_on_tap)
{
  static uint8_t keys_pressed = 0;
  static layer_state_t prev_layer_state = 0;
  static uint16_t prev_mods = 0;
  if (0 == keys_pressed)
    {
      prev_layer_state = layer_state;
      prev_mods = get_mods ();
    }
  if (record->event.pressed)
    {
      *timer = timer_read ();
      keys_pressed++;
      register_code16(kc_on_hold);
      layer_and(~layers_off);
      layer_or(layers_on);
    }
  else
    {
      unregister_code16(kc_on_hold);
      keys_pressed--;
#ifdef LAYERMODE_TAP
      if (timer_elapsed (*timer) < LAYERMODE_TAP)
#else
      if (timer_elapsed (*timer) < 300)
#endif
	tap_code16 (kc_on_tap);
    }
  if (0 == keys_pressed)
    {
      layer_state = prev_layer_state;
      set_mods (prev_mods);
    }
}
#endif
