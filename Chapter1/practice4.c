/*QN.4.
Write a program to calculate the simple interest for a set of values representing
principal, no. of years and rate of interest.
*/
#include <stdio.h>

int main()
{
    // Simple interest = (P*R*T)/100
    int P = 100;
    int R = 6;
    int T = 4;

    float S = (100.0 * 6.0 * 4.0) / 100.;
    printf("The compound interest is %f", S);
    return 0;
}