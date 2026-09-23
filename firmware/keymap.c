// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_G,    KC_W,    KC_R,
        KC_A,    KC_S,    KC_D,
        KC_LSFT, KC_CAPS, KC_LCTL
    )
};
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_ln_P(PSTR("brokiepad"), false);
    oled_write_ln_P(PSTR("brokie.3d"), false);
    return false;
}
#endif
