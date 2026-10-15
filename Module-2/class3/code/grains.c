/* Chessboard puzzle: 1 grain, then double on every square */
#include <stdio.h>

int main(void) {
    unsigned long long grains = 1, total = 0;
    int square;

    for (square = 1; square <= 64; square++) {
        total = total + grains;
        if (square == 10 || square == 32 || square == 64)
            printf("Square %2d: %llu grains\n", square, grains);
        grains = grains * 2;
    }
    printf("Total on the board: %llu\n", total);
    return 0;
}
