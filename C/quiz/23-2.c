/*
Take one integer 𝑛 and print zigzag output as shown in the example.
When columnIndex is even (0,2,4,⋯), the value increases from top to bottom.
When columnIndex is odd (1,3,5, ⋯), the value increases from bottom to top.
you must complete the sample code on page 4.
*/

#include <stdio.h>

int main() 
{
    int n, arr[100][100], plus = 1;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++) {
        if (i%2 == 0){
            for (int j=0;j<n;j++) {
                arr[j][i] += plus;
                plus++;
            }
        } else {
            for (int j=0;j<n;j++) {
                arr[n-j-1][i] += plus;
                plus++;
            }
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}