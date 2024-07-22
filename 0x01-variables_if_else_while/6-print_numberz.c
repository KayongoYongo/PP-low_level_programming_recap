#include <stdio.h>

int main(void){
	int i = 0;

	for(; i < 10; i++)
	{	
		putchar(i + '0');
	}
	putchar('\n');

	return(0);
}
