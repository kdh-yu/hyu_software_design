/*
Write a program that exchanges won for dollars.
The input of your program is won and output is dollars.
You should print the output up to second decimal place. ($1 = 1,235 won)
*/

#include <stdio.h>

int main(){
    float kor_won;
    scanf("%f", &kor_won);
    printf("$%.2f\n", kor_won/1235);
    return 0;
}