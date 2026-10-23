#include <stdio.h>

void main()
{
    int i, j;

    for (i = 2; i <= 1000; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
        }
    }


}
