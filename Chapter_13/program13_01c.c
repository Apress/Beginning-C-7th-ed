// Program 13.1c unreachable
// check output with: echo $?
#define __STDC_WANT_LIB_EXT1__ 1

#include <stddef.h>
#include <stdio.h>

int main (int argc, char* argv[static argc + 1]) 
{
  
  if (argc <= 2)
    unreachable();
  else
    return printf("%s: we see %s\n", argv[0], argv[1]);

  return puts("this should never be reached");
}

