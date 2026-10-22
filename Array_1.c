#include <stdio.h>
int main()
{
    //accept 5 values and print them
    int a[5], i;
    printf("Enter the values:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
       printf("%d \t", a[i]);
    }
}

