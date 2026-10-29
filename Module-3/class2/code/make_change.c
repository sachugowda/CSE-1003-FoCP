#include <stdio.h>

void make_change(int amt, int *notes,
                 int *coins) {
    *notes = amt / 20;
    *coins = amt % 20;
}

int main(void) {
    int n, c;
    make_change(65, &n, &c);
    printf("%d notes, Rs %d\n", n, c);
    return 0;
}
