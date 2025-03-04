#include <stdio.h>

// Function prototypes
void swapNumbers(int* x, int* y);
void incrementNumber(int* num);
void multiplyByTen(int* value);

// Function to swap two numbers using call by reference
void swapNumbers(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to increment number by 1
void incrementNumber(int* num) {
    *num = *num + 1;
}

// Function to multiply number by 10
void multiplyByTen(int* value) {
    *value = *value * 10;
}

int main() {
    // Test variables
    int a = 10, b = 20;
    int number = 5;
    
    // Demonstrate swap function
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swap: a = %d, b = %d\n\n", a, b);
    
    // Demonstrate increment function
    printf("Before increment: number = %d\n", number);
    incrementNumber(&number);
    printf("After increment: number = %d\n\n", number);
    
    // Demonstrate multiply function
    printf("Before multiply: number = %d\n", number);
    multiplyByTen(&number);
    printf("After multiply: number = %d\n", number);
    
    return 0;
}