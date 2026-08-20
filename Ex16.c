#include<stdio.h>
void main()
{
    float i,p,r,n;
    printf("Enter the principle value:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the number of years:");
    scanf("%f",&n);
    i=p*r*n/100;
    printf("Interest: %0.3f",i);
    printf("%");
}
