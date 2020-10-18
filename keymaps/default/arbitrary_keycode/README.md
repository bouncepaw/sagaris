# Возможность нажимать любой кейкод

В QMK имеются функции только для нажатия кейкодов вида `KC_A`, но нету возможности "нажать" более сложный кейкод, например: `MO(4)`. Специально для устранения этого недостатка и создан этот модуль, он позволяет вам с минимальными усилиями "нажимать" любой кейкод. Может пригодиться если вы делаете нестандартное расширение для QMK, и вы не особо заботитесь о том насколько красив код внутри QMK, вам лишь важно чтобы оно работало у вас.

# Применение

```c
press_arbitrary_keycode(MO(4), true);
```

Где кейкод - `MO(4)`, а `true` означает что клавиша будет зажата, `false` будет означать что она отпущена. Сигнатуру и реализацию можно посмотреть в файле `include.h`.

# Использование

## Подключить библиотеку

```c
#include "arbitrary_keycode/include.h"
```

## Модифицировать код QMK

```diff
diff --git a/quantum/keymap_common.c b/quantum/keymap_common.c
index 570d4798d..a3536ce16 100644
--- a/quantum/keymap_common.c
+++ b/quantum/keymap_common.c
@@ -179,7 +179,11 @@ __attribute__((weak)) void action_function(keyrecord_t *record, uint8_t id, uint
 // translates key to keycode
 __attribute__((weak)) uint16_t keymap_key_to_keycode(uint8_t layer, keypos_t key) {
     // Read entire word (16bits)
-    return pgm_read_word(&keymaps[(layer)][(key.row)][(key.col)]);
+    if (key.use_custom_keycode) {
+        return key.custom_keycode;
+    } else {
+        return pgm_read_word(&keymaps[(layer)][(key.row)][(key.col)]);
+    }
 }
 
 // translates function id to action
diff --git a/tmk_core/common/keyboard.h b/tmk_core/common/keyboard.h
index ff7736718..59ff1c893 100644
--- a/tmk_core/common/keyboard.h
+++ b/tmk_core/common/keyboard.h
@@ -29,6 +29,8 @@ extern "C" {
 typedef struct {
     uint8_t col;
     uint8_t row;
+    bool use_custom_keycode;
+    uint16_t custom_keycode;
 } keypos_t;
 
 /* key event */
```
