//*****************************************************************************
//
// fontcmss18.c - Font definition for the 18pt Cmss font.
//
// Copyright (c) 2011-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 1.0 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmss
//     Size: 18 point
//     Bold: no
//     Italic: no
//     Memory usage: 2224 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 18 point Cmss font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss18Data[2021] =
{
      5,   7,   0,  17,  64,  14,   2,  65,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  81, 176,  11,   5, 161,  33,  17,
     33,  17,  33,   0,   9,  64,  36,  13, 240, 240,  81, 129,
     49, 129,  49, 129,  33, 129,  49, 129,  49,  76,  81,  33,
    129,  49, 129,  49,  92,  65,  49, 129,  33, 129,  49, 129,
     49, 129,  49, 129, 240, 128,  31,   7,  49,  83,  53,  18,
     17,  17,  17,  33,  49,  33,  50,  17,  67,  83,  83,  65,
     17,  65,  17,  65,  17,  17,  33,  17,  36,  81, 240, 240,
     16,  44,  13, 226, 161,  33,  81,  49,  33,  65,  65,  33,
     65,  65,  33,  49,  81,  33,  33,  97,  33,  33, 114,  33,
    193,  50,  97,  49,  33,  81,  49,  33,  65,  65,  33,  65,
     65,  33,  49,  81,  33, 162,   0,   6,  96,  31,  11, 240,
    162, 129,  33, 113,  33, 113,  33, 113,  17, 130, 146,  66,
     35,  65,  49,  17,  65,  33,  49,  33,  49,  52,  50,  50,
     84,  20,   0,   7,   8,   2,  65,  17,  17, 240, 240,  16,
     22,   5,  34,  49,  49,  65,  65,  49,  65,  65,  65,  65,
     65,  65,  65,  65,  81,  65,  65,  81,  66,  96,  22,   5,
      2,  65,  81,  65,  65,  81,  65,  65,  65,  65,  65,  65,
     65,  65,  49,  65,  65,  49,  50, 128,  18,   6,  33,  81,
     81,  49,  17,  17,  35,  51,  33,  17,  17,  49,  81,   0,
      8,  80,  19,  12,   0,   6,  81, 177, 177, 177, 177, 177,
    107,  97, 177, 177, 177, 177,   0,   6,  96,   6,   2, 240,
    209,  17, 144,   8,   6,   0,   7,  69,   0,   6, 112,   5,
      2, 240, 209, 176,  22,   8,  97, 113,  97, 113, 113,  97,
    113, 113,  97, 113, 113,  97, 113,  97, 113, 113,  97, 113,
    113, 240,  28,   7, 240, 130,  65,  33,  33,  65,  17,  65,
     17,  65,  17,  65,  17,  65,  17,  65,  17,  65,  17,  65,
     33,  33,  66, 240, 240, 128,  18,   6, 240,  81,  51,  81,
     81,  81,  81,  81,  81,  81,  81,  81,  53, 240, 240,  16,
     20,   7, 240, 116,  33,  49,  33,  65,  97,  97,  97,  81,
     81,  81,  81,  81, 102, 240, 240,  96,  21,   7, 240, 116,
     34,  49,  17,  65,  97,  82,  51,  97, 113,  97,  97,  17,
     50,  36, 240, 240, 112,  23,   8, 240, 209,  98,  98,  81,
     17,  66,  17,  65,  33,  50,  33,  49,  49,  55,  81, 113,
    113, 240, 240, 208,  20,   8, 240, 166,  33, 113, 113, 116,
     66,  33, 129, 113, 113, 113,  18,  49,  67, 240, 240, 208,
     25,   7, 240, 132,  33,  97,  81,  97,  19,  34,  34,  17,
     65,  17,  65,  17,  65,  17,  65,  33,  33,  66, 240, 240,
    128,  18,   8, 240, 151,  97, 113,  97, 113,  97, 113, 113,
     97, 113, 113, 113, 240, 240, 240,  27,   7, 240, 116,  34,
     34,  17,  65,  17,  65,  18,  34,  50,  65,  33,  33,  65,
     17,  65,  17,  65,  33,  33,  52, 240, 240, 112,  25,   7,
    240, 130,  65,  33,  33,  65,  17,  65,  17,  65,  17,  65,
     18,  34,  35,  17,  97,  81,  97,  51, 240, 240, 128,   5,
      2, 225, 209, 176,   7,   2, 225, 209,  17,  17, 112,  15,
      2, 193,  49,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  48,  11,  12,   0,  12,  11, 240, 240, 123,   0,  10,
     80,  18,   6, 240, 240, 129, 177,  81,  81,  81,  65,  81,
     65,  81,  81,  81,  49,  36, 112,  18,   7, 244,  33,  50,
     97,  97,  82,  66,  81,  81,  97,  97, 240,  81, 240, 240,
    144,  37,  10, 240, 132,  82,  49,  49,  52,  33,  33,  34,
     17,  33,  65,  17,  33,  65,  17,  33,  65,  17,  33,  65,
     17,  33,  65,  33,  33,  33,  49,  50,  82,  65,  69,   0,
      6,  64,  29,  11, 240, 178, 129,  17, 129,  17, 129,  18,
     98,  18,  97,  49,  97,  50,  66,  50,  71,  65,  82,  34,
     82,  33, 113,  33, 114,   0,   7,  28,   9, 240,  54,  49,
     81,  33,  97,  17,  97,  17,  97,  17,  66,  38,  49,  81,
     33,  97,  17,  97,  17,  97,  17,  81,  38,   0,   6,  21,
      9, 240, 101,  49,  65,  33, 129, 113, 129, 129, 129, 129,
    145, 129, 145,  65,  69,   0,   5,  96,  30,  10, 240,  86,
     65,  81,  49,  97,  33,  97,  33, 113,  17, 113,  17, 113,
     17, 113,  17, 113,  17,  97,  33,  97,  33,  81,  54,   0,
      6,  96,  19,   8, 240,  23,  17, 113, 113, 113, 113, 119,
     17, 113, 113, 113, 113, 119, 240, 240, 176,  19,   8, 240,
     23,  17, 113, 113, 113, 113, 118,  33, 113, 113, 113, 113,
    113,   0,   5, 112,  24,  10, 240, 133,  66,  65,  34, 129,
    129, 145, 145, 145, 145,  68,  33,  97,  33,  97,  50,  65,
     69,   0,   6,  64,  31,   9, 240,  49,  97,  17,  97,  17,
     97,  17,  97,  17,  97,  17,  97,  24,  17,  97,  17,  97,
     17,  97,  17,  97,  17,  97,  17,  97,   0,   5,  96,  16,
      2,  65,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17, 176,  19,   6, 240,  17,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  66,  20, 240, 240,  32,  31,  10,
    240,  81,  97,  33,  81,  49,  65,  65,  50,  65,  34,  81,
     18, 101,  82,  34,  65,  65,  65,  66,  49,  81,  49,  82,
     33,  98,   0,   6,  48,  18,   7, 225,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97, 102, 240, 240,  96,  51,
     12, 240, 146, 114,  18, 114,  19,  83,  17,  17,  81,  17,
     17,  17,  81,  17,  17,  18,  50,  17,  17,  33,  49,  33,
     17,  33,  49,  33,  17,  34,  18,  33,  17,  49,  17,  49,
     17,  49,  17,  49,  17,  49,  17,  49,  17,  65,  65,   0,
      7,  80,  39,   9, 240,  50,  81,  19,  65,  19,  65,  17,
     17,  65,  17,  18,  49,  17,  33,  49,  17,  34,  33,  17,
     49,  33,  17,  50,  17,  17,  65,  17,  17,  67,  17,  67,
     17,  82,   0,   5,  96,  30,  11, 240, 164,  97,  65,  65,
     97,  49,  97,  33, 129,  17, 129,  17, 129,  17, 129,  17,
    129,  33,  97,  49,  97,  65,  65, 100,   0,   7,  48,  25,
      8, 240,  21,  49,  65,  33,  81,  17,  81,  17,  81,  17,
     81,  17,  65,  37,  49, 113, 113, 113, 113,   0,   5, 112,
     34,  11, 240, 164,  97,  65,  65,  97,  49,  97,  33, 129,
     17, 129,  17, 129,  17, 129,  17, 129,  33,  34,  34,  33,
     50,  17,  65,  51,  85, 162, 161, 240, 240,  80,  30,   9,
    240,  54,  49,  81,  33,  97,  17,  97,  17,  97,  17,  81,
     38,  49,  49,  65,  65,  49,  66,  33,  81,  33,  82,  17,
     97,   0,   5,  96,  21,   8, 240,  52,  49,  49,  33, 113,
    113, 130, 116, 113, 129, 113, 113,  17,  65,  52, 240, 240,
    208,  19,  10, 240,  89,  81, 145, 145, 145, 145, 145, 145,
    145, 145, 145, 145, 145,   0,   6, 112,  30,   9, 240,  49,
     97,  17,  97,  17,  97,  17,  97,  17,  97,  17,  97,  17,
     97,  17,  97,  17,  97,  17,  97,  17,  97,  33,  65,  68,
      0,   6,  30,  12, 240, 146, 114,  33, 113,  50,  97,  50,
     82,  65,  81,  82,  65,  97,  50,  97,  49, 114,  33, 129,
     18, 129,  17, 147, 162,   0,   8,  16,  51,  17, 240, 240,
     66,  82,  82,  33,  82,  81,  49,  82,  81,  50,  52,  50,
     50,  49,  33,  50,  65,  49,  33,  49,  81,  49,  33,  49,
     82,  18,  34,  18,  82,  17,  65,  17, 113,  17,  65,  17,
    113,  17,  65,  17, 115,  67, 129,  97,   0,  11,  32,  29,
     11, 240, 114,  82,  49,  81,  66,  50,  82,  18, 113,  17,
    131, 145, 145,  17, 114,  18,  97,  50,  65,  81,  50,  82,
     33, 114,   0,   7,  25,  12, 240, 146, 114,  34,  82,  65,
     81,  82,  50,  98,  33, 129,  17, 147, 161, 177, 177, 177,
    177, 177,   0,   8,  32,  19,   9, 240,  56, 114, 113, 114,
     98, 114,  98, 113, 114, 113, 114,  98, 120,   0,   5,  96,
     21,   4,  67,  17,  49,  49,  49,  49,  49,  49,  49,  49,
     49,  49,  49,  49,  49,  49,  49,  49,  51,  13,   6, 193,
     49,  17,  49,  17,  49,  17,  49,   0,  10,  80,  21,   4,
     67,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,
     49,  49,  49,  49,  49,  49,  19,  10,   6, 226,  49,  18,
     18,  33,   0,  11,  48,   7,   2,  97,  17, 240, 240,  16,
      8,   2,  65,  17,  17,  17, 240, 224,  18,   6, 240, 240,
    211,  97,  81,  36,  18,  33,  17,  49,  17,  49,  36, 240,
    240,  16,  26,   8, 240,  17, 113, 113, 113, 113, 113,  20,
     34,  49,  33,  81,  17,  81,  17,  81,  17,  81,  17,  65,
     37, 240, 240, 208,  17,   7,   0,   6,  52,  33,  49,  17,
     97,  97,  97, 113,  49,  52, 240, 240,  96,  26,   7, 240,
     65,  97,  97,  97,  97,  37,  33,  49,  17,  65,  17,  65,
     17,  65,  17,  65,  33,  34,  35,  17, 240, 240,  96,  18,
      7,   0,   6,  51,  49,  34,  17,  65,  22,  17,  97, 113,
     49,  51, 240, 240, 112,  18,   6, 227,  33,  81,  81,  81,
     68,  49,  81,  81,  81,  81,  81,  81, 240, 240,  64,  24,
      9,   0,   8,  22,  33,  49,  65,  49,  65,  49,  65,  49,
     68,  81, 134,  49,  81,  18,  81,  33,  66,  52, 192,  26,
      7, 225,  97,  97,  97,  97,  97,  19,  34,  49,  17,  65,
     17,  65,  17,  65,  17,  65,  17,  65,  17,  65, 240, 240,
     96,  13,   2,  97,  17,  81,  17,  17,  17,  17,  17,  17,
     17, 176,  18,   5, 240,  49,  65, 225,  65,  65,  65,  65,
     65,  65,  65,  65,  65,  65,  19, 112,  24,   7, 225,  97,
     97,  97,  97,  97,  49,  33,  34,  33,  18,  51,  68,  49,
     34,  33,  49,  33,  50, 240, 240,  96,  16,   2,  65,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 176,
     31,  12,   0,  10,  65,  19,  35,  34,  50,  49,  17,  65,
     65,  17,  65,  65,  17,  65,  65,  17,  65,  65,  17,  65,
     65,  17,  65,  65,   0,   7,  80,  23,   7,   0,   6,  17,
     19,  34,  49,  17,  65,  17,  65,  17,  65,  17,  65,  17,
     65,  17,  65, 240, 240,  96,  21,   8,   0,   7,  35,  65,
     49,  33,  81,  17,  81,  17,  81,  17,  81,  33,  49,  67,
    240, 240, 208,  24,   8,   0,   7,   1,  20,  34,  49,  33,
     81,  17,  81,  17,  81,  17,  81,  17,  65,  37,  49, 113,
    113, 113, 240,  25,   7,   0,   6,  35,  17,  33,  34,  17,
     65,  17,  65,  17,  65,  17,  65,  33,  34,  35,  17,  97,
     97,  97,  97, 128,  15,   5, 240, 240,  81,  18,  18,  49,
     65,  65,  65,  65,  65, 240, 224,  16,   6, 240, 240, 212,
     17,  81,  84,  67,  81,  17,  49,  20, 240, 240,  32,  16,
      5, 240,  97,  65,  65,  52,  33,  65,  65,  65,  65,  65,
     67, 240, 176,  23,   7,   0,   6,  17,  65,  17,  65,  17,
     65,  17,  65,  17,  65,  17,  65,  17,  50,  20,  17, 240,
    240,  96,  20,   8,   0,   7,   2,  65,  33,  65,  34,  34,
     34,  33,  65,  33,  68,  82,  98, 240, 240, 208,  32,  12,
      0,  10,  66,  49,  65,  33,  50,  34,  33,  33,  17,  34,
     34,  17,  17,  33,  65,  17,  18,  17,  65,  17,  35,  66,
     50,  82,  50,   0,   7, 112,  20,   8,   0,   7,   2,  65,
     34,  33,  68,  82,  98,  81,  18,  50,  34,  18,  65, 240,
    240, 176,  22,   8,   0,   7,   2,  65,  33,  65,  34,  34,
     49,  33,  65,  33,  68,  82,  98,  98,  97, 113,  82, 208,
     15,   7,   0,   6,  22,  81,  82,  81,  81,  82,  81,  86,
    240, 240,  96,   8,   9,   0,  11,  40,   0,  10,  32,   9,
     18,   0,  22,  79,   2,   0,  20,  48,  11,   6, 209,  33,
     17,  33,  33,  33,   0,  11,  64,  10,   7, 240, 114,  33,
     18,  18,   0,  13,  48,
};

//*****************************************************************************
//
// The font definition for the 18 point Cmss font.
//
//*****************************************************************************
const tFont g_sFontCmss18 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    16,

    //
    // The height of the font.
    //
    20,

    //
    // The baseline of the font.
    //
    15,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   19,   30,   66,   97,  141,  172,
         180,  202,  224,  242,  261,  267,  275,  280,
         302,  330,  348,  368,  389,  412,  432,  457,
         475,  502,  527,  532,  539,  554,  565,  583,
         601,  638,  667,  695,  716,  746,  765,  784,
         808,  839,  855,  874,  905,  923,  974, 1013,
        1043, 1068, 1102, 1132, 1153, 1172, 1202, 1232,
        1283, 1312, 1337, 1356, 1377, 1390, 1411, 1421,
        1428, 1436, 1454, 1480, 1497, 1523, 1541, 1559,
        1583, 1609, 1622, 1640, 1664, 1680, 1711, 1734,
        1755, 1779, 1804, 1819, 1835, 1851, 1874, 1894,
        1926, 1946, 1968, 1983, 1991, 2000, 2011,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss18Data
};
