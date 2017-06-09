#ifndef REV1_H
#define REV1_H

#include "../generic_split.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define KEYMAP( \
	L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44, L45, R40, R41, R42, R43, R44, R45 \
	) \
	{ \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L00, L01, L02, L03, L04, L05 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L10, L11, L12, L13, L14, L15 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L20, L21, L22, L23, L24, L25 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L30, L31, L32, L33, L34, L35 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L40, L41, L42, L43, L44, L45 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R05, R04, R03, R02, R01, R00 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R15, R14, R13, R12, R11, R10 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R25, R24, R23, R22, R21, R20 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R35, R34, R33, R32, R31, R30 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R45, R44, R43, R42, R41, R40 } \
	}
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define KEYMAP( \
	L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44, L45, R40, R41, R42, R43, R44, R45 \
	) \
	{ \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L00, L01, L02, L03, L04, L05 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L10, L11, L12, L13, L14, L15 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L20, L21, L22, L23, L24, L25 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L30, L31, L32, L33, L34, L35 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, L40, L41, L42, L43, L44, L45 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R00, R01, R02, R03, R04, R05 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R10, R11, R12, R13, R14, R15 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R20, R21, R22, R23, R24, R25 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R30, R31, R32, R33, R34, R35 }, \
		{ KC_NO, KC_NO, KC_NO, KC_NO, R40, R41, R42, R43, R44, R45 } \
	}
#endif

#endif
