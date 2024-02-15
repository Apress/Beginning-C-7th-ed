// Program 13.1e diagnostic directives
#include <stdio.h>

//  An unspecified value larger than 201710L is used for the experimental -std=c2x and -std=gnu23 modes.

#if __STDC_VERSION__ <= 201710L
    #error "using C17 or less compliant compiler."
#elif __STDC_VERSION__ > 201710L
    #warning "using gcc compiler C23 complaint"
#endif

#if __STDC_VERSION__ == 202000L
    #warning "using gcc-13 (or 12) compiler C23 mode"
#elif __STDC_VERSION__ >= 202311L
    #warning "using a C23 complaint compiler"
#endif
 
#include <stdio.h>
int main (void)
{
    //printf("__STDC_VERSION__ = %ld\n", __STDC_VERSION__);
    printf("Hello Gregorio!\n");
}


