#include<stdio.h>
void main()
{
    float g,n,d;
    printf("Enter the gross sale value:");
    scanf("%f",&g);
    d=(0.1)*g;
    n=g-d;
    printf("Net sales: %0.1f",n);
}
