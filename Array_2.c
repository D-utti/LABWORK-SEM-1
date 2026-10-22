#include <stdio.h>
int main()
{
    //accept 10 values and print 4th, 7th, 9th
    int a[10], i;
    printf("Enter the values:");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\t %d\t %d\t", a[3], a[6], a[8]);

}


