#include <stdio.h>

int main(void) {
    const int CHAI_PRICE = 10;
    const int SAMOSA_PRICE = 15;
    const int MAGGI_PRICE = 40;
    int chai, samosa, maggi, items, total, discount;
    float avg;

    printf("How many chai, samosa, Maggi? ");
    scanf("%d %d %d", &chai, &samosa, &maggi);

    items = chai + samosa + maggi;
    total = chai * CHAI_PRICE + samosa * SAMOSA_PRICE
          + maggi * MAGGI_PRICE;
    avg = (float) total / items;

    if (total > 200) {
        discount = total / 10;
    } else {
        discount = 0;
    }

    printf("Items: %d  Total: Rs %d\n", items, total);
    printf("Average per item: Rs %.2f\n", avg);
    printf("Discount: Rs %d\n", discount);
    printf("To pay: Rs %d\n", total - discount);
    return 0;
}
