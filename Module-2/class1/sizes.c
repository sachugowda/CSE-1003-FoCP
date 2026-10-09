/* Module 2, Class 1: how big is each data type? */
#include <stdio.h>

int main(void) {
    printf("char   : %zu byte\n",  sizeof(char));
    printf("int    : %zu bytes\n", sizeof(int));
    printf("float  : %zu bytes\n", sizeof(float));
    printf("double : %zu bytes\n", sizeof(double));
    return 0;
}
