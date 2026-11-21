#include <stdio.h>

int main(void)
{
    int roll[6] = {21, 17, 24, 30, 12, 24};
    int target = 24, first = -1, count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (roll[i] == target)
        {
            if (first == -1) first = i;
            count++;
        }
    }
    if (first == -1) printf("Not found\n");
    else printf("First at index %d, appears %d times\n", first, count);
    return 0;
}
