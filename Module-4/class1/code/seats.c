#include <stdio.h>

int main(void)
{
    /* 1 = booked, 0 = free : 3 rows, 4 seats in each row */
    int seat[3][4] = { {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1} };

    printf("Seat [1][2] = %d\n\n", seat[1][2]);

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
            printf("%d ", seat[r][c]);
        printf("\n");
    }
    return 0;
}
