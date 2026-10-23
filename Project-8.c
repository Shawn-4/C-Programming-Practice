#include <stdio.h>

int main()
{
    int n, i, j= 1;

    printf("Enter an integer number: ");
    scanf("%d",&n);

    printf("The factorial of %d is: \n%d! = ",n, n);

    for(i=1; i<=n; i++)
    {
        j = j*i;
        printf("%d", i);

        if(i < n)
        {
            printf(" x ");
        }
    }

    printf(" = %d", j);

    return 0;
}
