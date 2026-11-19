#include <stdio.h>
int main()
{
    //Multiply two 2D arrays and store the result in the 3rd 2D array
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first array (max 10): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second array (max 10): ");
    scanf("%d %d", &r2, &c2);
    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 || r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10) {
        printf("Invalid size.\n");
        return;
    }
    if (c1 != r2) {
        printf("Multiplication not possible (columns of first must equal rows of second).\n");
        return;
    }
    printf("Enter elements of first array:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second array:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    printf("Result of multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
