#include <stdio.h>

int main(void)
{
    int roll[5] = {21, 17, 24, 30, 12};
    int target;
    int found = -1;

    printf("Roll number to find: ");
    scanf("%d", &target);

    /* TASK 5: loop through the array.
       If roll[i] equals target, remember i in found and stop. */

    if (found != -1)
        printf("Roll %d found at index %d\n", target, found);
    else
        printf("Roll %d not found\n", target);
    return 0;
}
