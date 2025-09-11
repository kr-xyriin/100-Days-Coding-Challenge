//Ques 17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, r1, r2, det;
    printf("Enter the coeffecients in the order ax^2 + bx +c seperated by a space: ");
    scanf("%f %f %f", &a, &b, &c);
    det = ((b*b) - (4*a*c));
    if (det > 0){
        r1 = (-b + sqrt(det))/(2*a);
        r2 = (-b - sqrt(det))/(2*a);
        printf("The roots of the equation are real distinct: %.2f and %.2f\n", r1, r2);
    }
    else if (det == 0){
        r1 = r2 = -b/(2*a);
        printf("The roots are real and equal: %.2f\n", r1);
    }
    else{
        printf("The roots are complex");
    }
    return 0;
}