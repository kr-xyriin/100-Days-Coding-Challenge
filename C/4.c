//Ques4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    float rad, area, circum, pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = pi*(rad*rad);
    circum = 2*pi*rad;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f", circum);
    return 0;
}