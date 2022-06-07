/*
Write a program that prints a square when the length is given.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char updown[100] = "";
    scanf("%d", &len);
    for (int i=0;i<len;i++){
        strcat(updown, "*");
    }
    printf("%s\n", updown);
    for (int i=0;i+2<len;i++){
        printf("*");
        for (int j=0;j+2<len;j++){
            printf(" ");
        }
        printf("*\n");
    }
    printf("%s\n", updown);
    return 0;
}