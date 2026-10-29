#include <stdio.h>

int apply_discount(int total) {
    if (total > 200)
        return total - total / 10;
    return total;
}

int main(void) {
    int bill = 250;
    bill = apply_discount(bill);
    printf("Pay: Rs %d\n", bill);
    return 0;
}
