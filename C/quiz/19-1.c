/*
Write a program that gets 𝑛 integers and outputs them backwards.
In the first line, 𝑛 (𝑛≤1000) is given.
In the second line, 𝑛 integers are given separated by spaces.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int n_array[10000] = {};

    for (int i=0;i<n;i++){
        scanf("%d", &n_array[i]);
    }
    for (int j=n;j>0;j--){
        printf("%d ", n_array[j-1]);
    }
    printf("\n");
    return 0;
}