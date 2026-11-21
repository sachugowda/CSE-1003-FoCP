#include <stdio.h>

int main(void)
{
    int a[3] = {2, 5, 8};
    int b[4] = {1, 4, 9, 10};
    int c[7];
    int i = 0, j = 0, k = 0;

    while (i < 3 && j < 4)
    {
        if (a[i] <= b[j]) c[k++] = a[i++];
        else              c[k++] = b[j++];
    }
    while (i < 3) c[k++] = a[i++];
    while (j < 4) c[k++] = b[j++];

    for (int x = 0; x < 7; x++)
        printf("%d ", c[x]);
    printf("\n");
    return 0;
}
