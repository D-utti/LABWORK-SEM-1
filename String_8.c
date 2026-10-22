#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], revs[100];
    printf("Enter string to check if its a Palindrome:");
    gets(str);
    strcpy(revs,str);
    strrev(revs);
    if(strcmp(str,revs)==0)
       {
           printf("String is a Palindrome");
       }
    else
    {
        printf("String is NOT a Palindrome");
    }
}

