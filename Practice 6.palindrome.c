#include<stdio.h>
void main()
{
    int num, ognum. revnum,r;
    printf("Please enter a number\n");
    scanf("%d", &num);
    ognum=num;
    while(num!=0)
    {
        r=num%10;
        revnum=(revnum*10)+r;
        num=num/10;
    }
    if(ognum==revnum)
    {
        printf("The given number, %d, is a palindrome", num);
    }
    else
    {
        printf("The given number, %d, is not a palindrome", num);
    }
}

