#pragma once
#include "quantum.h"

#define CUSTOM_SAFE_RANGE END_OF_THIS_WORLD
#define LATIN 0
#define LATIN_SHIFT 1
#define CYRILLIC 2
#define CYRILLIC_SHIFT 3
#define MOON 4
#define MARS 5
#define SUN 6
#define VENUS 7
enum custom_key {
    KK_LANG = SAFE_RANGE,
    KK_GUIL,
    KK_EMOT,
    KK_DTSP,
    KK_MDSH,
    M_LGUI,
    M_LALT_TAB,
    M_SUN_ESC,
    M_RGUI,
    M_RCTL_DEL,
    M_RCTL_MOON,
    M_CRINGESHIFT,
    END_OF_THIS_WORLD
} ;
#define M_VENUS MO(VENUS)
#define M_MARS MO(MARS)
#define M_MOON MO(MOON)
#define M_ALT_CMP RALT_T(KC_SLCK)
#define KK_TPRV LCTL(LSFT(KC_TAB))
#define KK_TNXT LCTL(KC_TAB)
#define KK_SASK LGUI(LSFT(KC_5))
#define KK_SSCN LGUI(LSFT(KC_3))
#define KK_SWIN LGUI(LSFT(KC_2))
#define KK_SSEL LGUI(LSFT(KC_4))
#define KK_COPY LCTL(KC_INS)
#define KK_PAST LSFT(KC_INS)
#define LAYOUT(k30, k31, k32, k33, k34, k35, k20, k21, k22, k23, k24, k25, k10, k11, k12, k13, k14, k15, k03, k04, k05, k00, k01, k02, k36, k37, k38, k39, k3A, k3B, k26, k27, k28, k29, k2A, k2B, k16, k17, k18, k19, k1A, k1B, k06, k07, k08, k09, k0A, k0B)\
{ {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B},\
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B},\
  {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B},\
  {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B},\
}
#define FINGERS(k30, k31, k32, k33, k34, k35, k20, k21, k22, k23, k24, k25, k10, k11, k12, k13, k14, k15, k36, k37, k38, k39, k3A, k3B, k26, k27, k28, k29, k2A, k2B, k16, k17, k18, k19, k1A, k1B)\
LAYOUT(\
  k30, k31, k32, k33, k34, k35,\
  k20, k21, k22, k23, k24, k25,\
  k10, k11, k12, k13, k14, k15,\
  M_LGUI, M_LALT_TAB, M_CRINGESHIFT,\
  M_VENUS, M_MARS, M_SUN_ESC,\
  k36, k37, k38, k39, k3A, k3B,\
  k26, k27, k28, k29, k2A, k2B,\
  k16, k17, k18, k19, k1A, k1B,\
  KC_SPC, M_RCTL_DEL, M_ALT_CMP,\
  M_MOON, M_RGUI, M_RCTL_MOON\
)
