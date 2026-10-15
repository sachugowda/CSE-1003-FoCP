/* One line is missing. Find it and write it. */
#include <stdio.h>

int main(void) {
    int n, i = 1, sum = 0;

    printf("Add 1 to n. n? ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        /* ??? missing line ??? */
    }

    printf("Sum = %d\n", sum);
    return 0;
}
