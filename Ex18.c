#include<stdio.h>
void main()
{
    float l,b,p,a;
    printf("Enter the length of a rectangle in meters:");
    scanf("%f",&l);
    printf("Enter the width of a rectangle in meters:");
    scanf("%f",&b);
    p=2*(b+l);
    a=l*b;
    printf("Perimeter: %0.1f",p);
    printf("m");
    printf("Area: %0.1f",a);
    printf("m^2");
}


