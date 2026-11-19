#include <stdio.h>
int main()
{
    //Reverse the array of maximum 5 elements
    int a[5], n, i, temp;
    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("Invalid size.\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    printArray(a, n);
}
