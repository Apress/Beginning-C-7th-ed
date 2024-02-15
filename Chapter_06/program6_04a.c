// Program 6.4a memset_explicit
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    char msg[] = "Welcome1# is my password";

    printf("before: %s\n", msg);
   
    //memset_explicit(msg, '.', 9);  //gcc-13 still doesn't implement it
    memset(msg, '.', 9);

    printf("after : %s\n", msg);

    return 0;
}


