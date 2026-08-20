#include<stdio.h>
void main()
{
    float b,k,m,g;
    printf("Bytes:");
    scanf("%f",&b);
    k=b*1000;
    m=k*1000;
    g=m*1000;
    printf("Kilobytes: %0.2f",k);
    printf("KB");
    printf("Megabytes: %0.2f",m);
    printf("MB");
    printf("Gigabytes: %0.2f",g);
    printf("GB");
}
