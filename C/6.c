//Ques6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    float a, b, temp;
    printf("Enter two numbers seperated by a white space: ");
    scanf("%f %f", &a, &b);
    printf("Before swap: %.2f, %.2f\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %.2f, %.2f", a, b);
    return 0;
}