/* Program 2.8d */

#include <stdio.h>
#include <math.h>

int main(void)
{
    constexpr int i = 12;

    struct X {
        int bf : i;
    };

    struct S {
        long l;
    };

    constexpr struct S s = { 1L };
    constexpr struct X x = { 3L };

    //constexpr unsigned char q = 0xff + i; // not ok. initializer not representable in type of object
    constexpr int q = 0xff + i; // ok


    printf("q== %d\n", q);

    return 0;
}


