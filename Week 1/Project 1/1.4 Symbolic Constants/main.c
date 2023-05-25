#include <stdio.h>
#include <stdlib.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print F-C table*/



int main()
{
int fahr;
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d #6.1\n", fahr, (5.0/9.0)*(fahr-32));
}
