#include <stdio.h>

int main(){
    int num1 = 10;  // decimal
    int num2 = 0xA;  // hexadecimal
    int num3 = 012;  // octal

    printf("%d %d %d\n", num1, num2, num3);

    printf("%x\n", num1);  // hexadecimal
    printf("%o\n", num1);  // octal
    return 0;
}