// Program 6.4c strdup
#include <string.h>  // strdup
#include <stdio.h>   // printf
#include <stdlib.h>  // free
 
int main(void)
{
    const char *hello = "Hello Gregorio!";
    char *hola = strdup(hello);
    printf("duplicated string = \"%s\"\n", hola);
    free(hola);
}


