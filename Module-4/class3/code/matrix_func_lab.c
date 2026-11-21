#include <stdio.h>

/* Fill in: add 1 to every element of the grid */
void addOne(int m[][3], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            m[i][j] = m[i][j];   /* change this line */
}

int main(void)
{
    int g[2][3] = {{1, 2, 3}, {4, 5, 6}};
    addOne(g, 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", g[i][j]);
        printf("\n");
    }
    return 0;
}
