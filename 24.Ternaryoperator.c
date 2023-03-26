#include <stdio.h>

int findMax(int x, int y)
{
    //short method with ternary operator
    return (x > y) ? x : y;
    
    //Method with if/else
    /*if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }*/
}

int main()
{
    // Ternary operator = shortcut to if/else when assigning/returning a value
    //(condition) ? value if true : value if false

    int max = findMax(3, 4);

    printf("\nMax Value is %d", max);
    return 0;
}