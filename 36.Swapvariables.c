#include <stdio.h>
#include <string.h>

int main()
{
    //Swapping varibales
    //for strings
    char x[15] = "Water";
    char y[15] = "Lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(temp, y);

    //for single characters
    /*char x = 'X';
    char y = 'y';
    char temp;

    temp = x;
    x = y;
    y = temp;*/

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}