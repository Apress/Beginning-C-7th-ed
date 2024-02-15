/* Example 9.8c fallthrough attribute */
#include <stdio.h>

void fall(int n) 
{

  switch (n) 
  {
    case 0:
    case 1:
      printf("1\n");
    case 2:
      printf("2\n");
     [[fallthrough]];
    case 3:
      printf("3\n");
    case 4: 
      if(n < 3) 
      {
        printf("4\n");
        [[fallthrough]];
      }
    default:
      printf("default\n");  
  }
}
 
int main(void)
{
    fall(0);
    
    return 0;
}


