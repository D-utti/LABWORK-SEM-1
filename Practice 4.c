#include<stdio.h>
void main()
{
    float a,b;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    if (a>b)
    {
        printf("%f is greater than %f", a,b);
    }
    else if(a==b)
    {
        printf("%f is equal to %f", a,b);
    }
    else
    {
        printf("%f is less than %f", a,b);
    }
}
