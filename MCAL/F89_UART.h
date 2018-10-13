/*
 * F89_UART.h
 *
 *  Created on: Oct 12, 2018
 *      Author: root
 */

#ifndef F89_UART_H_
#define F89_UART_H_


void F89_void_UART_Init(unsigned long baud);
void F89_void_UART_Write(unsigned char data);
void F89_void_UART_Read(unsigned char *data);
void F89_void_UART_String( char *data);
void F89_void_UART_Read_String(unsigned char *str);
void F89_void_UART_Read(unsigned char *data);


#endif /* F89_UART_H_ */
