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