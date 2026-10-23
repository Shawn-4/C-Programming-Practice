#include <stdio.h>

int main()
{
    int m, n, i, j=1;

    printf("Enter an integer number: ");
    scanf("%d", &m);
    printf("Enter the power of the previous number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        j= j * m;
    }
     printf("So the %d to the power %d is: ", m, n);
     printf("%d^%d = %d", m, n, j);

    return 0;
}
