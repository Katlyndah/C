#include <stdio.h>

int main()
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter number of rows: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
}