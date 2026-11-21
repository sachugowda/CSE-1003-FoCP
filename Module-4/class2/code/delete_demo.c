#include <stdio.h>

int main(void)
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 1;

    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];                  /* shift left, from the front */
    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
