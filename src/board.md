# Keyboard

A keyboard can be divised into two parts: physical and metaphysical. The first one is its real-world implementation: the switches, the caps, wiring, how everything's connected, etc. See [Config.md](Config.md) for the physical part.

Here is configuration for the metaphysical part (ideas and code).

```c
#pragma once
#include "quantum.h"

#define CUSTOM_SAFE_RANGE END_OF_THIS_WORLD
```

## defconst Layers

- `LATIN 0`
- `LATIN_SHIFT 1`
- `CYRILLIC 2`
- `CYRILLIC_SHIFT 3`
- `MOON 4`
  Basic text navigation and numbers.
- `MARS 5`
  Additional layout-independent characters.
- `SUN 6`
  Additional functional keys.
- `VENUS 7`
  Mouse emulation and weird things.

## enum custom_key

Processing is done in [Keymap.md](Keymap.md).

- `KK_LANG = SAFE_RANGE`
  The one that switches layouts.
- `KK_GUIL`
- `KK_EMOT`
  French quotes «».
- `KK_DTSP`
- `KK_MDSH`
- `M_LGUI`
- `M_LALT_TAB`
- `M_SUN_ESC`
- `M_RGUI`
- `M_RCTL_DEL`
- `M_RCTL_MOON`
- `M_CRINGESHIFT`
- `END_OF_THIS_WORLD`

## defconst Other custom keys but without extra processing

- `M_VENUS MO(VENUS)`
- `M_MARS MO(MARS)`
- `M_MOON MO(MOON)`
- `M_ALT_CMP RALT_T(KC_SLCK)`
- `KK_TPRV LCTL(LSFT(KC_TAB))`
  Previous tab hotkey used in many apps.
- `KK_TNXT LCTL(KC_TAB)`
  Next tab hotkey used in many apps.
- `KK_SASK LGUI(LSFT(KC_5))`
  Run screenshot dialog.
- `KK_SSCN LGUI(LSFT(KC_3))`
  Take picture of whole screen.
- `KK_SWIN LGUI(LSFT(KC_2))`
  Take picture of active window
- `KK_SSEL LGUI(LSFT(KC_4))`
  Select an area of the screen and screenshot.
- `KK_COPY LCTL(KC_INS)`
- `KK_PAST LSFT(KC_INS)`

## defmacro LAYOUT

Edit with high attention to details. The zero-layer keys (thumbclusters) go like this on the left hand: under-ring one, left thumb, home thumb, left choc, right choc, chonky thumblord.

- `k30, k31, k32, k33, k34, k35`
- `k20, k21, k22, k23, k24, k25`
- `k10, k11, k12, k13, k14, k15`
- `k03, k04, k05, k00, k01, k02`
- `k36, k37, k38, k39, k3A, k3B`
- `k26, k27, k28, k29, k2A, k2B`
- `k16, k17, k18, k19, k1A, k1B`
- `k06, k07, k08, k09, k0A, k0B`

```c
{ {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B},
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B},
  {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B},
  {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B},
}
```

## defmacro FINGERS

- `k30, k31, k32, k33, k34, k35`
- `k20, k21, k22, k23, k24, k25`
- `k10, k11, k12, k13, k14, k15`
- `k36, k37, k38, k39, k3A, k3B`
- `k26, k27, k28, k29, k2A, k2B`
- `k16, k17, k18, k19, k1A, k1B`

```c
LAYOUT(
  k30, k31, k32, k33, k34, k35,
  k20, k21, k22, k23, k24, k25,
  k10, k11, k12, k13, k14, k15,
  M_LGUI, M_LALT_TAB, M_CRINGESHIFT,
  M_VENUS, M_MARS, M_SUN_ESC,
  k36, k37, k38, k39, k3A, k3B,
  k26, k27, k28, k29, k2A, k2B,
  k16, k17, k18, k19, k1A, k1B,
  KC_SPC, M_RCTL_DEL, M_ALT_CMP,
  M_MOON, M_RGUI, M_RCTL_MOON
)
```

