/**
 * @file obd_uart.h
 * @brief TODO.
 *
 */

#ifndef OBD_UART_H
#define	OBD_UART_H

#include <stdint.h>
#include "ring_buffer.h"

void obd_uart_init(void);

void obd_uart_deinit(void);

uint16_t obd_uart_getc(void);

void obd_uart_putc(
        const uint8_t data);

#endif	/* OBD_UART_H */