// Program 5.7 Averaging a variable number of grades grades
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  size_t nGrades = 0;                           // Number of grades
  printf("Enter the number of grades: ");
  scanf("%zd", &nGrades);
  int grades[nGrades];                          // Array storing nGrades values
  long sum = 0L;                                // Sum of the numbers
  float average = 0.0f;                         // Average of the numbers

  printf("\nEnter the %zd grades:\n", nGrades); // Prompt for the input

  // Read the ten numbers to be averaged
  for(size_t i = 0 ; i < nGrades ; ++i)
  {
    printf("%2zd> ",i + 1);
    scanf("%d", &grades[i]);                    // Read a grade
    sum += grades[i];                           // Add it to sum
  }

  printf("The grades you entered are:\n");
  for(size_t i = 0 ; i < nGrades ; ++i)
  {
    printf("Grade[%2zd] = %3d  ", i + 1, grades[i]);

    if((i+1) % 5 == 0)                          // After 5 values
      printf("\n");                             // Go to a new line                    
  }

  average = (float)sum/nGrades;                 // Calculate the average

  printf("\nAverage of the %zd grades entered is: %.2f\n", nGrades, average);

  return 0;
}
