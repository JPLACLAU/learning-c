#include <stdio.h>
#include <stdlib.h>

/* print Farhenheit-Celsius table */

int main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr -20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    /* E1-5: reverse order */
}
