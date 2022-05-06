/*
Write a simple calculator program. The number of calculations is in the first line.
For every following three lines, the first and third numbers are integer operands
and the second is one of '+', '-', '*', and '/' operators.
Complete the calculation by using ‘switch’ and ‘for’. 
Do not use ‘if’, ‘else if’ or ‘else’.
(If your have a problem with handling scanf(“%c”,
put a space before %c like scanf(“ %c”,…,instead.)
*/
#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int main(){
    int times, first, second;
    char operator;
    scanf("%d", &times);

    for (int i=1;i<=times;i++){
        scanf("%d", &first);
        scanf(" %c", &operator);
        scanf("%d", &second);
        switch(operator){
            case '+':
                printf("%d + %d = %d\n", first, second, first+second);
                break;
            case '-':
                printf("%d - %d = %d\n", first, second, first-second);
                break;
            case '/':
                printf("%d / %d = %f\n", first, second, (double)first/second);
                break;
            case '*':
                printf("%d x %d = %d\n", first, second, first*second);
                break;
            default:
                printf("None");
                i--;
                break;
        }
    }
    return 0;
}