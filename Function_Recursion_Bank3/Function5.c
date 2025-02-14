// C Program to illustrate the use of user-defined function
#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
	int sum;
	sum = x + y;
	return x + y;
}

// Driver code
int main()
{
	int x = 10, y = 11;

	// Function call
	int result = sum(x, y);
	printf("Sum of %d and %d = %d ", x, y, result);

	return 0;
}
