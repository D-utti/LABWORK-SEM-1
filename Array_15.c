#include <stdio.h>
int main()
{
    //Delete a value from the first position of the array
    int a[MAX], n, i;
    n = readArray(a);
    if (n == 0)
        return;
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}
