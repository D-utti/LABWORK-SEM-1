#include<stdio.h>
void main ()
{
    float n1,n2,sum,sub,mul,div;
    //n1=44;
    //n2=33;
    printf("Please enter a value for n1:");
    scanf("%f",&n1);
    printf("Please enter a value for n2:");
    scanf("%f",&n2);
    sum=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    printf("\nThe addition is: %f",sum);
    printf("\nThe subtraction is: %f",sub);
    printf("\nThe multiplication is: %f",mul);
    printf("\nThe division is: %f",div);
}
