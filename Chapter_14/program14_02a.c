// Program 14.2a multibyte character representation to 16-bit (mbrtoc16)
#include <stdio.h>
#include <uchar.h>
#include <stdlib.h>


int main(void)
{
  /* There is an expected warning in gcc:
   program14_02a.c: In function ‘main’:
   program14_02a.c:13:15: warning: pointer targets in initialization of ‘char *’ from ‘unsigned char *’ differ in signedness [-Wpointer-sign]
       char *str = u8"This is a multibyte string.";*/
  char *str = u8"This is a multibyte string.";
  char *pstr = str; // Pointer to multibyte string
  size_t n = 0; // Return value from conversion
  char16_t str16[100];
  char16_t *pstr16 = str16; // Pointer to char16_t string
  mbstate_t state; // Struct that records conversion state
  
  while((pstr < str + sizeof(str)) && // Before source string end
        (pstr16 < str16 + sizeof(str16)/sizeof(char16_t)) && // and before destination string end
        (n = mbrtoc16(pstr16, pstr, MB_CUR_MAX, &state)))
  {
    if(n == (size_t)-1)
    {
      printf("Encoding error.\n");
      break;
    }
    else if(n == (size_t)-2)
    {
      printf("Incomplete multibyte character.\n");
      break;
    }
    else if(n == (size_t)-3)
    { // Second character so no new conversion
      printf("Second UTF-16 stored.\n");
      ++pstr16; // Increment destination pointer
    }
    else
    { //Increment source and destination string pointers
      ++pstr16;
      pstr += n;
    }
  }

  return 0;
}


