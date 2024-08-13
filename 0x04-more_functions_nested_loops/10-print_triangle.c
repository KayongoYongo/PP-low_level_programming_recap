#include "main.h"

void print_triangle(int size)
{
	int i, j;

	if(size == 0)
	{
		_putchar('\n');
	}

	for(i = 1; i <= size; i++)
	{
		/* Print spaces */
		for(j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		/* Print the characters */
		for(j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
