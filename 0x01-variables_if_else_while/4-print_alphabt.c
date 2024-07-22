#include <stdio.h>

int main(void){
	int i = 97;

	for(; i < 123; i++)
	{
		if (i == 'e' || i =='q')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');

	return(0);
}
