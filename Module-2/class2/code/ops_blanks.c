/* Operators: fill in the 7 blanks marked ___ */
#include <stdio.h>

int main(void) {
    int chai = 2, samosa = 1, paid = 100;
    int total, change, notes, coins;
    int isStudent = 1, token = 0;

    total = chai * 10 ___ samosa * 15;      /* 1 */
    change = paid ___ total;                /* 2 */
    notes = change ___ 20;                  /* 3 */
    coins = change ___ 20;                  /* 4 */
    printf("Change %d: %d notes, Rs %d\n", change, notes, coins);

    printf("Offer? %d\n", isStudent ___ total > 30);  /* 5 */
    token___;                               /* 6 */
    total ___ 5;                            /* 7 */
    printf("Token %d, new total %d\n", token, total);
    return 0;
}
