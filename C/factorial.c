#include <stdio.h>

int factorial(n){
    if (n==1){
        printf("%d = ", n);
        return 1;
    }
    else {
        printf("%d x ", n);
        return n * factorial(n-1);
    }
}

int main(){
    printf("%d", factorial(6));
}