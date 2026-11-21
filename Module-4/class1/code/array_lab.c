#include <stdio.h>

int main(void)
{
    int marks[5] = {78, 92, 65, 88, 71};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
        total = total + marks[i];
    }
    printf("Total = %d\n", total);
    return 0;
}
