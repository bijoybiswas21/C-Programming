/*Using Arrays
If the multiple values to be returned are of same type, then the array of these values can be returned. But it is to be noted that the array should be either declared as static or should be dynamically allocated so that they don’t get destroyed when the function ends.
*/
#include <stdio.h>

int* func() {
      
      // Creating static array
      static int arr[2] = {10, 20};
    
      // Returning multiple values using static array
      return arr;
}
int main() {
  
    // Store the returened array
    int* arr = func();  
    printf("%d %d", arr[0], arr[1]);
    return 0;
}
/*Using Pointers
This method is technically not for returning but writing the result of the function in the address (pointers) already passed as parameters. It is an alternative to returning structures or arrays.
*/
/*#include <stdio.h>


void foo(int* a, char* c) {
  
      // Writing data to passed addresses
    *a = 20;
      *c = 'z';
}

int main() {
    int a;
      char c;
      foo(&a, &c);
  
    printf("a = %d, c = %d", a, c);
    return 0;
}
*/