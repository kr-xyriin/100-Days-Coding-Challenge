// Ques45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22
*/
#include <stdio.h>
int main() {
    int n;
    printf("How many terms?: ");
    scanf("%d", &n);
    float num=0, den=0, sum=0;
    for (int count=1; count<=n; count++) {
        num=count*2;
        den=count*4-1;
        sum+=(num/den);
    }
    printf("SUM (Approx.): %.2f", sum);
    return 0;
}