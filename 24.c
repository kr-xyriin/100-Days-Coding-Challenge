/*
Ques24:
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>
int main() {
    int unit;
    float price;
    printf("Enter the no. of units consumed: ");
    scanf("%d", &unit);
    if (unit>0){
        if (unit <=100) {
            price=unit*5;
            printf("Bill: %.2f\n", price);
        } else if(unit>100 && unit<=200) {
            price=unit*7-500;
            printf("Bill: %.2f\n", price);
        } else if (unit>200 && unit<=300) {
            price=unit*10-1200;
            printf("Bill: %.2f", price);
        } else {
            price=unit*12-2200;
            printf("Bill: %.2f", price);
        }
    } else {
        printf("Invalid input\n");
    }
    return 0;
}