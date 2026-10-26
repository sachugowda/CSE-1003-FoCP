/* Find and fix 3 bugs */
#include <stdio.h>

int item_total(int qty, int price) {
    int t = qty * price;
}

int main(void) {
    int total = 0;
    total = item_total(2);
    item_total(1, 15);
    printf("Total: Rs %d\n", total);
    return 0;
}
