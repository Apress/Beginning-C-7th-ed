// Program 14.3 Working with complex numbers
#define __STDC_WANT_LIB_EXT1__ 1
#include <complex.h>
#include <stdio.h>

int main(void)
{
#ifdef __STDC_NO_COMPLEX__
  printf("Complex numbers are not supported.\n");
  exit(1);
#else
  printf("Complex numbers are supported.\n");
#endif
//  #ifdef __STDC_IEC_559_COMPLEX__
  #ifdef __STDC_IEC_60559_COMPLEX__
   printf("Complex and Imaginary arithmetic is supported with IEC 60559.\n");
#else
   printf("Complex and Imaginary arithmetic is NOT supported with IEC 60559.\n");
#endif
  double complex cx = 1.0 + 3.0*I;
  double complex cy =  CMPLX(1.0, -4.0);
  //double complex cy = 1.0 - 4.0*I;
  printf("\nWorking with complex numbers:\n");
  printf("Starting values: cx = %.2f%+.2fi  cy = %.2f%+.2fi\n",
                                        creal(cx), cimag(cx), creal(cy), cimag(cy));

  double complex  sum = cx+cy;
  printf("\nThe sum cx + cy = %.2f%+.2fi\n", creal(sum),cimag(sum));

  double complex  difference = cx-cy;
  printf("The difference cx - cy = %.2f%+.2fi\n", creal(difference),cimag(difference));

  double complex product = cx*cy;
  printf("The product    cx * cy = %.2f%+.2fi\n", creal(product),cimag(product));

  double complex quotient = cx/cy;
  printf("The quotient   cx / cy = %.2f%+.2fi\n", creal(quotient),cimag(quotient));

  double complex conjugate = conj(cx);
  printf("\nThe conjugate of cx =  %.2f%+.2fi\n", creal(conjugate) ,cimag(conjugate));
  
  return 0;
}

