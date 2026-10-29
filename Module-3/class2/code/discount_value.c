#include <stdio.h>

void apply_discount(int total) {
    if (total > 200)
        total = total - total / 10;
}

int main(void) {
    int bill = 250;
    apply_discount(bill);
    printf("Pay: Rs %d\n", bill);
    return 0;
}
