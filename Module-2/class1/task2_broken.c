/* Report card: find and fix 3 bugs */
#include <stdio.h>

int main(void) {
    int roll, m1, m2, m3, total;

    printf("Roll number? ");
    scanf("%d", &roll);
    printf("Marks in 3 subjects? ");
    scanf("%d %d %d", &m1, &m2, m3);

    total = m1 + m2;

    printf("Roll %d: total %f / 300\n", roll, total);
    return 0;
}
