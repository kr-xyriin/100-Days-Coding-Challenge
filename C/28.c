// Ques28: Write a program to print the product of even numbers from 1 to n.
// 48 (2 * 4 * 6)

#include <stdio.h>
int main(){
    int n;
    long long pro=1;
    printf("How many even numbers?: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            pro*=i;
        }
    }
    printf("%lld (", pro);
    for (int i=2; i<=n; i+=2) {
        printf("%d", i);
        if (i+2<=n) {
            printf(" * ");
        }
    }
    printf(")");
    return 0;
}   