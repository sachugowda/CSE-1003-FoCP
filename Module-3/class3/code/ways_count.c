#include <stdio.h>

long calls = 0;

int ways(int steps) {
    calls++;
    if (steps <= 2)
        return steps;
    return ways(steps - 1) + ways(steps - 2);
}

int ways_loop(int steps) {
    int a = 1, b = 2, c, i;
    if (steps <= 2)
        return steps;
    for (i = 3; i <= steps; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void) {
    int n, result;
    for (n = 5; n <= 30; n += 5) {
        calls = 0;
        result = ways(n);
        printf("n = %2d: ways = %d, recursive calls = %ld, loop rounds = %d\n",
               n, result, calls, n - 2);
    }
    printf("loop check: %d\n", ways_loop(30));
    return 0;
}
