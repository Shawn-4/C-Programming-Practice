#include <stdio.h>

int main()
{
    int n, i, j=1jaa;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        j = j * i;
    }

    printf("The product of the numbers from 1 to %d is= %d", n, j);

    return 0;
}
