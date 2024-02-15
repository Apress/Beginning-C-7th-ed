
/* Program 2.14d  typeof keyword */
#include<stdio.h>

int main(void) 
{

    int x;         // int variable
    typeof(x) y;   /* Same type as x. Plain old int variable. */
    y = 314;

	int number = 98;
	int *pnumber = &number;

	//variable i with same type of what x points to.
    typeof (*pnumber) i;
     
    //This declares y as an array of such values.
	typeof (*pnumber) z[5] = { 3, 1, 4, 1, 5 };
     
    printf("y = %d  i = %d  z[4] = %d\n", y, i, z[4]);


    return 0;
}

