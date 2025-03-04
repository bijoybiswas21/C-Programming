// Call by value and Call by Reference
// C program to show use of
// call by value
/*#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Driver code
int main()
{
	int x = 10, y = 20;
	printf("Values of x and y before swap are: %d, %d\n", x,
		y);
	swap(x, y);
	printf("Values of x and y after swap are: %d, %d", x,
		y);
	return 0;
}
// C program to implement
// Call by Reference
#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Driver code
int main()
{
	int x = 10, y = 20;
	printf("Values of x and y before swap are: %d, %d\n", x,
		y);
	swap(&x, &y);
	printf("Values of x and y after swap are: %d, %d", x,
		y);
	return 0;
}*/