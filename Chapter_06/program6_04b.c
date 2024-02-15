// Program 6.4b memccpy
#include <string.h>  // strdup
#include <stdio.h>   // printf

int main(void)
{
    const char src[] = "Joy Division from Salford cannot see this.";
    char dest[sizeof src];
    const char stopper = '!';
    void* ptr = memccpy(dest, src, stopper, sizeof dest);
    char *is_found;
    
    is_found = ptr ? "" : "not";
    
    printf("Character %s found: %s\n", found, dest);
   
    return 0;
}


