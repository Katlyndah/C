#include <stdio.h>
#include <ctype.h>

int main()
{

    char questions[][100] = {"1. What year was the bitcoin whitepaper released?: ",
                             "2. Who created Bitcoin?: ",
                             "3. What is Bitcoin?: "};

    char options[][100] = {"A. 1999", "B. 2008", "C. 1980", "D. 2002"
                           "A. Satoshi Nakamoto", "B. Nikola Tesla", "C. Dennis Ritchie", "D. Elon Musk",
                           "A. Block", "B. Crypocurrency", "C. Food", "D. Solana"};

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("***********************\n");
        printf("%s\n", questions[i]);
        printf("***********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }

    printf("***********************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("***********************\n");

    return 0;
}