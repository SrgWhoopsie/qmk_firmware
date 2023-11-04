/* Copyright 2020 imchipwood
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "quantum.h"
#define ___ KC_NO

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/* Dumbpad numpad matrix layout
   * ,------------------------.
   * |    | 01 | 02 | 03 | 04 |
   * |----|----|----|----|----|
   * |    | 11 | 12 | 13 | 14 |
   * |----|----|----|----|----|
   * |    | 21 | 22 | 23 | 24 |
   * |----|----|----|----|----|
   * | 30 | 31 | 32 | 33 | 34 |
   * `------------------------'
 */

#define LAYOUT( \
	       k01, k02, k03, k04, \
	       k11, k12, k13, k14, \
	       k21, k22, k23, k24, \
	  k30, k31, k32, k33, k34 \
) \
{ \
    { ___, k01, k02, k03, k04 }, \
    { ___, k11, k12, k13, k14 }, \
    { ___, k21, k22, k23, k24 }, \
    { k30, k31, k32, k33, k34 }, \
}
