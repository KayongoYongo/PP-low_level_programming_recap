#include "main.h"

int _isdigit(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
