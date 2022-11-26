#include <stdio.h>
/*
Write a program to print n natural numbers in reverse order.
Take input from user
*/
int main()
{
    for (int a; a; a--)
    {
        printf("Enter the value of a\n"); // error here
        scanf("%d\n", &a);
        printf("The value of a is %d\n", a);
    }

    return 0;
}