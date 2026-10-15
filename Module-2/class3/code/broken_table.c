/* Table of 7, from 7 x 1 to 7 x 10: find and fix 3 bugs */
#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i < 10; i++);
    {
        printf("7 x %d = %d\n", i, 7 + i);
    }
    return 0;
}
