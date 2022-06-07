#include <stdio.h>

int main(){
    int arr[3][2] = {{11, 22}, {33, 44}, {55, 66}};
    int (*pointer)[2] = arr;
}