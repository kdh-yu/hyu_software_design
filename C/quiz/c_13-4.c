/*
Write a program that exchanges won for dollars.
The input of your program is won and output is dollars.
You should print the output up to second decimal place. ($1 = 1,235 won)
*/
#include <stdio.h>

int main(){
    float exchange_rate = 1235;
    float kor_won;

    printf("How much kor won? : ");
    scanf("%f", &kor_won);
    printf("%.2f won were exchanged to %.2f dollars.", kor_won, kor_won/exchange_rate);
    return 0;
}