// Program 10.1a        Exercising new formatted input 
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>


int main(void)
{

  int i = 0;
  int b = 0b0;

  fflush(stdin);             // Clear the input buffer
  
  printf("Input integer\n");
  scanf_s("%d", &i);
  printf("i = %d\n", i);
  
  printf("Input binary\n");
  scanf_s("%b", &b);
  printf("b = %b\n", b);  // print binary format
  printf("b = %d\n", b);  // print integer format  
  
  return 0;
}


