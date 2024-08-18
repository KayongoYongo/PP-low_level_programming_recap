#include "main.h"
#include "2-strlen.c"

void rev_string(char *s)
{
	/* Use the two pointers approach */
	int left;
	int right;
	char temp;

	left = 0;
	right = _strlen(s) - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
			
		left++;
		right--;
	}
}
