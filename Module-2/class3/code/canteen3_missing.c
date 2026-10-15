/* 3 lines are missing. Write each one. */
#include <stdio.h>

int main(void) {
    int code, qty, price, total = 0;

    while (1) {
        printf("Item code (0 to finish): ");
        scanf("%d", &code);
        if (code == 0)
            /* ??? missing line 1: stop taking orders ??? */
        if (code < 1 || code > 3) {
            printf("No such item\n");
            /* ??? missing line 2: ask for the next code ??? */
        }
        printf("Quantity: ");
        scanf("%d", &qty);
        if (code == 1) price = 10;
        else if (code == 2) price = 15;
        else price = 40;
        /* ??? missing line 3: add this item to total ??? */
    }
    printf("Total: Rs %d\n", total);
    return 0;
}
