#include<stdio.h>
void main()
{
    float n,g,d;
    printf("Enter value of gross sales");
    scanf("%f", &g);
    if (g>20000)
    {
        d=0.15*g;
        n=g-d;
        printf("Net sales are: %f", n);
    }
    else if (g<10000)
    {
        d=0.05*g;
        n=g-d;
        printf("Net sales are: %f", n);
    }
    else
    {
        d=0.10*g;
        n=g-d;
        printf("Net sales are: %f", n);
    }
}
