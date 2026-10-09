/* Electricity bill: find and fix 3 bugs */
#include <stdio.h>

int main(void) {
    const int RATE = 7
    int units, bill;

    printf("Units used? ");
    scanf("%d", units);

    bill = units + RATE;

    printf("Bill = Rs %d\n", bill);
    return 0;
}
