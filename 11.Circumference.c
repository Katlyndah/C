#include <stdio.h>

int main()
{

    const double PI = 3.14129;
    double radius;
    double circumference;

    printf("\nEnter the radius of a circle:");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\ncircumference: %lf\n", circumference);

    return 0;
}