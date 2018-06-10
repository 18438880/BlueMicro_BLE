/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#ifndef KEYMAP_H
#define KEYMAP_H



#define KEYMAP( \
	 K00,   K01,   K02,   K03,   K04,   K05,   K10,   K11,   K12,   K13 , \
	 K14,   K15,   K20,   K21,   K22,   K23,   K24,   K25,   K30,   K31 , \
	 K32,   K33,   K34,   K35,   K40,   K41,   K42,   K43,   K44,   K45   \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45 }  \
}



#define _QWERTY 0
#define _L1  1
#define _L2  2
#define _L3  3


const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT ),


[_L1]  = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT ),


[_L2] = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT ),


[_L3] = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT )
};

#endif
