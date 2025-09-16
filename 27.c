// Ques 27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    int n, count=0, sum=0;
    printf("How many odd numbers: ");
    scanf("%d", &n);
    // for (int i=0; i<n; i++) {
    //     sum = sum + (2*i + 1);
    // }
    // printf("%d", sum);
    for (int i=0; count<n; i++) {
        if (i%2!=0) {
            sum+=i;
            count++;
        }
    }
    printf("%d", sum);
    return 0;
}