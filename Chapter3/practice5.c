/*
QN: 05

Write a program to determine whether a character entered by the user is lower
case or not.
*/
#include <stdio.h>

int main()
{
    // use ASCII table
    char character;
    printf("Enter your character\n");
    scanf("%c", &character); //%c for chars

    if (character >= 97 && character <= 122)
    {
        printf("Yes, this is a lowercase character");
    }
    else
    {
        printf("No, this is not a lowercase character");
    }
    return 0;
}