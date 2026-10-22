#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], x[100], y[100], z[100];
    printf("Enter word to ToGgLeCaSe:");
    gets(str);
    strlwr(str);
    strupr(str);
    strcpy(x,str);
    if(strcmp(str,x)==0);
    {
        printf("%s\n", str);
    }
}

