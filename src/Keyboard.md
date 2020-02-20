# Keyboard

A keyboard can be divised into two parts: physical and metaphysical. The first one is its real-world implementation: the switches, the caps, wiring, how everything's connected, etc. See [Config.md](Config.md) for the physical part.

Here is configuration for the metaphysical part (ideas and code).

```c
#pragma once
#include "quantum.h"
```

## defconst Layers

![]()

- `LATIN 0`
- `CYRILLIC 1`
- `MOON 2`
  Basic text navigation and numbers.
- `MARS 3`
  Additional layout-independent characters.
- `SUN 4`
  Additional functional keys.
- `MOUSE 5`
  Mouse emulation, obv.

## defmacro LAYOUT

Edit with high attention to details.

- `k30, k31, k32, k33, k34, k35`
- `k20, k21, k22, k23, k24, k25`
- `k10, k11, k12, k13, k14, k15`
- `k03, k04, k05, k00, k01, k02`
- `k36, k37, k38, k39, k3A, k3B`
- `k26, k27, k28, k29, k2A, k2B`
- `k16, k17, k18, k19, k1A, k1B`
- `k09, k0A, k0B, k06, k07, k08`

```c
{ {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B},
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B},
  {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B},
  {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B},
}
```

