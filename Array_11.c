#include <stdio.h>
int main()
{
    //Shift all nos. by n positions (left or right) in an array of 10, pad with 0
    int a[10], b[10], i, n;
    char dir;
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid shift.\n");
        return;
    }
    printf("Enter direction (L = left, R = right): ");
    scanf(" %c", &dir);

    if (dir == 'L' || dir == 'l') {
        for (i = 0; i < 10; i++) {
            if (i + n < 10)
                b[i] = a[i + n];
            else
                b[i] = 0;
        }
    } else if (dir == 'R' || dir == 'r') {
        for (i = 0; i < 10; i++) {
            if (i - n >= 0)
                b[i] = a[i - n];
            else
                b[i] = 0;
        }
    } else {
        printf("Invalid direction.\n");
        return;
    }
    printf("Array after shifting: ");
    printArray(b, 10);
}
