#include <stdio.h>
int main()
{
    //Add two 2D arrays of same size and store the result in the 3rd one
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;
    printf("Enter rows and columns (max 10): ");
    scanf("%d %d", &r, &col);
    if (r < 1 || r > 10 || col < 1 || col > 10) {
        printf("Invalid size.\n");
        return;
    }
    printf("Enter elements of first array:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second array:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Result of addition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
