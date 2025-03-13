//Write a C program to calculate the area of a rectangle using user input.

#include <stdio.h>
int main() {
    float length, width, area;

    // Input length and width of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculate area of rectangle
    area = length * width;

    // Print area of rectangle
    printf("Area of rectangle = %f sq. units\n", area);

    return 0;
}
