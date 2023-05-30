//C Program to calculate Sum of Digits of a Number using While Loop
//Header Files
#include <stdio.h>
// Start of main function
int main()
{
  // Varibale Declaration
  int Number, Remainder, Sum=0;
  // Output Statement (prompt)
  printf("\n Please Enter any number\n");
  //Input Statement
  scanf("%d", &Number);
  // Logic of Program
  while(Number > 0)
  {
     Remainder = Number % 10;
     Sum = Sum+ Remainder;
     Number = Number / 10;
  }
  printf("\nSum of the digits of Given Number = %d", Sum);
  return 0;
}
