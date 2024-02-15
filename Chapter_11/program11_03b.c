// Program 11.3b alignof

#include <stdio.h>
//#include <stdalign.h>  //not necesarry anymore by becoming a keyword
 
int main(void)
{
  int array5[5];
  double array10[10];

  printf("alignment short: %zu\n", alignof(short));
  printf("alignment array_5: %zu\n", alignof(array5));
  printf("alignment array_10: %zu\n", alignof(array10));

  return 0;
}

