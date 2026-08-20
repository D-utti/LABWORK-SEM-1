#include<stdio.h>
void main()
{
    float g, a, d, n;
    printf("Enter gross salary, g=");
    scanf("%f", &g);
    if (g>10000)
    {
        a=0.1*g;
        d=0.03*g;
        n=g+a-d;
        printf("Net salary is: %f", n);
    }
    else if (g<=5000)
    {
        printf("Net salary is: %f", g);
    }
    else
    {
        a=0.07*g;
        d=0.02*g;
        n=g+a-d;
        printf("Net salary is: %f", n);
    }

}
