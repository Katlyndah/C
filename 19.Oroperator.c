#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = || (OR) checks if at least one condition is true.

    float temp = 25;
    bool sunny = true;

    if (temp <= 0 || temp >= 30) // all conditions must be true!
    {
        printf("\nThe weather is bad!");
    }
    else
    {
        printf("\nThe weather is good!");
    }

    return 0;
}