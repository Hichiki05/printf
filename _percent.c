#include "main.h"
#include <unistd.h>
int _percent()
{
	write(1, "%", 1);
	return 1;
}
