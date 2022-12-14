//*****************************************************************************
//
// usbhhidkeyboard.h - This file holds the application interfaces for USB
//                     keyboard devices.
//
// Copyright (c) 2008-2013 Texas Instruments Incorporated.  All rights reserved.
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
// This is part of revision 1.0 of the Tiva USB Library.
//
//*****************************************************************************

#ifndef __USBHHIDKEYBOARD_H__
#define __USBHHIDKEYBOARD_H__

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
//! \addtogroup usblib_host_device
//! @{
//
//*****************************************************************************

typedef struct tUSBHKeyboard tUSBHKeyboard;

//*****************************************************************************
//
// The prototype for the host USB Keyboard driver callback function.
//
//*****************************************************************************
typedef void (*tUSBHIDKeyboardCallback)(tUSBHKeyboard *psKbInstance,
                                        uint32_t ui32Event,
                                        uint32_t ui32MsgParam,
                                        void *pvMsgData);

extern tUSBHKeyboard * USBHKeyboardOpen(tUSBHIDKeyboardCallback pfnCallback,
                                        uint8_t *pui8Buffer,
                                        uint32_t ui32BufferSize);
extern uint32_t USBHKeyboardClose(tUSBHKeyboard *psKbInstance);
extern uint32_t USBHKeyboardInit(tUSBHKeyboard *psKbInstance);
extern uint32_t USBHKeyboardModifierSet(tUSBHKeyboard *psKbInstance,
                                        uint32_t ui32Modifiers);
extern uint32_t USBHKeyboardPollRateSet(tUSBHKeyboard *psKbInstance,
                                        uint32_t ui32PollRate);
extern uint32_t USBHKeyboardUsageToChar(tUSBHKeyboard *psKbInstance,
                                        const tHIDKeyboardUsageTable *psTable,
                                        uint8_t ui8UsageID);

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif
