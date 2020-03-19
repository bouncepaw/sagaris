# Configuration

```c
#ifndef CONFIG_H
#define CONFIG_H
#include "config_common.h"
```

## defconst

- `VENDOR_ID 0xFEED`
  The same as in Sequira and everywhere else. Classic.
- `PRODUCT_ID 0xBEF0`
  One higher than in Sequira.
- `DEVICE_VER 0`
- `MANUFACTURER Bouncepaw`
- `PRODUCT Sagaris`
- `DESCRIPTION Ergonomic semichorded split keyboard`
- `MATRIX_ROWS 4`
- `MATRIX_COLS 12`
  Cols and rows will be played around in `LAYOUT` macros.
- `MATRIX_ROW_PINS { F5, B6, B2, B5 }`
- `MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6,  B4, B3, B1, F4, F7, F6 }`
  See Pro Micro's pinout:
  ![Pro Micro pinout]()
- `DIODE_DIRECTION COL2ROW`
  Found out through experimental way.
- `TAPPING_TERM 140`
- `DEBOUNCING_DELAY 5`
- `LOCKING_SUPPORT_ENABLE`
- `LOCKING_RESYNC_ENABLE`
- `COMBO_ALLOW_ACTION_KEYS`
- `COMBO_COUNT 8`
  To be added later.

## P.S.

```
#endif
```
