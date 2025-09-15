// Ques25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
    char op;
    float num1, num2;
    printf("Enter an operator (+,-,*,/): ");
    scanf("%c", &op);
    printf("Enter two nos. seperated by space: ");
    scanf("%f %f", &num1, &num2);
    switch (op) {
        case '+' : printf("Sum: %.2f\n", num1+num2); break;
        case '-' : printf("Difference: %.2f\n", num1-num2); break;
        case '*' : printf("Product: %.2f\n", num1*num2); break;
        case '/' : printf("Division: %.2f\n", num1/num2); break;
        default : printf("Invalid input!");
    }
    return 0;
}