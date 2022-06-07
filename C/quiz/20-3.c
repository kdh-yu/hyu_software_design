/*
Given two strings A and B, print the indices where string A appears at string B.
Strings A and B are at most of length 100. (Use strncmp function.)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);

    for (int i=0; i<strlen(B)-strlen(A)+1;i++){
        if (strncmp(A, &B[i], strlen(A)) == 0){
            printf("%d\n", i);
        }
        else if (strncmp(A, &B[i], strlen(A)) < 0){
            printf("error\n");
            break;
        }
    }
    return 0;
}