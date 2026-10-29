#include <stdio.h>

void swap(int *p, int *q) {
    int t = *p;
    *p = *q;
    *q = t;
}

int main(void) {
    int x = 3, y = 7;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y);
    return 0;
}
