// Program 6.5a searching strings
#include <stdio.h>
#include <string.h>

int main(void)
{
  const char str[] = "The quick brown fox";    // The string to be searched
  char ch = 'q';                         // The character we are looking for
  char *pGot_char = NULL;                // Pointer initialized to NULL
  pGot_char = strchr(str, ch);           // Stores address where ch is found

  if(pGot_char)
  {
    printf("Character found was '%c'.\n", *pGot_char);
    printf("The substring beginning with '%c' is: \"%s\"\n", ch, pGot_char);
  }

  return 0;
}


