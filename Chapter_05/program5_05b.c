// Program 5.5b modifying constant array
#include <stdio.h>

// Values of the pieces: pawn=1, knight=3, bishop=3, rook=5, queen=9, king_black=-1
// these constants are redundant for educational purpose
#define king_black -1 // (black)
#define pawn 1
#define knight 2
#define bishop 3
#define rook 4
#define queen 5

//white pieces respectively: (these are deduced below)
// -2 6 7 8 9 10

int main(void)
{
  const int values[6] = {0, 1, 3, 3, 5, 9}; // pieces' values

  int board[8][8] = { // chessboard
	  { 0, 0, 4, 0,-1, 0, 0, 0,},
	  { 4, 0, 0, 2, 5, 0, 1, 0,},
	  { 1, 0, 0, 0, 1, 0, 0, 1,},
	  { 0, 0, 1, 0, 0, 0, 0, 0,},
	  { 0, 0, 0, 1, 6, 6, 0, 0,},
	  { 0, 0, 0, 0, 0, 0, 0,10,},
	  { 6, 6, 0, 0, 8, 0, 6, 6,},
	  { 0, 0, 9, 0,-2, 9, 0, 0,}  
  }; 

  int score = 0;
  
  for(int i=0; i<8; i++) 
  {
    for(int j=0; j<8; j++) 
    {
      //we separate colors:
      int square = board[i][j];
  	  if(square>=0) //we avoid kings
        if(square<6)
          score += values[square]; // black pieces
        else
          score -= values[square % 6]; // white pieces
	  }
  }

  
  printf("Bobby Fischer (White) vs Boris Spassky (Black).\n");
  printf("\nScore : %d\n", score);
  
  if(score>0) printf("\nSpassky is winning to Fischer");
  else printf("\nFischer is winning to Spassky");
  
  printf("...for now !\n");
  
  return 0;
}

