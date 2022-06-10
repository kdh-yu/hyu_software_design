/*
Store the input integers into a 4x4 array. Print the sum of each column in the array.
*/

#include <stdio.h>

int main(){
    int array[4][4];
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        int column_sum = 0;
        for (int j = 0; j < 4; j++){
            column_sum += array[j][i];
        }
        printf("%d ", column_sum);
    }
    printf("\n");
    return 0;
}