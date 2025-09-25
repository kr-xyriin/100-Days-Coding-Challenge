// Ques55: WAP to print all prime numbers from 1 to n

#include <stdio.h>
int main() {
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("[ ");
    for (int i=2; i<=n; i++) { // Every number is divisible by 1
        int prime=1;
        for (int j=2; j<=i/2; j++) { // Every number is divisible by itself
            if (i%j==0) {
                prime=0;
                break;
            }
        } if (prime==1) {
            printf("%d ", i);
        }
    } printf("]");
    return 0;
}