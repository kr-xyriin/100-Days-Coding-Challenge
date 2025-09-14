// Ques19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    float s1,s2, s3;
    printf("Enter the length of sides seperated by space: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 <= 0 || s2 <=0 || s3 <= 0) {
        printf("Invalid side lengths \n");
    }
    if (s1 == s2 && s2 == s3){
        printf("It is an equilateral triangle\n");
    }
    else if (s1 == s2 || s2 ==s3 || s1 == s3) {
        printf("It is an isosceles triangle\n");
    }
    else {
        printf("It is a scalene triangle\n" );
    }
}