/* This program crashes on purpose: it shows a stack overflow (no base case). */
#include <stdio.h>

void forever(int n) {
    printf("%d ", n);
    forever(n + 1);
}

int main(void) {
    forever(1);
    return 0;
}
