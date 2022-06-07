/*
Write a program that takes 𝑛 (𝑛≥1) and prints 𝐟𝐢𝐛𝐨(𝒏).
*/

#include <stdio.h>

int fibo(int n){
    if (n<=2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", fibo(num));
    return 0;
}