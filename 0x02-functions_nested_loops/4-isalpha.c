#include <stdio.h>

int _isalpha(int c)
{
	/* Checks if a character is lowercase or uppercase*/
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
