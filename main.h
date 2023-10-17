#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h> 

/**
 * struct format - match the conversion
 * @id: type char pointer
 * @f: type pointer
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int printf_string(va_list val);
int printf_char(va_list val);
int printf_37(void);
int _printf(const char * const format, ...);
int _strlen(char *s);
#endif 
