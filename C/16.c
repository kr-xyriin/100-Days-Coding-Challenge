// WAP to input three numbers and find the largest among them using if–else.

#include <stdio.h> 
int main(){
    float num1, num2, num3;
    printf("Enter three numbers seperated by a white space: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 > num2) {
        if (num1 > num3){
            printf("%.2f is greatest among the three\n", num1);
        }
        else{
            printf("%.2f is greatest among the three\n", num3);
        }       
    }
    else {
        if (num2 > num3){
            printf("%.2f is greatest among the three\n", num2);
        }
        else{
            printf("%.2f is greatest among the three\n", num3);
        }       
    }
}