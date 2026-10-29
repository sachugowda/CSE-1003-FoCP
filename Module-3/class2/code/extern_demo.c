#include <stdio.h>

void count_visit(void);

int main(void) {
    count_visit();
    count_visit();
    return 0;
}

int visits = 0;

void count_visit(void) {
    extern int visits;
    visits++;
    printf("Visits: %d\n", visits);
}
