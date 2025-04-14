#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Guess the Number game!\n");
    printf("I'm thinking of a number between 1 and 100. Try to guess it.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        if (attempts == 12) {
            printf("Oops! The number was %d. Better luck next time.\n", secretNumber);
            break;  // End the game after the 12th attempt
        }
    }

    return 0;
}