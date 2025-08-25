// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers seperated by a white space: ");
    scanf("%f %f", &a, &b);
    printf("Before swap: %.2f, %.2f \n", a, b);
    a = a + b;
    b =  a - b;
    a = a - b;
    printf("After swap: %.2f, %.2f", a, b);
    return 0;
}