/*
Create a program that calculates the integral part of the square root of a given positive number.
You must complete the sample code on page 3.
*/

#include <stdio.h>

float sqrt_square(int num){
    int i = 0, result = 0;
    while (i*i < num){
        i++;
    }
    return i;
}

int main(){
	int n;	
	float answer;

	scanf("%d", &n);	
	answer = sqrt_square(n);
	
	printf("%.1f\n", answer);
}
