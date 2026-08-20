#include<stdio.h>
void main()
{
    float c,f;
    printf("Temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celcius: %0.3f",c);
    printf("C");
}

