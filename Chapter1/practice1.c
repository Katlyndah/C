/*QN.1.
Write a program to calculate the area of a rectangle
1. using hard coded inputs
2. using inputs supplied by the user
*/

#include <stdio.h>

int main()
{
    // hard coded inputs
    int a = 4; // height of rectangle
    int b = 7; // length of rectangle

    printf("The area of the rectangle is %d", a * b);

    // user supplied inputs
    int c;
    int d;
    printf("Enter the value of length\n");
    scanf("%d", &c);
    printf("Enter the value of breadth\n");
    scanf("%d", &d);

    printf("The area of the rectangle is %d", c * d);

    return 0;
}
