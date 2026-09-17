#include<stdio.h>
void main()
{
    int a, m, n, b;
    printf("Enter a value:");
    scanf("%d", &n);
    for (m=1;m<=n;m++)
    {
        for(b=1;b<=n;b++)
        {
            for (a=1;a<=n;a++)
        {
           printf("%d %d %d\n", m, b, a);
        }
        }
    }
    printf("\n");
}


