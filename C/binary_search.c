#include <stdio.h>

int bSearch(int arr[], int target, int first, int last){
    if (first>last) return -1;
    
    int mid = (first + last) / 2;
    if (target == arr[mid]){
        return mid;
    }
    else if (arr[mid] > target){
        return bSearch(arr, target, mid+1, last);
    }
    else {
        return bSearch(arr, target, first, mid-1);
    }
}

int main(){
    int array[8] = {1, 2, 3, 4, 6, 80, 190, 200};
    printf("%d", bSearch(array, 80, 0, 8));
}