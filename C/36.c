// Ques36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, count=1, hcf;
    printf("Enter two integers seperated by space: ");
    scanf("%d %d", &num1, &num2);
    while (count<=num1 || count<=num2) {
        if (num1%count==0 && num2%count==0) {
            hcf=count;
        }
        count++;
    }
    printf("HCF: %d\n", hcf);
}