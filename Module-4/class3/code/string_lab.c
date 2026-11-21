#include <stdio.h>

int main(void)
{
    char name[20];
    printf("Enter one word: ");
    scanf("%s", name);

    int n = 0;
    while (name[n] != '\0')
        n++;

    printf("Hello %s, your word has %d letters\n", name, n);
    return 0;
}
