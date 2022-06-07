/*
Write a program that prints the area of a circle
where the input of your program is the (integer) radius of the circle.
You need to create a variable pi with a value of 3.14 and a variable for radius. 
*/
#include <stdio.h>

int main(){
    float radius, pi = 3.14;
    scanf("%f", &radius);
    printf("%.2f\n", radius*radius*pi);
    return 0;
}