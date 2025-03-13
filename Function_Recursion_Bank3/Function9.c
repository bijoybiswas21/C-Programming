// Not a prototype as it does not contain the number
// and type of parameters. It is only declaration
int sum();

// Valid prototype as it contains function name,
// return type, number and type of parameters
int sum(int, int);

// Also a valid prototype
int sum(int a, int b);

// Function definition inherently contains function
// prototype
int sum(int a, int b) {
      return a + b;
}
