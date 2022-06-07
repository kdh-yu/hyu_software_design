/*
Write a program that prints the average score of English, mathematics, and science
where the input is the integer scores of English, mathematics, and science. 
*/

#include <stdio.h>

int main(){
    int english, math, science;
    scanf("%d", &english);
    scanf("%d", &math);
    scanf("%d", &science);
    printf("%.2f\n", (float)(english+math+science)/3);
    return 0;
}