#include<stdio.h>
void main()
{
    int row, col, i,j;
    printf("no of rows:");
    scanf("%d", &row);
    printf("no of columns:");
    scanf("%d", &col);
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=row;j++)
        {
         printf("%d %d\n",i,j);
        }
    }
    printf("\n");
}


//"int a, m, n;
//  printf("Enter a value:");
//  scanf("%d", &n);
//  for (m=1;m<=n;m++)
//  {
//      for (a=1;a<=n;a++)
//      {
//         printf("%d", m);
//         printf("%d\n", a);
//      }
//  }
//  printf("\n");"
