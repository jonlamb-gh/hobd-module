//******************************************************************************
//! @file $RCSfile: rtc_drv.h,v $
//!
//! Copyright (c) 2007 Atmel.
//!
//! Use of this program is subject to Atmel's End User License Agreement.
//! Please read file license.txt for copyright notice.
//!
//! @brief This file contains the prototypes and the macros of the
//!        low level functions (drivers) of:
//!             - RTC (Real Time Counter)
//!             - for DVK90CAN1 board
//! These macros need some #define's of "dvk90can1_board.h" file.
//!
//! This file can be parsed by Doxygen for automatic documentation generation.
//! This file has been validated with AVRStudio-413528/WinAVR-20070122.
//!
//! @version $Revision: 3.20 $ $Name: jtellier $
//!
//! @todo
//! @bug
//******************************************************************************

#ifndef _RTC_DRV_H_
#define _RTC_DRV_H_

//_____ I N C L U D E S ________________________________________________________
#include "board.h"

//_____ D E F I N I T I O N S __________________________________________________

#ifndef RTC_TIMER
#  error  You must define RTC_TIMER in "board.h" file
#endif
#ifndef RTC_CLOCK
#  error  You must define RTC_CLOCK in "board.h" file
#endif
#ifndef FOSC
#  error  You must define FOSC in "board.h" file
#endif

//_____ M A C R O S ____________________________________________________________

//_____ D E C L A R A T I O N S ________________________________________________

//extern volatile uint32_t rtc_tics;
//extern volatile uint32_t rtc_milliseconds;
extern BOOL rtc_running;

//_____ P R O T O T Y P E S ____________________________________________________

//------------------------------------------------------------------------------
//  @fn wait_for
//!
//! Wait_for (delay or loop) milli-seconds using "tics" from an RTC_TIMER.
//!
//! @warning - FOSC must be define in "config.h".
//!          - RTC_TIMER must run and rtc_tics must count milli-seconds.
//!          - Do not wait_for 0 ms !
//!          - Problem may occur if: rtc_tics + ms_count > 0xFFFFFFFF !
//!
//! @param  uint16_t - wait value in ms (max: 65535 ms)
//!
//! @return  none
//!
extern void delay_ms(uint16_t ms_count);

//------------------------------------------------------------------------------
//  @fn rtc_int_init
//!
//! Timer2 initialization to have 1 ms tic interval managed under interrupt.
//!
//! @warning  RTC_TIMER & RTC_CLOCK must be define in "dvk90can1_board.h" and
//!           FOSC in"config.h".
//!
//! @param  none
//!
//! @return  none
//!
extern void rtc_int_init(void);


uint32_t rtc_get_ms( void );


uint32_t rtc_get_seconds( void );


uint8_t rtc_timer_get( void );


void rtc_timer_clear( void );


//______________________________________________________________________________

#endif  // _RTC_DRV_H_
