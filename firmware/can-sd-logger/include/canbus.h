/**
 * @file canbus.h
 * @brief TODO.
 *
 */


#ifndef CAN_H
#define	CAN_H


#include <stdint.h>


void canbus_init( void );


uint8_t canbus_send(
        const uint16_t id,
        const uint8_t dlc,
        const uint8_t * const data );


uint8_t canbus_recv(
        uint16_t * const id,
        uint8_t * const dlc,
        uint8_t * const data );


#endif	/* CAN_H */
