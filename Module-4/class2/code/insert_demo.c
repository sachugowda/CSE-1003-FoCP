#include <stdio.h>

int main(void)
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2, value = 99;

    if (n < 10)
    {
        for (int i = n; i > pos; i--)
            a[i] = a[i - 1];              /* shift right, from the back */
        a[pos] = value;
        n++;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
