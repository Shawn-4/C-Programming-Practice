#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        j=n*i;
        printf("%d x %d = %d\n", n, i, j);
    }

    return 0;
}
