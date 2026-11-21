#include <stdio.h>

int main(void)
{
    int m[2][3] = {{10, 20, 30}, {40, 50, 60}};

    /* print row by row */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    /* row totals */
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum = sum + m[i][j];
        printf("Row %d total = %d\n", i, sum);
    }

    /* column totals */
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 2; i++)
            sum = sum + m[i][j];
        printf("Column %d total = %d\n", j, sum);
    }
    return 0;
}
