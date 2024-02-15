
/* Program 2.8a defines several macros for performing checked integer arithmetic.*/
#include<stdio.h>
#include<stdckdint.h> 

// NOT IMPLEMENTED YET
int main(void) 
{

    // indicates IEEE-754 decimal floating-point arithmetic
    // is an integer constant expression with a value equivalent to 202311L.
    printf("__STDC_VERSION_STDCKDINT_H__ = %ld\n", __STDC_VERSION_STDCKDINT_H__);

   
    //EXAMPLE 1 If a and b are values of type signed int, and result is a signed long, then
    signed int a = 15;
    signed int b = 2;
    signed long result;

    bool is_ok = ckd_sub(&result, a, b);  // or ckd_add

    printf("== %l\n", result);
    printf("== %d\n", is_ok);

    return 0;
}


