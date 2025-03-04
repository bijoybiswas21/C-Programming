#include <stdio.h>

// Function prototypes
int square(int num);
int cube(int num);
void modifyValue(int x);

// Function to calculate square using call by value
int square(int num) {
    return num * num;
}

// Function to calculate cube using call by value
int cube(int num) {
    return num * num * num;
}

// Function to demonstrate that original value remains unchanged
void modifyValue(int x) {
    printf("Inside function before modification: %d\n", x);
    x = x * 2;  // Modifying the parameter
    printf("Inside function after modification: %d\n", x);
}

int main() {
    // Test variables
    int number = 5;
    
    // Demonstrate call by value with square function
    printf("\nSquare calculation:\n");
    printf("Original number: %d\n", number);
    printf("Square of %d is: %d\n", number, square(number));
    printf("Original number after square calculation: %d\n", number);
    
    // Demonstrate call by value with cube function
    printf("\nCube calculation:\n");
    printf("Original number: %d\n", number);
    printf("Cube of %d is: %d\n", number, cube(number));
    printf("Original number after cube calculation: %d\n", number);
    
    // Demonstrate that original value remains unchanged
    printf("\nModify value demonstration:\n");
    printf("Before function call: %d\n", number);
    modifyValue(number);
    printf("After function call: %d\n", number);  // Value remains unchanged
    
    return 0;
}