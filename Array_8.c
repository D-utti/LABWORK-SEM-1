#include <stdio.h>
int main()
{
    //Copy an array of 5 elements to an array of 10 elements skipping one element
       int a[5], b[10] = {0}, i;
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
        b[2 * i] = a[i];
    printf("New array: ");
    printArray(b, 10);
}
