/*
Write a function that prints the greatest common divisor (GCD) of your two input integers.
Use the following Euclidean algorithm to obtain the GCD.
if x % y == 0, then y is the greatest common divisor.
if x % y != 0, then x = y, y = x % y
Repeat 1 and 2 until the GCD is achieved.
*/

#include <stdio.h>

int gcd(int x, int y){
    if (x < y){
        int i = y;
        int y = x;
        int x = i;
    }
    if (x % y != 0){
        int k = x;
        x = y;
        y = k % y;
        return gcd(x, y);
    } else {
        return y;
    }
}


int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int gcd_num = gcd(x, y);
    printf("The greatest common divisor of %d and %d is %d.\n", x, y, gcd_num);
    return 0;
}