#include <stdio.h>

int main(void)
{
    int roll[5] = {21, 17, 24, 30, 12};
    int target = 24;
    int found = -1;                 /* -1 means "not found yet" */

    for (int i = 0; i < 5; i++)
    {
        if (roll[i] == target)
        {
            found = i;
            break;                  /* stop looking */
        }
    }

    if (found != -1)
        printf("Roll %d found at index %d\n", target, found);
    else
        printf("Roll %d not found\n", target);
    return 0;
}
