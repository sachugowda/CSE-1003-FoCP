#include <stdio.h>

int main(void) {
    int code, qty, price;

    printf("1 Chai  2 Samosa  3 Maggi\n");
    printf("Item code and quantity? ");
    scanf("%d %d", &code, &qty);

    switch (code) {
        case 1:  price = 10; break;
        case 2:  price = 15; break;
        case 3:  price = 40; break;
        default: price = 0;  printf("No such item\n");
    }

    printf("Amount: Rs %d\n", price * qty);
    return 0;
}
