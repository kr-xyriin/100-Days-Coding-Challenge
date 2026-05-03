// Ques41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int num,first,middle, last, power=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Before swap: %d\n", num);
    last=num%10;
    first=num;
    while (first>=10) {
        first/=10;
        power*=10;
    }
    middle=(num%power)/10;
    printf("Afterswap: %d%d%d", last, middle, first);
}