#include <stdio.h>

void changeOne(int x)
{
    x = 100;
}

void doubleAll(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = a[i] * 2;
}

int main(void)
{
    int marks[4] = {10, 20, 30, 40};

    changeOne(marks[0]);
    printf("%d\n", marks[0]);
    doubleAll(marks, 4);
    printf("%d\n", marks[1]);
    return 0;
}
