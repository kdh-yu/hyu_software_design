/*
Write a guess the number game. The computer will think of a random number from 1 to 50, and ask you to guess it.
The computer will tell you if each guess is too high or too low.
You win if you can guess the number within 6 tries.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = rand()%50+1;
    int chance = 6, guess;
    while (chance > 0){
        printf("\nwhat num ?? : ");
        scanf("%d", &guess);
        if (guess > random){
            chance--;
            printf("lower (%d/6)\n", chance);
        }
        else if (guess < random){
            chance --;
            printf("upper (%d/6)\n", chance);
        }
        else{
            printf("\n%d is target!\n", random);
            break;
        }
    }
    if (chance == 0)
        printf("\nLose / num : %d\n", random);
    return 0;
}