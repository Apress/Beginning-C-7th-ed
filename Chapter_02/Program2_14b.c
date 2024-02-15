
/* Program 2.14b more auto examples */
#include<stdio.h>


int main (void) 
{

    //this code
	static auto a = 3.14;
	auto p = &a;

	//is the same than
	static double b = 3.14;
	double *pt = &b;

	return 0;
}


