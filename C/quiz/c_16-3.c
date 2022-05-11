#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int target = (rand() %50) + 1;
    int guessed, i=0;
    while (i<6){
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed < target){
            i++;
            printf("Miss count: %d/6\n", i);
            printf("Your guess is too low.\n\n");
        }
        else if (guessed > target){
            i++;
            printf("Miss count: %d/6\n", i);
            printf("Your guess is too high.\n\n");
        }
        else{
            printf("You’ve won! You guessed the random number!");
            break;
        }
    }
    printf("You've lost! The number was %d.", target);
    return 0;
}