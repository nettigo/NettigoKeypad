//Nettigo Keypad library
//Published on MIT licence
// (c) 2011-2013 Nettigo.pl

#ifndef _NG_Keypad_h_
#define _NG_Keypad_h_

#include "Arduino.h"

// Config
#define ANALOG_INPUT 0
#define BOUNCE_TIME 50

// Kews
#define KEY_NONE 0
#define KEY_ONE 1
#define KEY_TWO 2
#define KEY_THREE 3
#define KEY_FOUR 4
#define KEY_FIVE 5



#ifndef NTG_LCD_SHIELD_OLD
//Nettigo keypad values
#define KEY_ONE_VALUE 250
#define KEY_TWO_VALUE 590
#define KEY_THREE_VALUE 720
#define KEY_FOUR_VALUE 795
#define KEY_FIVE_VALUE 900
#define KEY_RIGHT	KEY_ONE
#define KEY_UP		KEY_TWO
#define KEY_DOWN	KEY_THREE
#define KEY_LEFT	KEY_FOUR
#define KEY_SELECT	KEY_FIVE

#else
//LCD shield values
#define KEY_ONE_VALUE 14
#define KEY_TWO_VALUE 58
#define KEY_THREE_VALUE 129
#define KEY_FOUR_VALUE 362
#define KEY_FIVE_VALUE 700
#define KEY_RIGHT	KEY_ONE
#define KEY_UP 		KEY_TWO
#define KEY_DOWN	KEY_THREE
#define KEY_LEFT	KEY_FOUR
#define KEY_SELECT	KEY_FIVE
#endif


byte keypadRead();

#endif
