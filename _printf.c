#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - a fonction
 * @format: format
 * Return: numb of character printed
 */
int _printf(const char *format, ...)
{ va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
<<<<<<< HEAD
		{ count += write(1, format, 1); }
=======
		count += write(1, format, 1);
>>>>>>> 345cdd1f66aaa0c297425fe776af58b848a5c31f
		else
		{ format++;
			if (*format == '\0')
			{ va_end(args);
<<<<<<< HEAD
			return (-1); }
=======
			return (-1);  }
>>>>>>> 345cdd1f66aaa0c297425fe776af58b848a5c31f
		switch (*format)
		{ case 'c':
				count += _char(&args);
				break;
			case 's':
				count += _string(&args);
				break;
			case 'd':
			case 'i':
				count += _int(&args);
				break;
			case '%':
				count += _percent();
				break;
			default:
				write(1, "%", 1);
				write(1, format, 1);
<<<<<<< HEAD
				count += 2; }
=======
				count += 2;
		}
>>>>>>> 345cdd1f66aaa0c297425fe776af58b848a5c31f
		}
		format++; }
	va_end(args);
	return (count); }
