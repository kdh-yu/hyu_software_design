/*
Print the sum of integers in the following way
from the first input integer to the second input integer.
Use for statement.
*/

#include <stdio.h>

int sum(int a, int b){
    int summed = 0;
    if (a >= b){
        printf("-1");
        return 0;
    } else {
        for (int i=a;i<b;i++){
            printf("%d + ", i);
            summed += i;
        }
        printf("%d = %d\n", b, summed+b);
    }
    return 0;
}

int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum(num1, num2);
    return 0;
}