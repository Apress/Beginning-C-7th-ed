/* Example 9.8a noreturn attribute */
#include <stdio.h>
#include <stdlib.h>

//[[ noreturn ]] void f(){ exit(0); }
void noret()
{ 
  printf("qux\n");

  exit(0); //forcing end without return
  // [[noreturn]] void exit( int exit_code ); 	(since C23)
}


int main(void) 
{

  noret();

  return EXIT_FAILURE;
}


