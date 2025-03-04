// C program to show 
// user-defined functions
#include <stdio.h>

int sum(int a, int b) 
{ 
  return a + b; 
}

// Driver code
int main()
{
  int a = 30, b = 40;
 
  // function call
  int res = sum(a, b);

  printf("Sum is: %d", res);
  return 0;
}