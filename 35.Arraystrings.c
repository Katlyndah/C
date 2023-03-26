#include <stdio.h>
#include <string.h>

int main()
{

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    // cannot directly assign a new value
    // running cars[0] = "Tesla"; would show errors
    //Array of strings is similar to a 2d array as each string is an array

    // Update array
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
