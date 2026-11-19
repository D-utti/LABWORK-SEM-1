#include <stdio.h>
int main()
{
    //Insert a new number at the beginning of the array
    int a[MAX], n, i, value;
    n = readArray(a);
    if (n == 0)
        return;
    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter the number to insert: ");
    scanf("%d", &value);
    for (i = n; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = value;
    n++;
    printf("Array after insertion: ");
    printArray(a, n);
}
