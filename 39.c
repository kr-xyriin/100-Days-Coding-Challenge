// Ques39: Write a program to find the sum of odd digits of a number.

#include <stdio.h>
int main() {
    int num, temp, rem, count=1, sum=0;
    printf("Enetr a no.: ");
    scanf("%d", &num);
    temp=num;
    while (temp!=0) {
        rem=temp%10;
        if (rem%2!=0) {
            sum+=rem;
        }
        temp/=10;
        count++;
    } printf("Sum: %d", sum);
    return 0;
}