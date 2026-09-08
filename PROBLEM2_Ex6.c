#include<stdio.h>
void main ()
{
    float a,b,c,d;
    printf("Enter obtained marks for: \nPhysics:");
    scanf("%f", &a);
    printf("\nChemistry:");
    scanf("%f", &b);
    printf("\nMaths:");
    scanf("%f", &c);
    d=(a+b+c)/3;
    if (d>=35)
    {
        printf("Average marks: %f", d);
        printf("Student passes with third class");
    }
    else if (d>=50)
    {
        printf("Average marks: %f", d);
        printf("Student passes with second class");
    }
    else if (d>=60)
    {
        printf("Average marks: %f", d);
        printf("Student passes with first class");
    }
    else if (d>=70)
    {
        printf("Average marks: %f", d);
        printf("Student passes with distinction");
    }
    else
    {
        printf("Average marks: %f", d);
        printf("Student fails");
    }
}
