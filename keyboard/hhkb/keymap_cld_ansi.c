/*
 * HHKB ANSI Layout - CLD
 */
#include "keymap_common.h"

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer (LGUI and Alt swapped, SpaceFn)
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|Del|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  Bsp|
     * |-----------------------------------------------------------|
     * |Ctrl |  A|  S|  D|  F|  G|  H|  J|  K|  L| ; |  '| Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| / |Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Fn1           |Fn2  |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,DEL, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT, \
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, PSLS, RSFT,FN0, \
                LGUI,LALT,          FN1,                FN2, RGUI),
    /* Layer 1: OSX mode (Swap LCTRL and LGUI)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |  LGUI|   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |CTL|     |                       |     |   |
     *       `-------------------------------------------'
     */ 
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
           LGUI,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                LCTL,TRNS,          TRNS,                TRNS, TRNS),
    /* Layer 2: Game Mode (Disable SpaceFn) 
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |            SPC        |     |   |
     *       `-------------------------------------------'
     */ 
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,          SPC,                TRNS, TRNS),
    /* Layer 3: Nav Layer 
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |Bsp|PUp|Del|   |   |   |   |   |   |Bsp|PUp|Del|     |
     * |-----------------------------------------------------------|
     * |      |End|PDn|Hom|   |   |   |   |   |   |Hom|End|        |
     * |-----------------------------------------------------------|
     * |        |VDn|Mut|VUp|   |   |   |   |   |   |PDn|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |            Game       |     |Mac|
     *       `-------------------------------------------'
     */ 
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,BSPC,PGUP,DEL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
           TRNS,HOME,PGDN,END,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,VOLD,MUTE,VOLU,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,          FN3,                TRNS, FN4),
    /* Layer 4: Arrow and HHKB Layer (brackets on j and k)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |Bsp| Up|Del|   |   | ( | ) |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|Lef|Dow|Rig|   |   | [ | ] |Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |VDn|Mut|VUp|   |   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
    */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,BSPC,UP,DEL,TRNS,TRNS,FN5,FN6,PSCR,SLCK,PAUS, UP,  TRNS,  BSPC, \
           TRNS,LEFT,DOWN,RIGHT,TRNS,TRNS,LBRC,RBRC,HOME,PGUP,LEFT,RGHT,ENT, \
           TRNS,VOLD,MUTE,VOLU,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                TRNS,TRNS,          TRNS,                TRNS, TRNS)
};
/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(4), // Arrow and HHKB Layer (on hold)
    [1] = ACTION_LAYER_TAP_KEY(4, KC_SPC), // Arrow and HHKB Layer with space (spaceFn)
    [2] = ACTION_LAYER_MOMENTARY(3), // Nav Layer
    [3] = ACTION_LAYER_TOGGLE(1), // Toggle Game Layer
    [4] = ACTION_LAYER_TOGGLE(2), // Toggle OSX Layer
    [5] = ACTION_MODS_KEY(MOD_LSFT, 9),
    [6] = ACTION_MODS_KEY(MOD_LSFT, 0)
};
