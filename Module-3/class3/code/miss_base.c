/* One line is missing. Find it and write it. */
#include <stdio.h>

int sum_to(int n) {
    /* ??? missing line ??? */
    return n + sum_to(n - 1);
}

int main(void) {
    printf("%d\n", sum_to(3));
    return 0;
}
