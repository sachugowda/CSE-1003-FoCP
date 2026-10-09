/* Canteen with tea: find and fix 3 bugs */
#include <stdio.h>

int main(void) {
    const int CHAI_PRICE = 10;
    const int SAMOSA_PRICE = 15;
    const int MAGGI_PRICE = 40;
    const int TEA_PRICE = 12;
    int chai, samosa, maggi, tea, total;

    TEA_PRICE = 10;

    printf("How many chai? ");
    scanf("%d", &chai);
    printf("How many samosa? ");
    scanf("%d", &samosa);
    printf("How many Maggi? ");
    scanf("%d", &maggi);
    printf("How many tea? ");
    scanf("%d", &Tea);

    total = chai * CHAI_PRICE + samosa * SAMOSA_PRICE
          + maggi * MAGGI_PRICE;

    printf("TOTAL = Rs %d\n", total);
    return 0;
}
