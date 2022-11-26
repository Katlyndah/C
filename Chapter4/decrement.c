#include <stdio.h>

int main()
{
    // decrement operator
    int i = 9;
    printf("%d\n", --i); // decrements then prints the value of i
    printf("%d\n", i--); // prints value of i then decrements
    printf("%d\n", i);   // prints the new value of i
    return 0;
}