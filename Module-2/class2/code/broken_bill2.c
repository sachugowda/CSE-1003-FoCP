/* Riya's bill with discount: find and fix 3 bugs */
#include <stdio.h>

int main(void) {
    int items, total, discount = 0;
    float avg;

    printf("Items and total? ");
    scanf("%d %d", &items, &total);

    avg = total / items;

    if (total > 200);
        discount = total * 10;

    printf("Average: Rs %.2f\n", avg);
    printf("To pay: Rs %d\n", total - discount);
    return 0;
}
