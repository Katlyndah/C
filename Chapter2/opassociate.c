// Operator Associativity

/*
This is whe operators of equal priority are present in an expression,
the tie is taken care of by associativity

x*y/z => (x*y)/z
x/y*z => (x/y)*z

*,/ follows left to right associativity
*/
#include <stdio.h>

int main()
{
    int a = 9 / 3 * 27 - 5;
    // left to right since operators / and * have similar priority
    // this would be 3*27-5
    // 76
    return 0;
}