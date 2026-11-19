#include<stdio.h>
void main()
{
    //Delete a value from the last position
    int a[MAX], n;
    n = readArray(a);
    if (n == 0)
        return;
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}
