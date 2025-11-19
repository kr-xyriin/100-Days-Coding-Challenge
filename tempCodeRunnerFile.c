/* guess_number.c - Minimal Number Guessing Game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_int(){
    int x;
    while (scanf("%d", &x) != 1) {
        while (getchar() != '\n');
        printf("Enter a number: ");
    }
    while (getchar() != '\n');
    return x;
}

int main(){
    srand((unsigned)time(NULL));
    printf("Number Guessing (1-100)\n");
    while (1) {
        int target = rand()%100 + 1;
        int tries = 0, guess;
        printf("I picked a number between 1 and 100. Guess it!\n");
        do {
            printf("Your guess: ");
            guess = get_int();
            tries++;
            if (guess < target) printf("Higher\n");
            else if (guess > target) printf("Lower\n");
            else printf("Correct! You took %d tries.\n", tries);
        } while (guess != target);

        printf("Play again? (1 = yes, 0 = no): ");
        int again = get_int();
        if (!again) break;
    }
    printf("Goodbye!\n");
    return 0;
}