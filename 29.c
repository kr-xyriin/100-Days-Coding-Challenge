// Ques29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n<0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else if (n==0) {
        printf("Factorial of 0 is 0");
    } else {
        for (int i=1; i<=n; i++) {
            fact*=i;
        }
    } printf("Factorial of %d = %lld", n, fact);
    return 0;
}