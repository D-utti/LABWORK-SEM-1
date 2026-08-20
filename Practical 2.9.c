#include<stdio.h>
void main()
{
    float n1,n2,n3,n4,n5,n6,div;
    //n1=1;
    //n2=2;
    //n3=3;
    //n4=4;
    //n5=5;
    printf("Please enter a value for n1:");
    scanf("%f",&n1);
    printf("Please enter a value for n2:");
    scanf("%f",&n2);
    printf("Please enter a value for n3:");
    scanf("%f",&n3);
    printf("Please enter a value for n4:");
    scanf("%f",&n4);
    printf("Please enter a value for n5:");
    scanf("%f",&n5);
    n6=n1+n2+n3+n4+n5;
    div=n6/5;
    printf("The average of given numbers is: %.2f",div);
}
