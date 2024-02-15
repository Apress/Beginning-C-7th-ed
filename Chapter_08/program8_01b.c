/* Program 8.1b function with no list of parameters without using void keyword */
#include <stdio.h>

void qux()
{
  printf("function called with an implicit void (no list of parameters at all).\n");
}

int main(void)
{
  qux();

  return 0;
}


