#include <stdio.h>

void printRow(int r[], int cols)
{
    for (int c = 0; c < cols; c++)
        printf("%d ", r[c]);
    printf("\n");
}

void printAll(int s[][4], int rows)
{
    for (int r = 0; r < rows; r++)
        printRow(s[r], 4);
}

int main(void)
{
    int seat[3][4] = {{1,0,0,1},{0,1,1,0},{0,0,0,1}};

    printRow(seat[1], 4);
    printf("--\n");
    printAll(seat, 3);
    return 0;
}
