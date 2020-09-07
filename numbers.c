#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_guess()
{
    // ask the user for a number
    // and return it

    int guess;
    printf("guess a number: ");
    scanf("%d", &guess);
    return guess;
}

int main(void)
{
    srand(time(NULL)); // set random seed
    int answer = rand() % 100,
        guess = get_guess();
    while (guess != answer)
    {
        if (guess > answer)
        {
            printf("You guessed too high!\n");
        }
        else
        {
            printf("You guessed too low!\n");
        }

        guess = get_guess();
    }
    printf("You got it!");

    return 0;
}