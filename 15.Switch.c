#include <stdio.h>

int main()
{
    // A switch = a more efficient alternative to using many "else if" statements.
    // Allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break; //breaks out of switch and exits
    case 'B':
        printf("You did good!\n");
        break; //without breaks, all cases will be executed
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("You FAILED!\n");
        break;
    default:
        printf("Please enter a valid grade");
    }

    return 0;
}