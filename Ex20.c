#include<stdio.h>
void main()
{
    float l,h,a;
    printf("Enter the base length of a triangle in meters:");
    scanf("%f",&l);
    printf("Enter the height of a triangle in meters:");
    scanf("%f",&h);
    a=l*h/2;
    printf("Area: %0.1f",a);
    printf("m^2");
}



