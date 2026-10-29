#include <stdio.h>

void add1(int *x) {
    *x = *x + 1;
}

int main(void) {
    int a = 5;
    add1(&a);
    printf("a = %d\n", a);
    return 0;
}
