#include <stdio.h>

int square(int n) {
    return n * n;
}

int sum_squares(int a, int b) {
    return square(a) + square(b);
}

int main(void) {
    int r = sum_squares(3, 4);
    printf("%d\n", r);
    return 0;
}
