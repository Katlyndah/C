#include <stdio.h>

int main()
{
    // There are 4 major data types in C
    // 1. int - storing integers
    // 2. float - single precision floating point number
    // 3. char - storing characters (enclosed i n '') "A" is invalid 'A' is valid
    // 4. double - double precision floating point number

    // QN. 1
    /*
    which of the following is invalid in C?
    */

    int a;
    int b = a;               // valid
    int v = 3 ^ 3;           // valid
    char dt = '21 Dec 2020'; // invalid

    return 0;
}