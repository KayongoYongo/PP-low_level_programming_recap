#include <stdio.h>

int main(void)
{
    unsigned long i = 0;
    unsigned long j = 1;
    unsigned long sum = 0;
    int k = 0;
    sum = i + j;

    printf("%lu", j);
    printf(", ");

    for (k = 0; k < 50; k++)
    {
        i = j;
        j = sum;
        sum = i + j;

        printf("%lu", sum);
        if (k != 49)
        {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}

