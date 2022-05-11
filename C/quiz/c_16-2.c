#include <stdio.h>

int main(){
    int length;
    scanf("%d", &length);
    for (int i=1;i<=length;i++){
        printf("*");
    }
    for (int j=0;j<=length-3;j++){
        printf("\n*");
        for (int i=1;i<=length-2;i++){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (int i=1;i<=length;i++){
        printf("*");
    }
    return 0;
}