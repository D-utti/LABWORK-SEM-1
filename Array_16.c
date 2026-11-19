#include <stdio.h>
int main()
{
    //Delete a value from a particular position within an array
    int a[MAX], n, i, pos;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return;
    }
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}
