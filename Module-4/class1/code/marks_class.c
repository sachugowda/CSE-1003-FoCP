#include <stdio.h>

int main(void)
{
    int marks[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
        total = total + marks[i];

    printf("Total   = %d\n", total);
    printf("Average = %.1f\n", total / 5.0);
    return 0;
}
