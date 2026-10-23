#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The total sum of the numbers from 1 to %d is = %d", n,sum);

    return 0;
}
