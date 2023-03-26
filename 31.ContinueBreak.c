#include <stdio.h>

int main()
{

    // continue = skips rest of code and forced the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue; //continue statement
            //break; //will exit loop
        }
        printf("%d\n", i);
    }

    return 0;
}