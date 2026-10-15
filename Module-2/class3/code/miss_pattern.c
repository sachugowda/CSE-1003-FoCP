/* One line is missing. Find it and write it. */
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        /* ??? missing line ??? */
    }
    return 0;
}
