// Ques30: Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int og, rev=0, rem, temp;
    printf("Enter the no. to be reversed: ");
    scanf("%d", &og);
    temp=og;
    for (int i=1; temp>0; i++) {
        rem = temp%10;
        temp/=10;
        rev=rev*10+rem;
    }
    printf("Reversed no.: %d\n", rev);
    return 0;
}