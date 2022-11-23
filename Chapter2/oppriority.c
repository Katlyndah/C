// Operator precedence in C.

/*
3*x - 8y is it the same as (3x) - (8y) or 3(x-8y)???

in C alnguage, simple mathematical rules like BODMAS do not apply.
The answer to the above question is provided by operator precedence and associativity.

Operator Precedence:
The following table lists the operator priority in C.
1. * / %
2. + -
3. =
operators of higher priority are evaluated first in the absense of parenthesis.
*/

#include <stdio.h>

int main()
{
    int a = 9 + 3 * 5 - 5;
    printf("Value of a is %d", a); // The answer is 19
    return 0;
}