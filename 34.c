// Ques34: Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int count=2, flag=0, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==1) {printf("1 is neither prime nor composite number.\n");}
    else{
        while (count<=num/2) {
            if (num%count==0) {
                printf("Not prime\n", num);
                flag=1;
                break;
            } count++;
        } if (flag==0) {
            printf("Prime\n", num);
        }
    }
    return 0;
}