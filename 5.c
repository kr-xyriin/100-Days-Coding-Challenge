// Ques5: Write a program to convert temperature from Celsius to Fahrenheit.
//  F=(c*9/5) + 32

#include<stdio.h>
int main()
{
    float celcius, fahrenheit ; 
    printf("Enter the temperature (in celcius): ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit is: %.1f", fahrenheit);
    return 0;
}