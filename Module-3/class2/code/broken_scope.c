/* Why does the total stay 0? Find the bug. */
#include <stdio.h>

int total = 0;

void add_item(int price) {
    int total = 0;
    total = total + price;
}

int main(void) {
    add_item(10);
    add_item(15);
    printf("Total: %d\n", total);
    return 0;
}
