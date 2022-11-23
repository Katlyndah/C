#include <stdio.h>
/*write a program to find the grade of a student given
his marks based on below:
->90-100-> A
->80-90 ->  B
->70-80 ->  C
->60-70 ->  D
-> <70  ->  F*/
int main()
{
    int m;
    printf("Enter Student marks\n");
    scanf("%d", &m);

    if (m >= 90 && m <= 100)
    {
        printf("Your grade is A \n");
    }
    else if (m >= 80 && m <= 90)
    {
        printf("Your grade is B \n");
    }
    else if (m >= 70 && m <= 80)
    {
        printf("Your grade is C \n");
    }
    else if (m >= 60 && m <= 70)
    {
        printf("Your grade is B \n");
    }
    else if (m < 70)
    {
        printf("Your grade is B \n");
    }
    else
    {
        printf("Your marks don't match any grade on the Scale");
    }

    return 0;
}