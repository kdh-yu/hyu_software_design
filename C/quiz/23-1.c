/*
Store the input integers into a 4x4 array. Print the sum of each column in the array.
*/

#include <stdio.h>

int main(){
    int array[4][4];
    int column_sum[4] = {0, 0, 0, 0};
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            column_sum[i] += array[j][i];
        }
    }
    
    for (int len = 0; len < 4; len++){
        printf("%d ", column_sum[len]);
    }
    printf("\n");
    return 0;
}