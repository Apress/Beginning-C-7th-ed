// Program 6.1a Check C23 version
#include <stdio.h>
#include <math.h>

int main(void)
{
	//this line shouldn't compile in MS Visual Studio, comment it if necessary
	printf("__STDC_VERSION__ = %ld\n", __STDC_VERSION__);
	printf("__STDC_VERSION_MATH_H__ = %ld\n", __STDC_VERSION_MATH_H__);  // it is not impl in gcc/clang, but in PellesC
	//printf("__STDC_VERSION_STRING_H__ = %ld\n", __STDC_VERSION_STRING_H__);  // it is not impl in gcc/clang/PellesC
	
#if defined __STDC_LIB_EXT1__
  printf("Optional functions are defined.\n");
#else
  printf("Optional functions are not defined.\n");
#endif

  return 0;
} 

