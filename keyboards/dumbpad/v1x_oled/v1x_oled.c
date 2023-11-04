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
#include "quantum.h"



#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // Right encoder
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    // Left encoder
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    }
    return true;
}
#endif

#if defined(OLED_ENABLE) 
// oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // return OLED_ROTATION_270;  // flips the display 270 degrees
// }


bool oled_task_user(void) {
  // Host Keyboard Layer Status
  oled_write_P(PSTR("Layer"), false);
  switch (get_highest_layer(layer_state)) {
    case 0:
      oled_write_ln_P(PSTR(" BAS"), false);
      break;
    case 1:
      oled_write_ln_P(PSTR(" CAD"), false);
      break;
    case 2:
      oled_write_ln_P(PSTR(" FL"), false);
      break;
    default:
      // Or use the write_ln shortcut over adding '\n' to the end of your string
      oled_write_ln_P(PSTR(" UND"), false);
  }

  // Host Keyboard LED Status
  led_t led_state = host_keyboard_led_state();
//   oled_write_P(PSTR("-----"), false);
  oled_write_P(PSTR("Stats~"), false);
  oled_write_ln_P(led_state.num_lock ? PSTR("NUM") : PSTR("  "), false);
  oled_write_P(led_state.caps_lock ? PSTR("CAP") : PSTR("   "), false);


    return false;
}
 #endif
