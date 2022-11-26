#include <stdio.h>

int main()
{
    // increment operator
    int i = 9;
    printf("%d\n", ++i); // increments then prints the value of i
    printf("%d\n", i++); // prints value of i then increments
    printf("%d\n", i);   // prints the new value of i
    return 0;
}