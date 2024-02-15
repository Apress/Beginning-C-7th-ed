
/* Program2_06c _Decimal32 _Decimal64 */
#include<stdio.h>

int main(void) 
{

    // indicates IEEE-754 decimal floating-point arithmetic and required math functions are supported. 
    printf("__STDC_IEC_60559_DFP__ = %ld\n", __STDC_IEC_60559_DFP__);

    //this is only supported by gcc
    _Decimal64 d = 3.1415DD;
    //this still is not supported by gcc:
    printf("d = %Df\n", d);

    //this is only supported by gcc
    _Decimal32 e = 2.71828D;
    //this still is not supported by gcc:
    printf("e = %Hf\n", e);

    return 0;
}


