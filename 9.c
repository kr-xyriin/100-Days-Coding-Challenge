// Ques 9) Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    float principle, rate, time, simple_interest, compound_interest;
    printf("Enter principle amount, rate of interest and time (in years) separated by spaces: ");
    scanf("%f %f %f", &principle, &rate, &time);
    simple_interest = (principle * rate * time) / 100;
    compound_interest = principle * (pow((1 + rate / 100), time)) - principle;
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}