#include <stdio.h>
int main()
{
    //Insert a new number at the last position of an array
    int a[MAX], n, value;
    n = readArray(a);
    if (n == 0)
        return;
    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter the number to insert: ");
    scanf("%d", &value);
    a[n] = value;
    n++;
    printf("Array after insertion: ");
    printArray(a, n);
}
