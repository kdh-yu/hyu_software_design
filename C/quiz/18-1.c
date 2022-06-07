/*
Define ‘void Swap(//arguments)’ function that swaps value of two input arguments,
and make a program that uses the function and prints like an example.
(hint : you can’t change value of two input arguments,
if you define the function like ‘void Swap(int a, int b)’, use pointers.)
*/

#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}