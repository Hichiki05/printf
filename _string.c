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

	if (str == NULL)
	{
		str = "(null)";
	}

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		write(1, str + 1, 1);
		count++;
	}
	return (count);
}
