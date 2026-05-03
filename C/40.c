// Ques40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    int num, count=1, binary[64], temp, rem;
    printf("Enter a BINARY number: ");
    scanf("%d", &num);
    temp=num;
    while (temp!=0) {
        rem=temp%10;
        if (rem==1) {
            rem=0;
            printf("%d", rem);
        } else if (rem==0) {
            rem=1;
            printf("%d", rem);
        } else {printf("You might have entered a non binary number!");}
        temp/=10;
    }
//     scanf("%d", &num);
//     while (num!=0) {
//         if (num%2==1) {
//             binary[count]=1;
//         } else {binary[count]=0;}
//         num/=2;
//         count++;
//     }
//     for (int i=count-1;i>0;i--) {
//         printf("%d", binary[i]);
//     }
}