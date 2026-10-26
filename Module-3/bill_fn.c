#include <stdio.h>

int item_total(int qty, int price);
int apply_discount(int total);
void print_line(void);

int main(void) {
    int chai, samosa, maggi, total, pay;

    printf("How many chai, samosa, Maggi? ");
    scanf("%d %d %d", &chai, &samosa, &maggi);

    total = item_total(chai, 10)
          + item_total(samosa, 15)
          + item_total(maggi, 40);
    pay = apply_discount(total);

    print_line();
    printf("Total: Rs %d\n", total);
    printf("To pay: Rs %d\n", pay);
    print_line();
    return 0;
}

int item_total(int qty, int price) {
    return qty * price;
}

int apply_discount(int total) {
    if (total > 200)
        return total - total / 10;
    return total;
}

void print_line(void) {
    int i;
    for (i = 0; i < 28; i++)
        printf("-");
    printf("\n");
}
