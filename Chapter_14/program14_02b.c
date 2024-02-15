// Program 14.2b 16-bit to multibyte character representation (c16rtomb)
#include <stdio.h>
#include <uchar.h>


int main(void)
{
  char16_t str16[] = u"This is a UTF-16 string.";
  char strmb[100];
  char *pstrmb = strmb;
  size_t n = 0; // Return value from conversion
  size_t i = 0; // char16_t array index

  while(true)
  {
    n = c16rtomb(pstrmb, str16[i++], NULL);
    if(n == (size_t)-1)
    {
      printf("Encoding error.\n");
      break;
    }
    else if(n == 0)
      continue; // 1st of two elements for code processed
    else if(str16[i-1] == u'\0')
      break; // Null string terminator so we are done
    else
      pstrmb += n; // n bytes stored
  }

  return 0;
}


