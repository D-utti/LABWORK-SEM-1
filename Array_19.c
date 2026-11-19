#include<stdio.h>
void main()
{
    //Search a value within an array
    int a[MAX], n, i, value, found = 0;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the value to search: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("%d found at position %d\n", value, i + 1);
            found = 1;
        }
    }
    if (!found)
        printf("%d not found in the array.\n", value);
}

int main(void) {
    int choice;
    void (*programs[19])(void) = {
        p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,
        p11, p12, p13, p14, p15, p16, p17, p18, p19
    };

    printf("Enter program number (1-19): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 19)
        programs[choice - 1]();
    else
        printf("Invalid choice.\n");
}
