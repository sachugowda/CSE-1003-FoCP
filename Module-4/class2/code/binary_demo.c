#include <stdio.h>

int main(void)
{
    int a[8] = {3, 8, 12, 17, 21, 25, 30, 42};
    int target = 25, low = 0, high = 7, pos = -1, guesses = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        guesses++;
        if (a[mid] == target) { pos = mid; break; }
        else if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    printf("Found at index %d in %d guesses\n", pos, guesses);
    return 0;
}
