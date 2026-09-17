#include<stdio.h>
void main()
{
    int r,i;
    printf("value:");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        printf("%d%d\n",i,r+1-i);
    }
}
