
#include<stdio.h>

int main ()

{
    int i;
    float f;
    double d;
    char c;

    printf("Type an integer value: %d");
    scanf("%d",&i);
    printf("The value you type is:%d",i);
    printf("Type an float value: %f");
    scanf("%f",&f);
    printf("The value you type is:%f",i);
    printf("Type an double value: %lf");
    scanf("%lf",&d);
    printf("The value you type is:%lf",d);
    printf("Type an chracter value: '%c'");
    scanf("%c",&c);
    printf("The value you type is: '%c'",c);

    return 0;

}
