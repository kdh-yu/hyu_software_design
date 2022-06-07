/*
When the start and last numbers are entered, print out all odd numbers between start and last.
*/

#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for (int i=num1;i<=num2;i++){
        if (i%2 == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}