#include<stdio.h>
void main ()
{
    int n1,n2,sum,sub,mul,div;
    //n1=44;
    //n2=33;
    printf("Please enter a value for n1:");
    scanf("%d",&n1);
    printf("Please enter a value for n2:");
    scanf("%d",&n2);
    sum=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    printf("\nThe addition is: %d",sum);
    printf("\nThe subtraction is: %d",sub);
    printf("\nThe multiplication is: %d",mul);
    printf("\nThe division is: %d",div);
}


