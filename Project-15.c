#include <stdio.h>

void main()
{
    int n, i, j;
    printf("Give an integer number: ");
    scanf("%d",&n);

    printf("Printing prime numbers from 1 to %d : ", n);
    for (i = 2; i <= n; i++)
    {
        for (j = 2; i % j != 0; j++);
        if (i == j)
        {
            printf("%d ", i);
        }

    }


}


