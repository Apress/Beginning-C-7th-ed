/* Program 8.1a Kernighan & Ritchie old fashion function declaration and definition */
#include <stdio.h>

// K&R syntax (removed since C23)
int foo(s, f)
  char* s;
  float f;
{
  return 5;
}

int bar(char* s, float f) 
{
  return 5;
}


int main(void)
{
  printf("Hello world!\n");
  return 0;
}


