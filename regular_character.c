#include "main.h"
#include <unistd.h>

/**
 * regular_character - a fonction
 * @c: a parameter
 * Return: true
 */

int regular_character(char c)
{
	write(1, &c, 1);
	return (1);
}
