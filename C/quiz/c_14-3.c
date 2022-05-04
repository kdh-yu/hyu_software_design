/*
Print the sum of integers in the following way from the first input integer to the second input integer.
Use while statement.
1
10
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55    
*/
#include <stdio.h>

int main(){
    int start_point;
    int end_point;
    int sum = 0;
    printf("Start point : ");
    scanf("%d", &start_point);
    printf("End point : ");
    scanf("%d", &end_point);

    while (start_point < end_point){
        sum += start_point;
        printf("%d + ", start_point);
        start_point++;
    }
    sum += end_point;
    printf("%d = %d", end_point, sum);
    return 0;
}