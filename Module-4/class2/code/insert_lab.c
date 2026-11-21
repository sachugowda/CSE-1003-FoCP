#include <stdio.h>

int main(void)
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
