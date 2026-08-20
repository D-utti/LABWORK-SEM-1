#include<stdio.h>
void main()
{
    float n1,n2,n3,n4,n5,n6,n7,div;
    //n1=44;
    //n2=33;
    printf("Please enter a value for n1:");
    scanf("%f",&n1);
    printf("Please enter a value for n2:");
    scanf("%f",&n2);
    n3=n1+n2;
    n4=n1-n2;
    n5=n1*n2;
    n6=n1/n2;
    n7=n3+n4+n5+n6;
    div=n7/4;
    printf("The average of the result of all operations on n1 and n2 is: %f",div);
}

