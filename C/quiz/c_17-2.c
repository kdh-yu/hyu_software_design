/*
Write and call a function void rockPaperScissors(char you, int computer).
The input of your program is your hand sign.
An opponent’s hand sign should be randomly generated.
(Use rand() for opponent’s hand sign)
*/
#include <stdio.h>
#include <stdlib.h>

int RockPaperScissors(char you, int computer){
    int rps[3] = {'r', 'p', 's'};
    if (you == rps[computer]){
        printf("You : %c\nCom : %c\nResult : Draw", you, rps[computer]);
    }
    else if (you == 'r' && rps[computer] == 's' || you == 'p' && rps[computer] == 'r' || you == 's' && rps[computer] == 'p'){
        printf("You : %c\nCom : %c\nResult : Win", you, rps[computer]);
    }
    else{
        printf("You : %c\nCom : %c\nResult : Lose", you, rps[computer]);
    }
    return 0;
}

int main(){
    char you;
    int com = rand()%2;
    printf("Enter r for ROCK, p for PAPER and s for SCISSOR : ");
    scanf("%c", &you);
    RockPaperScissors(you, com);
}
