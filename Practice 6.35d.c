#include<stdio.h>
void main()
{
    int r, c, i,j;
    printf("no of rows:");
    scanf("%d", &r);
    printf("no of columns:");
    scanf("%d", &c);
    for(i=c;i>r;i--)
    {
        for(j=1;j<=r;j++)
        {
         printf("%d %d\n",i,j);
        }
    }
    printf("\n");
}
