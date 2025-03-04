#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int add = sum(4, 8);
    printf("sum is :%d", add);
    return 0;
}

/*Call by Value

Passes a copy of the value
Original variable remains unchanged
Call by Reference

Passes memory address
Can modify original variables
Array Parameters

Arrays are always passed by reference
Changes affect original array
Struct Return

Returns multiple values using structure
Clean way to handle multiple return values
Function Pointers

Passes functions as parameters
Enables callback functionality*/