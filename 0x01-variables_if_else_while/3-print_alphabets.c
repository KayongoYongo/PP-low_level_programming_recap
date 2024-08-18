#include <stdio.h>

int main(void) {
	int i = 65;
	int j = 97;

	for(; j < 123; j++)
	{
		putchar(j);
	}
	for(; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
	return(0);

}
