/*
Write a program to print first n natural numbers using do-while loop.
input: 4, output: 1,2,3,4
*/
#include <stdio.h>

int main()
{
    int n = 4;
    do
    {
        printf("The value of n is %d\n", n);
        n++;
    } while (n < 5);

    return 0;
}