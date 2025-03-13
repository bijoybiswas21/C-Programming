//Callbacks in C
#include <stdio.h>

void A() { 
  printf("I am function A");
}

// Callback function
void B(void (*ptr)()) {
  
      // Callback to A
    (*ptr)(); 
}

int main() {
  
      // Function pointer to A()
    void (*ptr)() = &A;

    // Calling function B and passing
    // address of the function A as argument
    B(ptr);

    return 0;
}
/*
#include <stdio.h>

// Callback function to compare two numbers
int comp(int a, int b) {
    if (a > b) return a;
    return b;
}

// Function that accepts a callback for comparison
void Max(int (*callback)(int, int), int x, int y) {
  
    // Calls the callback function
    int res = callback(x, y);  
    printf("%d", res);
}

int main() {
    int x = 7, y = 10;

    // Pass the compareNumbers function as callback
    Max(comp, x, y);

    return 0;
}

//Callback for Simple Calculator

/*#include <stdio.h>

// Callback functions
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}

// General calculator function that accepts a callback
void calc(int a, int b, int (*op)(int, int)) {
  
      // Call the callback function
    printf("%d\n", op(a, b));
}

int main() {
    int n1 = 10, n2 = 5;

    // Using the calculator with addition
    printf("Addition: ");
    calc(n1, n2, add);

    // Using the calculator with subtraction
    printf("Subtraction: ");
    calc(n1, n2, sub);

    return 0;
}

*/