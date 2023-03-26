#include <stdio.h>

double square(double x) //change void function to data type of what you're returning
{
    double result = x * x;
    return result;
    // method2
    // return x * x;
}

int main()
{
    // return statement returns a value back to a caling function

    double x = square(3.14);
    printf("%lf", x);

    return 0; //exit status if program runs successfuly
}