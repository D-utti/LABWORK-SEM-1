#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter values for a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b)
    {
        if (b>c)
        {
            printf("a is the largest of all values\n");
            printf("c is the smallest of all values\n");
        }
        else if (b==c)
        {
            printf("a is the largest of all values\n");
            printf("b and c are equal and the smallest of all values\n");
        }
        else
        {
           if (a>c)
           {
               printf("a is the largest of all values\n");
               if(b>c)
               {
                   printf("c is the smallest of all values\n");
               }
               else if (b==c)
               {
                   printf("b and c are equal and the smallest of all values\n");
               }
               else
               {
                   printf("b is the smallest of all values\n");
               }
           }
           else if (a==c)
           {
               printf("a and c are equal and the largest of all values\n");
               printf("b is the smallest of all values\n");
           }
           else
           {
               printf("c is the largest of all values\n");
               printf("b is the smallest of all values\n");
           }
        }
    }
    else if (a==b)
    {
        if (b>c)
        {
            printf("a and b are equal and the largest of all values\n");
            printf("c is the smallest of all values\n");
        }
        else if (b==c)
        {
            printf("a, b and c are all equal values\n");
        }
        else
        {
           if (a>c)
           {
               printf("a and b are equal and the largest of all values\n");
               printf("c is the smallest of all values\n");
           }
           else if (a==c)
           {
               printf("a, b and c are all equal values\n");
           }
           else
           {
               printf("c is the largest of all values\n");
               printf("a and b are equal and the smallest of all values\n");
           }
        printf("c is the largest of all values\n");
        printf("a and b are equal and the smallest of all values\n");
        }
    }
    else //a<b
    {
        if (b>c)
        {
            printf("b is the largest of all values\n");
            if (a>c)
            {
                printf("c is the smallest of all values\n");
            }
            else if (a==c)
            {
                printf("a and c are equal and the smallest of all values\n");
            }
            else
            {
                printf("a is the smallest of all values\n");
            }
        }
        else if (b==c)
        {
            printf("b and c are equal and the largest of all values\n");
            printf("a is the smallest of all values\n");
        }
        else
        {
           if (a>c)
           {
               printf("b is the largest of all values\n");
               printf("a is the smallest of all values\n");
           }
           else if (a==c)
           {
               printf("b is the largest of all values\n");
               printf("a and c are equal and the smallest of all values\n");
           }
           else //a<c
           {
               printf("c is the largest of all values\n");
               printf("a is the smallest of all values\n");
           }
        }
    }
}
