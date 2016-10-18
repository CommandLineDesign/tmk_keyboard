/*
 * HHKB JP Layout - CLD
 */
#include "keymap_common.h"

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer */
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS ,EQL, GRV, BSPC, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  LBRC, RBRC, \
              FN3,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,  UP,  FN0, \
              FN4, LCTL,LGUI,LALT,FN0,     FN1,      FN2,KANA,RALT,FN12, LEFT,DOWN,RGHT),
    /* Layer 1: OSX Layer */
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              FN3,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              FN7,LGUI,LCTL,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* Layer 2: Game Layer */
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              LCTL,LCTL,TRNS,TRNS,TRNS,     SPC,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* Layer 3: Switch Layer */
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN10,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS, TRNS,TRNS,TRNS,TRNS,FN11,TRNS),
    /* Layer 4: Arrow and HHKB Layer */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,BSPC,UP,DEL,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,LEFT,DOWN,RIGHT,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,VOLD,MUTE,VOLU,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* Layer 5: Nav Layer */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,BSPC,PGUP,DEL,TRNS,TRNS,TRNS,QUOT,MINS,EQL,TRNS,TRNS,TRNS, \
              TRNS,HOME,PGDN,END,TRNS,TRNS,TRNS,LBRC,RBRC,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* Layer 6: Windows Layer */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,BSPC,PGUP,DEL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,FN5,PGDN,FN6,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* Layer 7: OSX Layer */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,BSPC,PGUP,DEL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,FN8,PGDN,FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};
/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(4), // Arrow and HHKB Layer
    [1] = ACTION_LAYER_TAP_KEY(4, KC_SPC), // Arrow and HHKB Layer with space (spaceFn)
    [2] = ACTION_LAYER_MOMENTARY(5), // Nav Layer
    [3] = ACTION_LAYER_TAP_KEY(5, KC_ENT), // Nav Layer with Enter on tap
    [4] = ACTION_LAYER_MOMENTARY(6), // Windows Layer Fns
    [5] = ACTION_MODS_KEY(MOD_LCTL, KC_LEFT),
    [6] = ACTION_MODS_KEY(MOD_LCTL, KC_RIGHT),
    [7] = ACTION_LAYER_MOMENTARY(7), // OSX Layer Fns
    [8] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),
    [9] = ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),
    [10] = ACTION_LAYER_TOGGLE(1), // Toggle OSX Layer
    [11] = ACTION_LAYER_TOGGLE(2), // Toggle Game Layer
    [12] = ACTION_LAYER_MOMENTARY(3), // Switch Layer
};
