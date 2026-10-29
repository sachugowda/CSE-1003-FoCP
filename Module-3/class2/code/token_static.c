#include <stdio.h>

int next_token(void) {
    static int t = 0;
    t++;
    return t;
}

int main(void) {
    printf("%d ", next_token());
    printf("%d ", next_token());
    printf("%d ", next_token());
    return 0;
}
