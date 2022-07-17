#include <stdio.h>

main()
{
    long nc;

    nc = 0;

    while (getchar() != EOF)
        ++nc;

    printf("\n");
    printf("%ld\n", nc);
}