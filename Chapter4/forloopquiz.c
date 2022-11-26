/*
write a program to print first n natural numbers using for loop.
pick the value of n from the user
*/

#include <stdio.h>

int main()
{
    for (int i; i < 8; i++)
    {
        printf("Enter the value of i\n");
        scanf("%d", &i);
        printf("The value of i is %d\n", i);
    }

    return 0;
}