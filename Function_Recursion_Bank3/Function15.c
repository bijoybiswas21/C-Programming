#include <stdio.h>

// 1. Call by value
int squareByValue(int num) {
    return num * num;
}

// 2. Call by reference
void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. Call by array
void modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

// 4. Function returning multiple values using struct
struct Result {
    int sum;
    int product;
};

struct Result calculateBoth(int a, int b) {
    struct Result res = {a + b, a * b};
    return res;
}

// 5. Function pointer example
int operate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // 1. Call by value example
    int num = 5;
    printf("Square of %d is %d\n", num, squareByValue(num));

    // 2. Call by reference example
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // 3. Array parameter example
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    modifyArray(arr, size);
    printf("\nModified array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    // 4. Struct return example
    struct Result res = calculateBoth(5, 3);
    printf("\nSum: %d, Product: %d\n", res.sum, res.product);

    // 5. Function pointer example
    printf("Addition using function pointer: %d\n", 
           operate(10, 5, add));
    printf("Multiplication using function pointer: %d\n", 
           operate(10, 5, multiply));

    return 0;
}