#include <stdio.h>

int main(void)
{
    int m[2][3] = {{10, 20, 30},
                   {40, 50, 60}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
