
/* Program 2.14c  type-generic function */
#include<stdio.h>
#include <math.h>

/*
Remember to use the flag –lm to the frontend compiler-linker on Linux because most of them will not find
the math.h library and it must be declared explicitly in the command line. I has to be at the end of it:

	gcc-13 -std=c2x Program2_14c.c -lm

*/

int main (void)
{

	//Type inference of a call to a type-generic function:
	double x = 0.25;
	auto y = cos(x);

	printf("%f\n", y);

	return 0;
}


