#include "main.h"
#include "6-abs.c"

int print_last_digit(int r)
{
	_putchar(_abs(r %  10) + '0');
	return(_abs(r % 10));
}
