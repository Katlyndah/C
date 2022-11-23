/*
QN: 02
Write a program to find out whether a student has passed or failed.
If it requires total 40% and atleast 33% in each subject to pass.
Assume 3 subjects and take marks as an input from the user.
*/

#include <stdio.h>

int main()
{
    int Chemistry, Mathematics, Physics;

    printf("Enter Chemistry marks\n");
    scanf("%d", &Chemistry);

    printf("Enter Mathematics marks\n");
    scanf("%d", &Mathematics);

    printf("Enter Physics marks\n");
    scanf("%d", &Physics);

    float Total = (Chemistry + Mathematics + Physics) / 3;

    if (Total >= 40)
    {
        if (Chemistry < 33 || Mathematics < 33 || Physics < 33)
            ;
        {
            printf("Sorry you are not passed because your marks in one of the subjects are less than 33%%\n");
        }
        if (Chemistry > 33 || Mathematics > 33 || Physics > 33)
            ;
        {
            printf("Congratulations! You have passed the exams.\n");
        }
    }
    else
    {
        printf("Sorry you have not passed because your marks are less than 40%%\n"); //%%displays % after the value
    }

    return 0;
}