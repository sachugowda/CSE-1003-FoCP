#include <stdio.h>

int main(void)
{
    int seat[3][4] = { {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1} };

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
            printf("%d ", seat[r][c]);
        printf("\n");
    }
    return 0;
}
