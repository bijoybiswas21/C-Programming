//How can I return multiple values from a function?
//Answer: We can return multiple values from a function using a structure. We can create a structure that contains multiple values and return the structure from the function. The following example demonstrates how to return multiple values from a function using a structure.
// C program to return multiple values from a function
/*Ans:I'll help explain how to return multiple values from a function in C using different approaches. Here's an enhanced version of the program that demonstrates multiple methods:*/


/*#include <stdio.h>

// Method 1: Using a structure
struct Values {
    int num1;
    int num2;
    float avg;
};

struct Values getMultipleValues1(int x, int y) {
    struct Values result;
    result.num1 = x + 1;
    result.num2 = y + 1;
    result.avg = (x + y) / 2.0f;
    return result;
}

// Method 2: Using pointers as parameters
void getMultipleValues2(int x, int y, int *sum, float *avg) {
    *sum = x + y;
    *avg = (x + y) / 2.0f;
}

int main() {
    // Using Method 1: Structure
    struct Values v = getMultipleValues1(10, 20);
    printf("Method 1 (Structure):\n");
    printf("Number 1: %d\n", v.num1);
    printf("Number 2: %d\n", v.num2);
    printf("Average: %.2f\n\n", v.avg);

    // Using Method 2: Pointers
    int sum;
    float avg;
    getMultipleValues2(10, 20, &sum, &avg);
    printf("Method 2 (Pointers):\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
*/
/*This program demonstrates two common methods to return multiple values from a function in C:

Using Structures:

Define a structure containing all values you want to return
Return the structure from the function
Advantage: Clean and organized code
Disadvantage: Creates a copy of the structure when returning

Using Pointers:

Pass pointers as parameters to the function
Modify the values through pointers
Advantage: More efficient as it modifies values directly
Disadvantage: Can make code harder to read

Key points:

C functions can only return one value directly
Structures provide a way to package multiple values
Pointers allow modifying multiple values through parameters
Choose the method based on your specific needs:
Use structures for cleaner, more organized code
Use pointers for better performance with large data
*/
#include <stdio.h>

// Structure of multiple values
struct A {
    int a;
    char c;
};

// Function that returns struct A
struct A func() {
    struct A r;
    r.a = 10;
    r.c = 'z';
  
    // Return the struct
    return r;
}

int main() {
  
      // Storing the returned structure
    struct A res = func();
  
    printf("a = %d, c = %c\n", res.a, res.c);
    return 0;
}
