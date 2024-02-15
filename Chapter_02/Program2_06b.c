
/* Program2_06b.c digit separator example */
#include<stdio.h>

/*

Digit separator '  (binary/hex/int separator 0b11'10'10)

*/

int main(void) 
{

    int c = 0b10'10'10'10; // C23
    printf("binary = %b\n", c);

    unsigned long long prime = 1'234'567'654'321'234'567llu; // C23

    printf("prime = %lld\n", prime);


    return 0;
}


