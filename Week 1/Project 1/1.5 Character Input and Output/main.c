#include <stdio.h>
#include <stdlib.h>


/* copy input to output; 1st version */

int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    // Check the result of the expression
    if (c == EOF)
    {
        printf("Expression is 0\n");

    }
    else
    {
        printf("Expression is 1\n");

    }
    // print EOF value
    printf("EOF value is: %d\n", EOF);
    // print c value, should be c = EOF
    printf("c value is: %d\n", c);


    return 0;
}
