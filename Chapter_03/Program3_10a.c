/* Program 10a _BitInt example */
// compile with: clang-16 -std=c2x Program3_10a.c
#include<stdio.h>
#include<limits.h>

int main(void) 
{

    _BitInt (4) x = 7wb;
    unsigned _BitInt (4) y = 12uwb;

    printf("not bigger than %d\n", BITINT_MAXWIDTH);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    /*
    bitint.c:16:23: warning: format specifies type 'int' but the argument has type '_BitInt(4)' [-Wformat]
        printf("== %d\n", y);
                ~~     ^
    */

    return 0;
}

