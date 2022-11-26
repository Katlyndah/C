/*
Write a proogram to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.
*/
#include <stdio.h>

int main()
{
    int i = 0; // counter initialized to 0
    while (i < 21)
    {
        if (i > 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    return 0;
}