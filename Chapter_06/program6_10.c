// Program 6.10 Analyzing text
#define __STDC_WANT_LIB_EXT1__ 1            // Make optional versions of functions available
#include <stdio.h>
#include <string.h>

#define TEXT_LEN  10000                     // Maximum length of text
#define BUF_SIZE 100                        // Input buffer size
#define MAX_WORDS   500                     // Maximum number of different words
#define WORD_LEN     12                     // Maximum word length 

int main(void)
{
  char delimiters[] = " \n\".,;:!?)(";      // Word delimiters
  char text[TEXT_LEN] = "";                 // Stores the complete text
  char buf[BUF_SIZE];                       // Stores one input line
  char words[MAX_WORDS][WORD_LEN];          // Stores words from the text
  int nword[MAX_WORDS] = {0};               // Number of word occurrences
  int word_count = 0;                       // Number of words stored 


  printf("Enter text on an arbitrary number of lines.");
  printf("\nEnter an empty line to end input:\n");

  // Read an arbitrary number of lines of text
  while(true)
  {
    // An empty string containing just a newline
    // signals end of input
    fgets(buf, BUF_SIZE, stdin);
    if(buf[0] == '\n')
      break;

    // Concatenate new string & check if we have space for latest input
    if(strcat_s(text, TEXT_LEN, buf))
      {
        printf("Maximum capacity for text exceeded. Terminating program.\n");
        return 1;
      }
  }

  // Find  the first word
  size_t len = TEXT_LEN;
  char *ptr = NULL;
  char* pWord = strtok_s(text, &len, delimiters, &ptr);    // Find 1st word
  // use this line instead, for Microsoft compiler:
  //char* pWord = strtok_s(text, delimiters, &ptr);    // Find 1st word
  if(!pWord)
  {
    printf("No words found. Ending program.\n");
    return 1;
  }
  strcpy_s(words[word_count], WORD_LEN, pWord);
  ++nword[word_count++];

  // Find  the rest of the words
  bool new_word = true;                                    // False for an existing word
  while(true)
  {
    pWord = strtok_s(NULL, &len, delimiters, &ptr);        // Find subsequent word
    // use this line instead, for Microsoft compiler:
    //pWord = strtok_s(NULL, delimiters, &ptr);        // Find subsequent word
    if(!pWord)
      break;                                               // NULL ends tokenizing

   // Check for existing word 
   for(int i = 0 ; i < word_count ; ++i)
    {
      if(strcmp(words[i], pWord) == 0)
      {
        ++nword[i];
        new_word = false;
      }
    }
      
    if(new_word)                                           // True if new word
    {
      strcpy_s(words[word_count], WORD_LEN, pWord);        // Copy to array
      ++nword[word_count++];                               // Increment count and index
    }
    else
      new_word = true;                                     // Reset new word flag

    if(word_count > MAX_WORDS - 1)
    {
      printf("Capacity to store words exceeded.\n");
      return 1;
    }
  }
                                                               
  // List the words
  for(int i = 0; i < word_count ; ++i)
  {
    printf("  %-13s  %3d", words[i], nword[i]);
    if((i + 1) % 4 == 0)
      printf("\n");
  }
  printf("\n");

  return 0;
}
