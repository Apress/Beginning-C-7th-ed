// Program 6.5b searching strings
#include <stdio.h>
#include <string.h>

int main(void)
{

  char str[] = "Peter piper picked a peck of pickled pepper."; // The string to be searched
  char ch = 'p';                            // The character we are looking for
  char *pGot_char = str;                    // Pointer initialized to string start
  int count = 0;                            // Number of times found

  while(pGot_char = strchr(pGot_char, ch))  // As long as NULL is not returned...
  {                                         // ...continue the loop.
    ++count;                                // Increment the count
    ++pGot_char;                            // Move to next character address
  }

  printf("The character '%c' was found %d times in the following string:\n\"%s\"\n", ch, count, str);


  return 0;
}


