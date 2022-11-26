#include <stdio.h>

int main()
{
    // while loop
    int i = 7;
    while (i < 5)
    {
        printf("The value of i is %d\n", i);
    }

    // do-while loop
    int i = 7;
    {
        printf("The value of i is %d\n", i);
    }
    while (i < 5) // The do-while loop will execute only if the condition is true
        ;

    // do-while loop 2
    int i = 1;
    {
        printf("The value of i is %d\n", i);
        i++;
    }
    while (i < 5) // The do-while loop will execute only if the condition is true
        ;

    return 0;
}