#include<stdio.h>
void main()
{
    float a;
    printf("Enter a random value");
    scanf("%f", &a);
    if (a>0)
    {
        printf("%f is positive", a);
    }
    else if(a==0)
    {
        printf("value is zero");
    }
    else
    {
        printf("%f is negative", a);
    }
}
