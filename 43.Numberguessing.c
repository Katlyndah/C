#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 3;
    const int MAX = 200;

    int guess;
    int guesses;
    int answer;

    srand(time(0)); // uses curent time as seed to generate numbers

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("***************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("\n***************************");

    return 0;
}