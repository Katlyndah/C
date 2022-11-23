#include <stdio.h>

int main()
{
    int a = 3.0 / 9;
    printf("The value of a is %d", a);
    // the program will print 0 as floating point numbers cannot
    // be stored in an int

    float a = 3.0 / 9;
    printf("The value of a is %d", a);
    // The program will print the corrcet value 0.333333

    return 0;
}