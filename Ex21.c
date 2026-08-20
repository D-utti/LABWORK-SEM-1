#include<stdio.h>
void main()
{
    float n,g,d,a;
    printf("Amount of gross salary in dollars:");
    scanf("%f",&g);
    a=(0.1)*g;
    d=(0.03)*g;
    n=g+a-d;
    printf("Net salary: %0.1f",n);
    printf("$");
}
