/*QN.3.
Write a program to ocnvert celcius(centigrade) degrees temperature to farenheit
*/

#include <stdio.h>

int main()
{
    // formula => (0c * 9/5) + 32 = 32f
    int c = 4;
    float f = (c * (9.0 / 5.0)) + 32; // use point 0 to get the accurate float value.

    printf("The value of temperature in farenheight is %f", f);
    return 0;
}