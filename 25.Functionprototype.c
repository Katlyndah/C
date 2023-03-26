#include <stdio.h>

void hello(char[], int); // This is a function prototype

int main()
{
    // Function prototype
    // Function declaration without a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // Important notes
    // Many c compilers do not check for parameter matching
    // Missing arguments will result in unexpected behaviour
    // A function prototype causes the cmpiler to flag an error if arguments are missing
    
    char name[] = "Kat";
    int age = 23;

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}