/*
 * A random number guessing game in C.
 *
 * This program handles only numeric input.
 * Invalid input (e.g., "five" or any non-integer) is **NOT** handled,
 * to add that as a practice exercise.
 *
 * The program generates a random number between 1 and 100.
 * After each guess, the program provides feedback:
 * - "Above <input>" if the guess is too low
 * - "Below <input>" if the guess is too high
 * - "Success" message on correct guess
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target_number = 1 + rand() % 100;
    int input_number;

    printf("I'm thinking of a number between 1-100, can you guess:\n");  // Fixed typo: was "thiking" in video version
    while(1) {
        scanf("%d", &input_number);
        if(input_number == target_number) {
            printf("Success, it's correct.\n");
            break;
        }
        else if(input_number < target_number) {
            printf("Above %d\n", input_number);
        }
        else {
            printf("Below %d\n", input_number);
        }
    }

    return 0;
}
