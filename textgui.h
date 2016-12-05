/*
 *  Text GUI elements
 *
 *  Copyright (C) 2016
 *    Sandor Zsuga (Jubatian)
 *  Uzem (the base of CUzeBox) is copyright (C)
 *    David Etherton,
 *    Eric Anderton,
 *    Alec Bourque (Uze),
 *    Filipe Rinaldi,
 *    Sandor Zsuga (Jubatian),
 *    Matt Pandina (Artcfox)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



#ifndef TEXTGUI_H
#define TEXTGUI_H



#include "types.h"


/* Maximal size of strings including terminating zero if any (not required) */
#define TEXTGUI_STR_MAX 26U


/*
** Text GUI element value structure: this contains the values which should
** be displayed by various text components.
*/
typedef struct{
 auint cpufreq;         /* CPU operational frequency, Hz */
 auint aufreq;          /* Audio frequency, Hz */
 auint dispfreq;        /* Display update frequency, 1/1000th Hz */
 boole kbuzem;          /* Keymap state, TRUE: Uzem controller keymapping */
 boole merge;           /* Frame merging state, TRUE: Frame merging active */
 boole capture;         /* Video capture, TRUE: Capture in progress */
 uint8 game[TEXTGUI_STR_MAX]; /* Game name */
 uint8 auth[TEXTGUI_STR_MAX]; /* Game author */
}textgui_struct_t;



/*
** Redraws text GUI elements
*/
void textgui_draw(void);


/*
** Returns a pointer to the text GUI elements, can be used to update them for
** a later textgui_draw() call.
*/
textgui_struct_t* textgui_getelementptr(void);


/*
** Resets text GUI element values.
*/
void textgui_reset(void);


#endif
