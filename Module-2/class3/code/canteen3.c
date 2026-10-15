#include <stdio.h>

int main(void) {
    int code, qty, price, total = 0, items = 0, i;

    printf("1 Chai 2 Samosa 3 Maggi, 0 to finish\n");
    while (1) {
        printf("Item code: ");
        scanf("%d", &code);
        if (code == 0)
            break;
        if (code < 1 || code > 3) {
            printf("No such item, try again\n");
            continue;
        }
        printf("Quantity: ");
        scanf("%d", &qty);
        if (code == 1) price = 10;
        else if (code == 2) price = 15;
        else price = 40;
        total += price * qty;
        items += qty;
    }

    for (i = 0; i < 24; i++) printf("-");
    printf("\nItems: %d  Total: Rs %d\n", items, total);
    return 0;
}
