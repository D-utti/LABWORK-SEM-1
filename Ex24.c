#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter a value for a:");
    scanf("%f", &a);
    printf("Enter a value for b:");
    scanf("%f", &b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values are: a=%f and b=%f", a,b);
}
