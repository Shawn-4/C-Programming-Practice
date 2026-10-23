#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        if(num % 2== 0)
        {
            printf("The number you enter %d is a positive even number", num);
        }
        else
        {
            printf("The number you enter %d is a positive odd number", num);
        }
    }
    else if(num < 0)
    {
         if(num % 2== 0)
        {
            printf("The number you enter %d is a negative even number", num);
        }
        else
        {
            printf("The number you enter %d is a negative odd number", num);
        }
    }
    else
    {
        printf("The number enter is 0 ");
    }

    return 0;
}
