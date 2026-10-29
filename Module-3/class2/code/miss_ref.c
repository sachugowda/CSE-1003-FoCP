/* One line is missing. Find it and write it. */
#include <stdio.h>

void add1(int *x) {
    /* ??? missing line ??? */
}

int main(void) {
    int a = 5;
    add1(&a);
    printf("a = %d\n", a);
    return 0;
}
