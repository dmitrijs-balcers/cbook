#include <stdio.h>

#define OUT 0
#define IN  1

/*
Welcome to the website. If you're here, you're likely looking to find random words. 
Random Word Generator is the perfect tool to help you do this. While this tool isn't 
a word creator, it is a word generator that will generate random words for a variety of activities or uses. 
Even better, it allows you to adjust the parameters of the random words to best fit your needs. 
aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa 
aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa 
aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaa
*/

main()
{
    int c, i, STATE, wlength;
    int nwords[11];

    wlength = 0;

    STATE = OUT;

    for (i = 0; i < 11; ++i)
        nwords[i] = 0;

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\t' && c != '\n') {
            STATE = IN;
            ++wlength;
        } else {
            STATE = OUT;
            if (wlength <= 10) {
                ++nwords[wlength - 1];
            } else {
                ++nwords[10];
            }
            wlength = 0;
        }

    printf("\nWord horizontal histogram:\n");
    printf("------------------\n");

    int largest = 0;

    for (i = 0; i < 11; ++i)
        if (largest < nwords[i]) largest = nwords[i];

    for (i = 0; i < 11; ++i) {
        (i<10) ? printf("%3d ", i + 1) : printf(">10\t");

        // we will have 10 chars to represent the element 
        int relative_to_largest = (nwords[i] / (float)largest) * 10;
        int j;

        for (j = 0; j < relative_to_largest; ++j)
            putchar('x');
        
        printf("\n");
    }

    printf("------------------\n");

    printf("\nWord vertical histogram:\n");
    printf("-----------\n");

    for (i = 10; i > 0; --i) {
        int j;
        for (j = 0; j < 11; ++j) {
            int relative_to_largest = (nwords[j] / (float)largest) * 10;
            printf((relative_to_largest >= i) ? "x" : " ");
        }
        printf("\n");
    }

    printf("-----------\n");
}
        