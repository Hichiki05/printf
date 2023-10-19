#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - a fonction
 * @format: format
 * Return: numb of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
		count += write(1, format, 1);
	}
		else
		{
			format++;
			if (*format == '\0')
			{
				va_end(args);
			return (-1);
			}
		switch (*format)
		{
			case 'c':
				count += _char(&args);
				break;
			case 's':
				count += _string(&args);
				break;
			case '%':
				count += _percent();
				break;
			default:
				va_end(args);
				return (-1);
		}
		}
		format++;
	}
	va_end(args);
	return (count);
}
