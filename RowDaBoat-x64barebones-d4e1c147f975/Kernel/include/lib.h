#ifndef LIB_H
#define LIB_H

#include <stdint.h>

void * memset( void * destination, int32_t character, uint64_t length);
void * memcpy( void * destination, const void * source, uint64_t length);

uint32_t uintToBase( uint64_t value, char * buffer, uint32_t base);

extern uint8_t inb( uint16_t port);

extern void outb(  uint16_t port, uint8_t value);

char *cpuVendor( char *result);

int strilen(char * s);

#endif