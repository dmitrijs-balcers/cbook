#include <stdio.h>

#define COLUMNS 4

void detab(int in) {
    if (in == '\t') {
        int i = 0;
        while(i < COLUMNS) {
            printf("s");
            ++i;
        }
    } else {
        putchar(in);
    }
}

main() {
    int c;
    while ((c = getchar()) != EOF)
    {
        detab(c);
    }
    
}