// Program 5.5c compound literal examples
#include <stdio.h>

int irrational(const int pi[], int n)
{
  int result = 0;

  for(int i=0; i<n; i++)
    result = result + pi[i];

  return result;
}

int main(void)
{

  int i = (int){18};
  printf("i.   %d\n", i);
  
  int *p = (int []){1, 2, 3};
  printf("ii.  %d %d %d\n", p[0], p[1], p[2]);
  
  int *pt = (int []){4, 5}; // pt points to the first element of this array
  const int *q = &(const int){6}; // likewise
  printf("iii. %d\n", *pt);
  printf("iv.  %d\n", *q);

  int total = irrational((int []){3,1,4,1,5,9}, 6);
  printf("v.   irrational = %d\n", total);

   return 0;
}


