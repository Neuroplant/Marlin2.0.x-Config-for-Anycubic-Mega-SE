/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "AnyCubic/Mega Zero 2.0/Anycubic V1"

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_WIDTH 48
#define STATUS_LOGO_X 8
#define STATUS_LOGO_Y 10
#define STATUS_HEATERS_X 54
#define STATUS_BED_X 74

const unsigned char status_logo_bmp[] PROGMEM = {
  B10000000,B10000000,B00000000,B00000000,B11110011,B11110000, // #.......#.......................####..######....
  B11000001,B10000000,B00000000,B00000001,B00001010,B00000000, // ##.....##......................#....#.#.........
  B10100010,B10000000,B00000000,B00000001,B00000010,B00000000, // #.#...#.#......................#......#.........
  B10010100,B10000000,B00000000,B00000001,B00000010,B00000000, // #..#.#..#......................#......#.........
  B10001000,B10011110,B00111100,B01111100,B11110011,B11100000, // #...#...#..####...####...#####..####..#####.....
  B10001000,B10100001,B01000010,B10001100,B00001010,B00000000, // #...#...#.#....#.#....#.#...##......#.#.........
  B10000000,B10111111,B01000010,B10000100,B00001010,B00000000, // #.......#.######.#....#.#....#......#.#.........
  B10000000,B10100000,B01000010,B10000100,B00001010,B00000000, // #.......#.#......#....#.#....#......#.#.........
  B10000000,B10100001,B01000010,B10001101,B00001010,B00000000, // #.......#.#....#.#....#.#...##.#....#.#.........
  B10000000,B10011110,B00111110,B01111100,B11110011,B11110000, // #.......#..####...#####..#####..####..######....
  B00000000,B00000000,B00000010,B00000000,B00000000,B00000000, // ......................#.........................
  B00000000,B00000000,B00111110,B00000000,B00000000,B00000000  // ..................#####.........................
};

