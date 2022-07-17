#include <stdio.h>

int strlen(char *s);

main() {
    char str[] = "hellow, world";
    char *pstr;
    pstr = &str[3];
    printf("length: %d\n", strlen(pstr));
}

int strlen(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;

    return n;
}