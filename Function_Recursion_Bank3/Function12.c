#include <stdio.h>

// Function that doesn't specify return type
foo(float x, float y) {
   
       // Returning float
    return x + y;
}

int main() {
    float res;
  
    // Implicit conversion from float to int
      // which may cause issues
    res = foo(10.5, 4.4);  
  
    // Print
    printf("%f\n", res);  
    return 0;
}
