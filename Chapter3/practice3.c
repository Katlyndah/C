/*
QN: 03
Calculate the income tax paid by an employee to the government as per the slabs
mentioned below:

Income slab      Tax
2.5m - 5.0m       5%
5.0m - 10.0m      20%
above 10m         30%

Note that there is no tax below 2.5m. Take income amount as an input from the user.
*/
#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter your income\n");
    scanf("%d", &income);
    if (income < 2500000)
    {
        printf("Your income is less than 2.5m so no tax for you!");
    }
    else if (income < 5000000 && income > 2500000)
    {
        printf("Your income is between 2.5m and 5m");
        tax = tax + 0.05 * (income - 2500000);
    }
    else if (income < 10000000 && income > 5000000)
    {
        printf("Your income is between 5m and 10m");
        tax = tax + tax + 0.05 * (5000000 - 2500000);
        tax = tax + 0.02 * (income - 5000000);
    }
    else
    {
        printf("Your income is above 10m");
        tax = tax + tax + 0.05 * (5000000 - 2500000);
        tax = tax + 0.02 * (10000000 - 5000000);
        tax = tax + 0.03 * (income - 1000000);
    }

    printf("Total tax to be paid is %f", tax);
    return 0;
}