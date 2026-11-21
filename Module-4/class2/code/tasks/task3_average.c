#include <stdio.h>

/* TASK 3: write float average(int a[], int n) that returns the average of the elements */

int main(void)
{
    int sales[6] = {120, 340, 90, 410, 275, 60};

    printf("Average = %.2f\n", average(sales, 6));
    return 0;
}
