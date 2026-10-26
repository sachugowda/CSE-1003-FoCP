#include <stdio.h>

int item_total(int qty, int price) {
    return qty * price;
}

int main(void) {
    int a, b, c, total;
    a = item_total(2, 10);
    b = item_total(1, 15);
    c = item_total(1, 40);
    total = a + b + c;
    printf("Total: Rs %d\n", total);
    return 0;
}
