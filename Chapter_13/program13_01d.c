// Program 13.1d Debugging using preprocessing directives
#include <stdio.h>
#include <assert.h>

int main(void)
{
#line 314 "qux.c"
    assert( 3 < 2 );
    printf("Hello World!");
    return 0;
}

