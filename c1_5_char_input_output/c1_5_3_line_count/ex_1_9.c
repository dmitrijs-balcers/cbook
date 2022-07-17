#include <stdio.h>

main()
{
    int c_prev;
    int c;

    while((c = getchar()) != EOF)
        if (c != ' ' || c != c_prev) {
            putchar(c);
            c_prev = c;
        }
}