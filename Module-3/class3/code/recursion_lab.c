#include <stdio.h>

int ahead(int pos);
int factorial(int n);
int digit_sum(int n);
int ways(int steps);
int hanoi_moves(int n);

int main(void) {
    printf("People ahead of position 4: %d\n", ahead(4));
    printf("Ways to line up 4 friends: %d\n", factorial(4));
    printf("Digit sum of 2026: %d\n", digit_sum(2026));
    printf("Ways to climb 5 steps: %d\n", ways(5));
    printf("Hanoi moves for 3 discs: %d\n", hanoi_moves(3));
    return 0;
}

int ahead(int pos) {
    if (pos == 1)
        return 0;
    return 1 + ahead(pos - 1);
}

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int digit_sum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + digit_sum(n / 10);
}

int ways(int steps) {
    if (steps <= 2)
        return steps;
    return ways(steps - 1) + ways(steps - 2);
}

int hanoi_moves(int n) {
    if (n == 0)
        return 0;
    return 2 * hanoi_moves(n - 1) + 1;
}
