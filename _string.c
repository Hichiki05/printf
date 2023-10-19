#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * _string - a fct
 * @args: a parameter
 * Return: true
 */

int _string(va_list *args)
{
	char *str = va_arg(*args, char *);
	int count = 0;

	if (str == NULL || strcmp(str, "(null)") == 0)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str, 1);
		count++;
		str++;
	}
		return (count);
}
