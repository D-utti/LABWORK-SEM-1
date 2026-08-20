#include<stdio.h>
void main()
{
    float p,c,m,avg;
    printf("Marks received in Physics:");
    scanf("%f",&p);
    printf("Marks received in Chemistry:");
    scanf("%f",&c);
    printf("Marks received in Maths:");
    scanf("%f",&m);
    avg=(p+c+m)/3;
    printf("Average marks received: %0.2f",avg);
}

