#include <stdio.h>

main()
{
int c;

while((c = getchar()) != EOF) {
    putchar(c);
}

printf("the EOF is: %c", c);
}