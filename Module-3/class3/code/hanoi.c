#include <stdio.h>

void hanoi(int n, char a, char c, char b) {
    if (n == 0)
        return;
    hanoi(n - 1, a, b, c);
    printf("Disc %d: %c to %c\n", n, a, c);
    hanoi(n - 1, b, c, a);
}

int main(void) {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
