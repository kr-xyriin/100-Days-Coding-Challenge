// Ques35: Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    int n, count=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: [");
    while (count<=n) {
        if (n%count==0) {
            if (count<=n/2) {
                printf("%d ", count);
            } else {printf("%d]", count);}
        }
        count++;
    }
    return 0;
}