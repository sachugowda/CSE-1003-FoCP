/* Fill in the 5 blanks marked ____ */
#include <stdio.h>

int main(void) {
    int items, total, discount;
    float avg;

    printf("Items and total? ");
    scanf("%d %d", &items, &total);

    avg = (_____) total / items;          /* blank 1 */

    if (total ___ 200) {                  /* blank 2 */
        discount = total __ 10;           /* blank 3 */
    } ____ {                              /* blank 4 */
        discount = 0;
    }

    printf("Average: Rs %___\n", avg);    /* blank 5 */
    printf("To pay: Rs %d\n", total - discount);
    return 0;
}
