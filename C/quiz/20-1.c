/*
Given two strings of length at most 100, store them into character arrays A and B, respectively.
Concatenate A and B and store it into a character array C and print C.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char A[200], B[100];
    scanf("%s", A);
    scanf("%s", B);
    strcat(A, B);
    char* C = A;
    printf("%s\n", C);
    return 0;
}