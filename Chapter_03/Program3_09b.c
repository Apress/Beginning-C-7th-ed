// Program 3.9b swaping two integers wit bitwise "trick"
#include <stdio.h>

int main(void)
{
  int x = 1;
  int y = 3;

  
  printf("original values: ");
  printf("x = %d , y = %d", x, y);

  x ^= y;
  y = x ^ y;
  x ^= y;

  printf("\n\nswapped values: ");
  printf("x = %d , y = %d", x, y);


  return 0;
}

