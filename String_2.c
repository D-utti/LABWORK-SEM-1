#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter UPPERCASE text to convert to lowercase:");
    gets(str);
    strlwr(str);
    printf("%s\n", str);
}
