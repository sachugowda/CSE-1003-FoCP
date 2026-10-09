#include <stdio.h>

int main(void) {
    const int CHAI_PRICE = 10;
    const int SAMOSA_PRICE = 15;
    const int MAGGI_PRICE = 40;
    int chai, samosa, maggi, total;

    printf("=== IIIT Canteen ===\n");
    printf("How many chai? ");
    scanf("%d", &chai);
    printf("How many samosa? ");
    scanf("%d", &samosa);
    printf("How many Maggi? ");
    scanf("%d", &maggi);

    total = chai * CHAI_PRICE + samosa * SAMOSA_PRICE
          + maggi * MAGGI_PRICE;

    printf("\nChai   x %d = Rs %d\n", chai, chai * CHAI_PRICE);
    printf("Samosa x %d = Rs %d\n", samosa, samosa * SAMOSA_PRICE);
    printf("Maggi  x %d = Rs %d\n", maggi, maggi * MAGGI_PRICE);
    printf("TOTAL      = Rs %d\n", total);
    return 0;
}
