#include <stdio.h>

int main(void)
{
    int m[2][3] = {{12, 45, 7}, {30, 8, 51}};
    int big = m[0][0];

    /* Task 2: find the largest number in the whole matrix */

    printf("Largest = %d\n", big);
    return 0;
}
