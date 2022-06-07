/*
Create a program that prints an index of input value when a sorted array {1,2,3,4,5,6,7,8,9,10} is given.
Use binary search algorithm with recursive function.
Binary search algorithm was introduced in C03. function lecture.
*/

#include <stdio.h>

int BinarySearch(int* array, int start, int end, int input){   
    int idx = (start + end) / 2;  //Use this variable as an argument when you call BinarySearch again.
    if (start >=end)
        return -1; // Failed to Search
    else {
        if (array[idx] > input){
            return BinarySearch(array, start, idx, input);
        }
        else if (array[idx] < input){
            return BinarySearch(array, idx, end, input);
        }
        else{
            return idx;
        }
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int input, result = -2;
    scanf("%d", &input);
    result = BinarySearch(array, 0, sizeof(array)/sizeof(int), input);    //Your code
    printf("%d\n", result);
    return 0;
}
