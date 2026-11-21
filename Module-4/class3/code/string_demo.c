#include <stdio.h>
#include <string.h>

int main(void)
{
    char w[6] = "HELLO";
    for (int i = 0; w[i] != '\0'; i++)
        printf("%c", w[i]);
    printf("\n");

    char c[] = "CAT";
    int n = 0;
    while (c[n] != '\0')
        n++;
    printf("length = %d\n", n);

    char b[] = "BANANA";
    int count = 0;
    for (int i = 0; b[i] != '\0'; i++)
        if (b[i] == 'A')
            count++;
    printf("A appears %d times\n", count);

    char s[] = "STAR";
    int i = 0, j = 3;
    while (i < j)
    {
        char t = s[i]; s[i] = s[j]; s[j] = t;
        i++; j--;
    }
    printf("reversed = %s\n", s);

    char p[] = "MADAM";
    int a = 0, z = 4, ok = 1;
    while (a < z)
    {
        if (p[a] != p[z]) ok = 0;
        a++; z--;
    }
    printf("palindrome = %d\n", ok);

    char x[4] = "CAT";
    char y[6];
    strcpy(y, x);
    strcat(y, "S");
    printf("%s\n", y);
    printf("strcmp = %d\n", strcmp("CAT", "CAT"));
    return 0;
}
