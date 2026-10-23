#include <stdio.h>

void main()
{
    int i, j;

    for (i = 2; i <= 1000; i++)
    {
        for (j = 2; i % j != 0; j++);
        if (i == j)
        {
            printf("%d ", i);
        }

    }


}

