#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _char - a funct
 * @args: a parameter
 * Return: true
 */

int _char(va_list *args)
{
	char c = va_arg(*args, int);

	write(1, &c, 1);
	return (1);
}
