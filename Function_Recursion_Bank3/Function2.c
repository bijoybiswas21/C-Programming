// C program to implement
// the above approach
#include <math.h>
#include <stdio.h>

// Driver code
int main()
{
  double Number;
  Number = 49;

  // Computing the square root with 
  // the help of predefined C 
  // library function
  double squareRoot = sqrt(Number);
  
  printf("The Square root of %.2lf = %.2lf", 
          Number, squareRoot);
  return 0;
}