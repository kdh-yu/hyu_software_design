/*
Write a simple calculator program. The number of calculations is in the first line.
For every following three lines, the first and third numbers are integer operands
and the second is one of '+', '-', '*', and '/' operators.
Complete the calculation by using ‘switch’ and ‘for’.
Do not use ‘if’, ‘else if’ or ‘else’.
(If your have a problem with handling scanf(“%c”, put a space before %c like scanf(“ %c”,…,instead.)
*/

#include <stdio.h>

int main(){
    int cal_num, i=0, num1, num2;
    char operator;
    scanf("%d", &cal_num);
    while (i<cal_num){
        scanf("%d", &num1);
        scanf("%c", &operator);
        scanf("%d", &num2);
        switch(operator){
            case '+':
                printf("%d + %d = %d\n", num1, num2, num1+num2);
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, num1-num2);
                break;
            case '*':
                printf("%d x %d = %d\n", num1, num2, num1*num2);
                break;
            case '/':
                printf("%d ÷ %d = %f\n", num1, num2, (double)num1/num2);
                break;
            default:
                i--;
                break;
        }
        i++;
    }
    return 0;
}