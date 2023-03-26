#include <stdio.h>

int main()
{
    // for loop = repeats a section of code a limited number of times
    
    //Declare index; condition to check; increment or decrement index;
    for (int i = 1; i <= 10; i++ /*i+=2 or i+=3 or i-- i-=2 to increase increments/decrements*/)
    {
        printf("%d\n", i);
    }

    return 0;
}