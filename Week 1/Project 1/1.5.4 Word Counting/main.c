#include <stdio.h>
#include <stdlib.h>

#define IN 1  /* INSIDE A WORD */
#define OUT 0 /* OUTSIDE A WORD */

/* count lines, words, and chars in input */

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) !=EOF) {
        ++nc;
        if (c =='\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state == OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);


}
