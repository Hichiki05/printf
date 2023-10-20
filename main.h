#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char * const format, ...);
int regular_character(char c);
int _char(va_list *args);
int _string(va_list *args);
int _percent(void);
int _int(va_list *args);

#endif
