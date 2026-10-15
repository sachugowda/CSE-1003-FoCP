/* The 3n + 1 mystery: does every number reach 1? */
#include <stdio.h>

int main(void) {
    int n, steps = 0;

    printf("Start number? ");
    scanf("%d", &n);

    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        printf("%d ", n);
        steps++;
    }
    printf("\nReached 1 in %d steps\n", steps);
    return 0;
}
