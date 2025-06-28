#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target_number = 1 + rand() % 100;
    int input_number;

    printf("I'm thiking of a number between 1-100, can you guess:\n");
    while(1) {
        scanf("%d", &input_number);
        if(input_number == target_number) {
            printf("success, it's correct\n");
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