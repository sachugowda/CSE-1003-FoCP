/* Cinema seat chart: rows A to E, seats 1 to 6 */
#include <stdio.h>

int main(void) {
    char row;
    int seat;

    for (row = 'A'; row <= 'E'; row++) {
        for (seat = 1; seat <= 6; seat++) {
            printf("%c%d ", row, seat);
        }
        printf("\n");
    }
    return 0;
}
