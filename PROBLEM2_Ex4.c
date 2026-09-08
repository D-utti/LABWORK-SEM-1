#include<stdio.h>
#include<math.h>
void main()
{
    float b;
    int a;
    printf("Enter a random number:");
    scanf("%d", &a);
    b=a%7;
    if (b==0)
    {
        printf("Number is divisible by 7");
    }
    else
    {
        printf("Number is not divisible by 7");
    }
}
