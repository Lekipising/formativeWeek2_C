#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int secretNum = rand() % 21;
    printf("Guess a number between 0 and 20 : ");
    int guessRem = 0;
    while (guessRem < 10)
    {
        int userGuess;
        scanf("%d", &userGuess);
        if (userGuess == secretNum)
        {
            printf("Congratulations, you made %d guesses. \n", guessRem);
            break;
        }
        else
        {
            if (userGuess > secretNum)
            {
                printf("Your guess is greater than the secret number! Try again. : ");
            }
            else
            {
                printf("Your guess is lower than the secret number! Try again. : ");
            }
        }

        guessRem++;
    }

    return 0;
}