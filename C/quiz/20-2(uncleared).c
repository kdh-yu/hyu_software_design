/*
Given two strings A and B, print the indices where string A appears at string B.
Strings A and B are at most of length 100. (Do not use strchr, strstr, and strncmp function.)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
    int i=0, index=0;
    scanf("%s", A);
    scanf("%s", B);

    while (i < strlen(B) - strlen(A) + 1){
        index++;
        while ()
        if (B[i] == A){
            printf("%d\n", i);
        }
    }
    return 0;
}