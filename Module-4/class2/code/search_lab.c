#include <stdio.h>

int main(void)
{
    int roll[6] = {21, 17, 24, 30, 12, 24};
    int target = 24, found = 0;

    for (int i = 0; i < 6; i++)
    {
        if (roll[i] == target)
            found = 1;
    }
    if (found) printf("Found\n");
    else printf("Not found\n");
    return 0;
}
