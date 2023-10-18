#include "main.h"
#include <unistd.h>

int regular_character(char c)
{
	write(1, &c, 1);
	return 1;
}
