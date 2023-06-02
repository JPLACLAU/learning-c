#include <stdio.h>

/* Exercise 1-17. Write a program to print all input lines that are longer than 80
characters. */

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print all input lines that are longer than 80 characters */
int main()
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80) {   // solo printea lines con mas de 80 characters
            printf("Line length: %d\n", len);
            printf("Line text (first %d characters): %s\n", MAXLINE, line);
        }
    }
    return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i, j;

    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) {
            s[j++] = c;
        }
    }
    if (c == '\n') {
        if (i < lim - 1) {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to': assume to is big enough */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
