#include <stdio.h>

int main(void)
{
    int a[3] = {2, 5, 8};
    int b[4] = {1, 4, 9, 10};
    int c[7];
    int k = 0;

    for (int i = 0; i < 3; i++) c[k++] = a[i];
    for (int i = 0; i < 4; i++) c[k++] = b[i];

    for (int i = 0; i < 7; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
