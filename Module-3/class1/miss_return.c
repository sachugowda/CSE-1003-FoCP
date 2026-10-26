/* One line is missing. Find it and write it. */
#include <stdio.h>

int apply_discount(int total) {
    int pay = total;
    if (total > 200)
        pay = total - total / 10;
    /* ??? missing line ??? */
}

int main(void) {
    printf("To pay: Rs %d\n", apply_discount(250));
    return 0;
}
