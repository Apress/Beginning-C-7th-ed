/* Example 9.8d maybe_unused attribute */
#include <stdio.h>

void fall(int n) 
{
  [[maybe_unused]] int i;
  // int i;  // warning when using -Wunused-variable or -Wall at compilation time

  printf("1\n");
}
 
int main(void)
{
    fall(0);

    printf("ok.\n");
    
    return 0;
}


