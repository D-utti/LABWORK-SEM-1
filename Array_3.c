#include <stdio.h>
int main()
{
    //accept 5 values and sort in ascending order (use all techniques and find the best)
    int a[5], i, j, n;
    printf("Enter the values:");

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d \t", a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    }

    printf("\nAfter sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d \t", a[i]);
    }
}
