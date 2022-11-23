#include <stdio.h>

int main()
{
    int a = 3;     // integer variable = -infinity to infinity
    float b = 3.1; // real variable
    char c = 'c';  // character variable
    printf("Hello, I am learning C with harry");
    printf("This is an integer %d\n", a); // to print numbers
    printf("This is an integer %f\n", b); // for decimals
    printf("This is a character%c\n", c); // for characters
    return 0;
    // \n creates a new line after the printed text.
}

// Basic structure of a C program | this is a single line comment
/*This is a
multi line comment*/

/*int main(){//main is the function that gets executed whenever your program runs
    printf("Hello, I am learning C with harry");//is an instruction
    return 0;//is an instruction
    }
    instructions are terminated by a semi colon
    instructions are case sensitive
    instructions are printed in the order in which they are written.
*/

// Compilation and execution in C
/*
firstprogram.c ==> C compiler ==> firstprogram.exe
    vs code            gcc        something windows os can run
*/

// library functions in C
/*printf is a library function used to print values on a screen*/