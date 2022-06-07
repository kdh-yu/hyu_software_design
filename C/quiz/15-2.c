/*
Write a program that prints a diamond shape when an odd number is given.
*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int space = (num-1)/2;
    int star = 1;
    while (space >= 0){
        for (int i=0;i<=space;i++){
            printf(" ");
        }
        for (int i=0;i<2*star-1;i++){
            printf("*");
        }
        printf("\n");
        space--;
        star++;
    }
    while (space <= (num-1)/2){
        for (int i=0;i<=space;i++){
            printf(" ");
        }
        for (int i=0;i<2*star-1;i++){
            printf("*");
        }
        printf("\n");
        space++;
        star--;
    }
    return 0;
}