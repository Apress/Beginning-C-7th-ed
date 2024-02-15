// Program 11.1a Exercising the horse
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

struct Horse
{
  int age;
  int height;
};

void showInfo(struct Horse equine) 
{ 
  printf("age: %d, height: %d\n", equine.age, equine.height); 
} 

int main(void)
{ 
  showAge( (struct Horse){21, 17} ); 

  return 0; 
} 

