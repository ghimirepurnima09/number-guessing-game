#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() {
    int number_to_guess, guess, attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    number_to_guess = rand() % 100 + 1;

    printf("Hey there! Welcome to the Number Guessing Game!\n");
    printf("I've picked a secret number between 1 and 100. Are you ready to guess?\n");

    // Loop until the player guesses the correct number
    while (1) {
        printf("Go ahead, take a guess: ");
        scanf("%d", &guess);
        attempts++;

        // Check if the guess is too low, too high, or correct
        if (guess < number_to_guess) {
            printf("Hmm, a bit too low. Try guessing a higher number!\n");
        } else if (guess > number_to_guess) {
            printf("Oops, that’s a bit too high! Maybe try a smaller number?\n");
        } else {
            printf("Yay! You got it! 🎉 The number was %d.\n", number_to_guess);
            printf("It took you %d tries to guess it. Great job!\n", attempts);
            break; // Exit the loop when the guess is correct
        }
    }
}

int main() {
    number_guessing_game();
    return 0;
}#code for number-guessing-game-
