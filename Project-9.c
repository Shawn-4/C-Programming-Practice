#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        j= i * i;
    }
     printf("%d^2 = %d", n, j);

    return 0;
}
