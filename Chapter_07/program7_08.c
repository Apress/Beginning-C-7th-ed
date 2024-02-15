// Program 7.8  Getting values in a two-dimensional array
#include <stdio.h>

int main(void)
{
  //first test
 char board[3][3] = {
                       {'1','2','3'},
                       {'4','5','6'},
                       {'7','8','9'}
                     };

  //second test
  /*char board[3][3] = {
                       {'9','8','7'},
                       {'6','5','4'},
                       {'3','2','1'}
                     };*/

  // List all elements of the array
  for(int i = 0 ; i < 9 ; ++i)
  {
    //printf(" board: %c\n", *(*board + i));
    printf(" board: %c\n", **board + i); 
  }

  return 0;
}

