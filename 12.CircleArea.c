#include <stdio.h>

int main()
{

    const double PI = 3.14129;
    double radius;
    double area;

    printf("\nEnter the radius of a circle:");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("\narea: %lf\n", area);

    return 0;
}