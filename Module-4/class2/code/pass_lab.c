#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(void)
{
    int marks[5] = {35, 72, 28, 90, 55};

    printArray(marks, 5);
    return 0;
}
