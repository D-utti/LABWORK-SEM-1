#include<stdio.h>
void main()
{
    //Delete a given value from the array (all its occurrences)
    int a[MAX], n, i, k = 0, value, found = 0;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (a[i] == value)
            found = 1;
        else
            a[k++] = a[i];
    }
    if (!found) {
        printf("%d not found in the array.\n", value);
        return;
    }
    n = k;
    printf("Array after deletion: ");
    printArray(a, n);
}
