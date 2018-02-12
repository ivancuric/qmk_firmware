// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "satan.h"

// increase readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP_ISO_SPLITRSHIFT(
  KC_ESC  , KC_1    , KC_2    , KC_3   , KC_4    , KC_5    , KC_6    , KC_7     , KC_8 , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , \
  KC_TAB  , KC_Q    , KC_W    , KC_E   , KC_R    , KC_T    , KC_Y    , KC_U     , KC_I , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS , \
  MO(2)   , KC_A    , KC_S    , KC_D   , KC_F    , KC_G    , KC_H    , KC_J     , KC_K , KC_L    , KC_SCLN , KC_QUOT , KC_BSLS , KC_ENT  , \
  KC_LSFT , KC_GRV  , KC_Z    , KC_X   , KC_C    , KC_V    , KC_B    , KC_N     , KC_M , KC_COMM , KC_DOT  , KC_SLSH , KC_UP   , MO(3)   , \
  KC_LCTL , KC_LGUI , KC_LALT , KC_SPC , KC_RALT , KC_LEFT , KC_DOWN , KC_RGHT) ,

	KEYMAP_ISO_SPLITRSHIFT(
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______ , _______ , \
  _______ , KC_LALT , KC_LGUI , _______ , _______ , _______ , _______ , _______) ,

	KEYMAP_ISO_SPLITRSHIFT(
  RESET   , KC_F1   , KC_F2       , KC_F3         , KC_F4   , KC_F5   , KC_F6   , KC_F7    , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12     , KC_DEL  , \
  _______ , KC_MPRV , KC_MPLY     , KC_MNXT       , _______ , _______ , _______ , _______  , KC_UP   , _______ , _______ , _______ , KC_PSCREEN , _______ , \
  _______ , _______ , KC_VOLD     , KC_VOLU       , KC_MUTE , _______ , _______ , KC_LEFT  , KC_DOWN , KC_RGHT , _______ , _______ , _______    , _______ , \
  _______ , _______ , _______     , _______       , _______ , _______ , _______ , _______  , _______ , _______ , _______ , _______ , _______    , _______ , \
  _______ , _______ , KC_MS_WH_UP , KC_MS_WH_DOWN , _______ , _______ , _______ , _______) ,

	KEYMAP_ISO_SPLITRSHIFT(
  KC_PWR   , _______  , _______  , _______  , _______  , _______  , _______  , _______   , _______  , _______  , _______  , _______  , _______  , _______  , \
  _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______   , _______  , _______  , _______  , _______  , _______  , _______  , \
  _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______   , _______  , _______  , BL_DEC   , BL_TOGG  , BL_INC   , _______  , \
  _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______   , _______  , _______  , DF(0)    , DF(1)    , _______  , _______  , \
  _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______)  ,
};
