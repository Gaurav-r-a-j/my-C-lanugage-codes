// lets make a rock paper scissor game

#include <stdio.h>
#include <stdlib.h> // to generate a random number we have a function srand and rand in this header file or say stdlib.h header file
#include <time.h>   //

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // fir rock paper scissors Returns 1 if c1>c2 and ) otherwise. If c1=c2 it will return -1.

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }

    return 0;

}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to the Rock , Paper ,Scissors.\n\n");

    for (int i = 0; i < 3; i++)
    {
        // Take Players 1 input
        printf("Player 1's Turn or Your Turn:\n");
        printf("Choose 1 for Rock , Choose 2 for Paper , Choose 3 for Scissors\n ");

        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("you choose %c\n", playerChar);

        // genreate computer input
        // printf("Computer's Turn:\n");
        // printf("Choose 1 for Rock \nChoose 2 for Paper \nChoose 3 for Scissors\n ");

        temp = generateRandomNumber(3) + 1;

        compChar = dict[temp - 1];
        printf("computer choose %c\n", compChar);

        // Compare the Scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Computer got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("its a draw\n");
        }

        else
        {
            playerScore += 1;
            printf("you got it!\n");
        }
    }

    printf("You: %d\nCPU: %d\n\n", playerScore, compScore);

    if (playerScore > compScore)
    {
        printf("Your score is %d\n", playerScore);
        printf("You win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("Computer score is %d\n", compScore);
        printf("computer win the  game\n");
    }
    else
    {
        printf("It's a Draw");
    }

    return 0;
}
