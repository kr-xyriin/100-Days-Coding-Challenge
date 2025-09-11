//Ques 15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h> 
int main()
{
    char check;
    printf("Enter any character: ");
    scanf("%s", &check);
    if (check >= 'A' && check <= 'A')
    {
        printf("%c is an uppercase alphabet \n", check);
    }
    else if (check >= 'a' && check <= 'z')
    {
        printf("%c is a lowercase alphabet \n", check);
    }
    else if (check >= '0' && check <= '9')
    {
        printf("%c is a digit \n", check);
    }
    else
    {
        printf("%c is a special character \n", check);
    }
    return 0;
}