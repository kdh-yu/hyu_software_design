/*
Take one integer 𝑛, create an 𝑛 x 𝑛 array to store integers from 1 to 𝑛2 in the row major order. 
(if n = 2, array[0][0] = 1, array[0][1] = 2, array[1][0] = 3, array[1][1] = 4)
Prints an array that is tilted 90 degrees to the left as shown in the example.
(Use %4d format to print)
*/

#include <stdio.h>

int main(){
    int n, arr[100][100], plus = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[n-1-j][i] += plus;
            plus++;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}