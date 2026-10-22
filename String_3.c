#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter lowercase text to convert to UPPERCASE:");
    gets(str);
    strupr(str);
    printf("%s\n", str);
}

