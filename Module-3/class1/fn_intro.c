#include <stdio.h>

int item_total(int qty, int price) {
    int t = qty * price;
    return t;
}

int main(void) {
    int chai = 2, cost;
    cost = item_total(chai, 10);
    printf("Cost: Rs %d\n", cost);
    return 0;
}
