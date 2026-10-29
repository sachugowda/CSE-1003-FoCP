#include <stdio.h>

int ahead(int pos) {
    if (pos == 1)
        return 0;
    return 1 + ahead(pos - 1);
}

int main(void) {
    printf("%d\n", ahead(4));
    return 0;
}
