#include <stdio.h>

int items_sold = 0;

int next_token(void);
int item_total(int qty, int price);
void bill(int total, int *discount, int *pay);
void serve(int chai, int samosa, int maggi);

int main(void) {
    serve(2, 1, 1);
    serve(10, 10, 0);
    serve(0, 0, 6);
    printf("Items sold today: %d\n", items_sold);
    return 0;
}

int next_token(void) {
    static int t = 0;
    t++;
    return t;
}

int item_total(int qty, int price) {
    return qty * price;
}

void bill(int total, int *discount, int *pay) {
    *discount = 0;
    if (total > 200)
        *discount = total / 10;
    *pay = total - *discount;
}

void serve(int chai, int samosa, int maggi) {
    int total, discount, pay;
    total = item_total(chai, 10)
          + item_total(samosa, 15)
          + item_total(maggi, 40);
    bill(total, &discount, &pay);
    items_sold += chai + samosa + maggi;
    printf("Token %d: total %d, discount %d, pay %d\n",
           next_token(), total, discount, pay);
}
