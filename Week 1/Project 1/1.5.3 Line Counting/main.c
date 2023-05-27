#include <stdio.h>
#include <stdlib.h>

/* count lines, tabs, and blanks in input */
/* Exercise 1-10: Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way
*/
/* borro todo lo anterior para este 1-10 */


int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\\b') // backspace
        {
            putchar('\\');
            putchar('b');
        } // este no me sale
        else
        {
            putchar(c);
        }
    }

}
