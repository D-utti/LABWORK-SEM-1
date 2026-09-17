#include<stdio.h>
void main()
{
    int a, m, n;
    printf("Enter a value:");
    scanf("%d", &n);
    for (m=1;m<=n;m++)
    {
        for (a=1;a<=m;a++)
        {
           printf("%d", m);
           printf("%d\n", a);
        }
    }
    printf("\n");
}
