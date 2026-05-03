// Ques43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive ineteger: ");
    scanf("%d", &num);
    if (num>0) {
        int temp, rem, sum=0;
        temp=num;
        while (temp!=0) {
            rem=temp%10;
            int fact=1;
            for (int count=1; count<=rem; count++) {
                fact*=count;
            }
            temp/=10;
            sum+=fact;
        }
        if (sum==num) {
            printf("%d is a Strong number\n", num);
        } else {printf("%d is not a Strong number\n", num);}
    } else {printf("Invalid input!!");}
    return 0;
}