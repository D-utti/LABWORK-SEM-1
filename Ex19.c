#include<stdio.h>
void main()
{
    float r,a;
    printf("Enter the radius of a circle in meters:");
    scanf("%f",&r);
    a=r*r*22/7;
    printf("Area: %0.2f",a);
    printf("m^2");
}
