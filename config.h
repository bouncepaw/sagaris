#ifndef CONFIG_H
#define CONFIG_H
#include "config_common.h"
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0xBEF0
#define DEVICE_VER 0
#define MANUFACTURER Bouncepaw
#define PRODUCT Sagaris
#define DESCRIPTION Ergonomic semichorded split keyboard
#define MATRIX_ROWS 4
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { F5, B6, B2, B5 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6,  B4, B3, B1, F4, F7, F6 }
#define DIODE_DIRECTION COL2ROW
#define TAPPING_TERM 150
#define DEBOUNCING_DELAY 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define COMBO_COUNT 7
#endif
