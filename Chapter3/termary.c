#include <stdio.h>

int main()
{
    int c = 6;
    int b = 8;
    int a = (c == b) ? 3 : 7; // Means that if condition in () is true, then the value of a will be 3 if false, the value will be 7.
    // Condition Termaryoperator'?' expression if-true: expression if-false
    printf("The value of a is %d", a);
    return 0;
}