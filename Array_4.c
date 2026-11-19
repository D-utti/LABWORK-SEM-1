#include <stdio.h>
int main()
{
    //Minimum no. of notes required
     int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount, i, count, total = 0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 9; i++) {
        count = amount / notes[i];
        if (count > 0) {
            printf("%d note(s) of Rs. %d\n", count, notes[i]);
            total = total + count;
        }
        amount = amount % notes[i];
    }
    printf("Total notes = %d\n", total);
}
