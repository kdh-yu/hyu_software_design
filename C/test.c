#include <stdio.h>

int add(int n1, int n2){
    return n1 + n2;
}

int main(){
    int (*fptr)(int, int) = add;
    // fptr = add;
    printf("%d\n", fptr(1, 2));
    return 0;
}