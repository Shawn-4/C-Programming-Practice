#include <stdio.h>

void main()
{
    int i, j;

    printf("Give an integer number ");
    scanf("%d",&i);
    for(j=2;i%j!=0;j++);
    if(i==j)
    {
      printf("The number %d is a prime number",i);
    }
    else
    {
      printf("The number %d is not a prime number",i);
    }
}
