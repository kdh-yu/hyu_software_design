/*
Write a program that prints the area of a circle
where the input of your program is the (integer) radius of the circle.
You need to create a variable pi with a value of 3.14 and a variable for radius. 
*/

#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){
    int r;
    printf("Radius: ");
    scanf("%d", &r);

    printf("Area: %1f \n", M_PI*r*r);
    return 0;
}