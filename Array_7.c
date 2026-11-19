#include <stdio.h>
int main()
{
    //Transpose of a 4x4 matrix
    int a[4][4], t[4][4], i, j;
    printf("Enter elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            t[j][i] = a[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d\t", t[i][j]);
        printf("\n");
    }
}
