/* Program 2.8c */

#include <stdio.h>
#include <math.h>

int main(void)
{

    constexpr int n = 2 + 7; // compile time constant
    int a[n] = { 1, 2, 3 }; // ok 

     printf("== %d\n", a[2]);

    return 0;
}

