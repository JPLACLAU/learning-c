#include <stdio.h>
#include <stdlib.h>

int power(int base, int n); // funci�n


int main()

{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

/* power: raise base to n-th power; n>=0; version 2 */
int power(int base, int n)
{
    int p;
    p = 1;
    for (; n > 0; --n)
        p = p * base;
    return p;
}