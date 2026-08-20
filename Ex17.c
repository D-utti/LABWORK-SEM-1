#include<stdio.h>
#include<math.h>
void main()
{
    float l,p,a,pow;
    printf("Enter the length of a side of a square in meters:");
    scanf("%f",&l);
    p=4*l;
    a=(l)pow(2);
    printf("Perimeter: %0.1f",p);
    printf("m");
    printf("Area: %0.1f",a);
    printf("m^2");
}

