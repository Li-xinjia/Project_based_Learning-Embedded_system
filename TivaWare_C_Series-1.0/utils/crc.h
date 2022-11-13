//*****************************************************************************
//
// crc.h - Prototypes for the CRC functions.
//
// Copyright (c) 2010-2013 Texas Instruments Incorporated.  All rights reserved.
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
// This is part of revision 1.0 of the Tiva Utility Library.
//
//*****************************************************************************

#ifndef __CRC_H__
#define __CRC_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// Prototypes for the functions.
//
//*****************************************************************************
extern uint8_t Crc8CCITT(uint8_t ui8Crc, const uint8_t *pui8Data,
                         uint32_t ui32Count);
extern uint16_t Crc16(uint16_t ui16Crc, const uint8_t *pui8Data,
                      uint32_t ui32Count);
extern uint16_t Crc16Array(uint32_t ui32WordLen, const uint32_t *pui32Data);
extern void Crc16Array3(uint32_t ui32WordLen, const uint32_t *pui32Data,
                        uint16_t *pui16Crc3);
extern uint32_t Crc32(uint32_t ui32Crc, const uint8_t *pui8Data,
                      uint32_t ui32Count);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __CRC_H__
