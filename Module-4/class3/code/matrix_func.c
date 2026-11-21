#include <stdio.h>

void show(int m[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int g[2][3] = {{1, 2, 3}, {4, 5, 6}};
    show(g, 2);
    return 0;
}
