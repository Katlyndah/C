/*
QN: 4

Write a program to find out whether a year entered by the user is a leap year or not. Take
year as an input from the user.
*/
#include <stdio.h>

int main()
{
    // leap year = 365 days >> not divisible by 4
    int year;

    printf("Enter year\n");
    scanf("%d", &year);

    if (year % 4 != 0)
    {
        printf("It is a common year");
    }
    else if (year % 100 != 0)
    {
        printf("It is a leap year");
    }
    else if (year % 400 != 0)
    {
        printf("It is a common year");
    }
    else
    {
        printf("It is a leap year");
    }

    return 0;
}