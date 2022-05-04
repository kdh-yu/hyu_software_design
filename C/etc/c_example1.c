#include <stdio.h>

int main(){
    float x = 3.333333333333333333333333333333333333; // max : 6
    double y = 3.333333333333333333333333333333333333;  // max : 15

    printf("%.30f\n%.30f", x, y);
}