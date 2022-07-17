#include <stdio.h>

main()
{
    int c;
    int blanks = 0;
    int tabs = 0;
    int new_lines = 0;

    while((c = getchar()) != EOF)
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++new_lines;

    printf("blanks %d\n", blanks);
    printf("tabs %d\n", tabs);
    printf("new_lines %d\n", new_lines);
}