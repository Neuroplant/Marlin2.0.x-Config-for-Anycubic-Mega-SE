/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'Logo BW.bmp'
 */
#pragma once

#define STATUS_LOGO_WIDTH 48
#define STATUS_LOGO_X 8
#define STATUS_LOGO_Y 10
#define STATUS_HEATERS_X 54
#define STATUS_BED_X 74

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00011111,B11111000,B00000000,B00000000, // ...................##########...................
  B00000000,B00000000,B11111111,B11111111,B10000000,B00000000, // ................#################...............
  B00000000,B00000111,B11111111,B11111111,B11100000,B00000000, // .............######################.............
  B00000000,B00001111,B11111111,B11111111,B11111000,B00000000, // ............#########################...........
  B00000000,B00111111,B11111111,B11111111,B11111100,B00000000, // ..........############################..........
  B00000000,B01111111,B11111111,B11111111,B11111110,B00000000, // .........##############################.........
  B00000000,B11111111,B10111001,B11111111,B11111111,B00000000, // ........#########.###..#################........
  B00000001,B11111111,B10110001,B11111111,B11111111,B11000000, // .......##########.##...###################......
  B00000011,B11111110,B00000011,B11111111,B11111111,B11000000, // ......#########.......####################......
  B00000111,B11111100,B00000001,B11111111,B11111111,B11100000, // .....#########.........####################.....
  B00001111,B11111000,B00000000,B01111111,B11111111,B11110000, // ....#########............###################....
  B00001111,B11110000,B00000000,B00000111,B11111111,B11111000, // ....########.................################...
  B00011111,B11110000,B00000000,B00001111,B11111111,B11111000, // ...#########................#################...
  B00111111,B11110000,B00000000,B00001111,B11111111,B11111100, // ..##########................##################..
  B00111111,B11100000,B00000000,B00001111,B11111111,B11111100, // ..#########.................##################..
  B00111111,B11100000,B00000000,B00001111,B11111111,B11111110, // ..#########.................###################.
  B01111111,B10000000,B00000000,B00111111,B11111111,B11111110, // .########.................#####################.
  B01111111,B00000000,B00000000,B00111111,B11111111,B11111110, // .#######..................#####################.
  B01111111,B00000000,B00000000,B01111111,B11111111,B11111111, // .#######.................#######################
  B11111111,B10000000,B00000000,B01111111,B11111111,B11111111, // #########................#######################
  B11111111,B11100000,B00000000,B11111110,B01111111,B11111111, // ###########.............#######..###############
  B11111111,B11111100,B00000001,B11111110,B00011111,B11111111, // ##############.........########....#############
  B11111111,B11111111,B10000001,B11111100,B00000111,B11111111, // #################......#######.......###########
  B11111111,B11100011,B11000000,B11110000,B00000111,B11111111, // ###########...####......####.........###########
  B11111111,B10000001,B11000000,B00000000,B00001111,B11111111, // #########......###..................############
  B11111111,B11000000,B00000000,B01111100,B01111111,B11111111, // ##########...............#####...###############
  B11111111,B11110011,B10000000,B00111111,B11111111,B11111111, // ############..###.........######################
  B11111111,B11111111,B10000000,B00000001,B11111110,B11111111, // #################..............########.########
  B11111111,B11111111,B10000000,B00000000,B11111101,B11111111, // #################...............######.#########
  B01111111,B11111111,B10000000,B00000000,B11111101,B11111110, // .################...............######.########.
  B01111111,B11111111,B10000000,B00000000,B01111110,B11111110, // .################................######.#######.
  B01111111,B11111111,B00000000,B00000000,B01111110,B11111110, // .###############.................######.#######.
  B00111111,B11111111,B00000000,B00000000,B00111100,B11111110, // ..##############..................####..#######.
  B00111111,B11111111,B00000000,B00000000,B00011000,B11111100, // ..##############...................##...######..
  B00111111,B11111110,B00110000,B00000000,B00000000,B11111100, // ..#############...##....................######..
  B00011111,B11111110,B00111000,B00000000,B00000001,B11111000, // ...############...###..................######...
  B00001111,B11111110,B00111000,B11000000,B00000011,B11111000, // ....###########...###...##............#######...
  B00001111,B11111111,B00110000,B11000001,B11111111,B11110000, // ....############..##....##.....#############....
  B00000111,B11111111,B11100000,B11100011,B11111111,B11100000, // .....##############.....###...#############.....
  B00000011,B11111111,B11111111,B11111111,B11111111,B11000000, // ......####################################......
  B00000001,B11111111,B11111111,B11111111,B11111111,B10000000, // .......##################################.......
  B00000000,B11111111,B11111111,B11111111,B11111111,B00000000, // ........################################........
  B00000000,B01111111,B11111111,B11111111,B11111110,B00000000, // .........##############################.........
  B00000000,B00111111,B11111111,B11111111,B11111100,B00000000, // ..........############################..........
  B00000000,B00001111,B11111111,B11111111,B11110000,B00000000, // ............########################............
  B00000000,B00000111,B11111111,B11111111,B11100000,B00000000, // .............######################.............
  B00000000,B00000000,B11111111,B11111111,B00000000,B00000000, // ................################................
  B00000000,B00000000,B00011111,B11111000,B00000000,B00000000  // ...................##########...................
};
