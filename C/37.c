// Ques37: Write a program to find the LCM of two numbers

#include <stdio.h>
int main() {
    int num1, num2, lcm, count=1;
    printf("Enter two integers seperated by a space: ");
    scanf("%d %d", &num1, &num2);
    while (count) {
        if (count%num1==0 && count%num2==0) {
            printf("LCM: %d", count);
            break;
        }
        count++;
    }
    return 0;
}