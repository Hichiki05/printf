#include "main.h"
/**
 * _putchar - write
 * @c: the character
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
