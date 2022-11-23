/*
QN: 6
Write a program to find the greatest of four numbers entered by the user
*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter your numbers\n");
    scanf("%d", &num1);

    printf("Enter your numbers\n");
    scanf("%d", &num2);

    printf("Enter your numbers\n");
    scanf("%d", &num3);

    printf("Enter your numbers\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("num1 is the greatest");
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("num2 is the greatest");
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("num3 is the greatest");
    }
    else if (num4 > num1 && num4 > num2 && num4 > num2)
    {
        printf("num1 is the greatest");
    }

    return 0;
}