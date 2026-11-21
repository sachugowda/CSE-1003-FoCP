#include <stdio.h>

int main(void)
{
    int marks[5] = {78, 92, 65, 88, 71};

    printf("First box  marks[0] = %d\n", marks[0]);
    printf("Fourth box marks[3] = %d\n", marks[3]);

    marks[3] = 90;               /* change one box */

    printf("\nAll marks: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    printf("\n");
    return 0;
}
