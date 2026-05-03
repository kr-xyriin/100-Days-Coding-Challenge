// Ques42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int count=1; count<=num/2; count++) {
        if (num%count==0) {
            sum+=count;
        }
    }
    if (sum==num) {
        printf("%d is a Perfect number\n");
    } else {printf("%d is not a Perfect number\n");}
    return 0;
}