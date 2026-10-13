/* Type conversion: fill in the 5 blanks marked ___ */
#include <stdio.h>

int main(void) {
    int bill = 250, friends = 3, stars, code;
    float wrong, right, half;

    wrong = bill / friends;
    right = (_____) bill / friends;         /* 1 */
    stars = (___) 4.6;                      /* 2 */
    code = ___;                             /* 3: the letter B */
    half = 15 / ___;                        /* 4 */

    printf("Wrong share: %.2f\n", wrong);
    printf("Right share: %.2f\n", right);
    printf("Stars: %d\n", stars);
    printf("Code of B: %d\n", code);
    printf("Half samosa: Rs %____\n", half); /* 5 */
    return 0;
}
