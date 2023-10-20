#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _int - Handle the %d and %i format specifiers
 * @args: A pointer to the va_list containing the integer argument
 * Return: Number of characters printed
 */
int _int(va_list *args)
{
	int num = va_arg(*args, int);
	char buffer[12];
	int count = 0;
	int printed = snprintf(buffer, sizeof(buffer), "%d", num);

	if (printed >= 0)
	{
		count += write(1, buffer, printed);
	}
	return (count);
}
