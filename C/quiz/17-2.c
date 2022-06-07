/*
Write and call a function void rockPaperScissors(char you, int computer).
The input of your program is your hand sign.
An opponent’s hand sign should be randomly generated. (Use rand() for opponent’s hand sign)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rockPaperScissors(char you, int computer){
    char rps[3] = {'r', 'p', 's'};
    if (you == 'r' && rps[computer] == 'p' ||
        you == 'p' && rps[computer] == 's' ||
        you == 's' && rps[computer] == 'r') {
        printf("Your opponent’s hand sign is %c.", rps[computer]);
        printf("\nYou lose.\n");
    }
    else if (you == 'r' && rps[computer] == 's' ||
        you == 's' && rps[computer] == 'p' ||
        you == 'p' && rps[computer] == 'r') {
        printf("Your opponent’s hand sign is %c.", rps[computer]);
        printf("\nYou Win.\n");
    }
    else {
        printf("Your opponent’s hand sign is %c.", rps[computer]);
        printf("\nDraw.\n");
    }
}

int main(){
    srand(time(NULL));
    int computer = rand()%3;
    char you;
    printf("Enter r for ROCK, p for PAPER and s for SCISSOR\n\n");
    printf("Your hand sign: ");
    scanf("%c", &you);
    rockPaperScissors(you, computer);
    return 0;
}