#include "main.h"
#include "2-strlen.c"

void puts_half(char *str)
{
	int i = 0;
	int j;

	j = _strlen(str);

	if(j % 2 != 0)
	{
		j += 1;
	}

	for(i = j / 2; i < j;  i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
