// Program 7.3a  Using nullptr
#include <stdio.h>
#include <stddef.h> //nullptr

int main (void) 
{


	int *pvalue1 = NULL;
	int *pvalue2 = 0;
	int *pvalue3 = nullptr;
	
	printf("ptr: %p\n", pvalue1);
	printf("ptr: %p\n", pvalue2);
	printf("ptr: %p\n", pvalue3);

	if(!pvalue3)
	{
		printf("ptr3 nullptr !!!\n");
	}

	return 0;
}

