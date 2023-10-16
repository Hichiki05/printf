#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,va_list list, char buffer[], int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *foirmat, int *i, va_list list);
int get_size(const char *format, int *i);


#endif /* MAIN_H */
