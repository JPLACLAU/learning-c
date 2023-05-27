#include <stdio.h>
#include <stdlib.h>

/* count lines, tabs, and blanks in input */
/* Exercise 1-9: Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank. */

int main()
{
    int c, nl, blank, tab, lastChar;

    nl = 0;
    blank = 0;
    tab = 0;
    lastChar = ' '; //initialize with a blank

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;

        else if (c == ' ') {
            if (lastChar != ' ')
                putchar(c);
                ++blank;
        }
        else { putchar(c);}

        lastChar = c; // store last character for comparison

    }

    printf("Lines: %d\n", nl);
    printf("Tabs: %d\n", tab);
    printf("Blanks: %d\n", blank);

    return 0;
}
