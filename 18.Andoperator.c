#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Logical operators && (AND) checks to see if two or more conditions are true.

    float temp = 25;
    bool sunny = true;

    if (temp >= 0 &&temp <= 30 && sunny) //all conditions must be true!
    {
        printf("\nThe weather is good!");
    }
    else
    {
        printf("\nThe weather is bad!");
    }

    return 0;
}