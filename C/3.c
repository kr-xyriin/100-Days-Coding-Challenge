// Ques3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int a, b, area, perimeter;
    printf("Enter length and breadth of the rectangle seperated by a white space: ");
    scanf("%d %d", &a, &b);
    area = a*b;
    perimeter = 2*(a+b);
    printf("Area = %d\n", area);
    printf("Perimeter = %d", perimeter);
    return 0;
}