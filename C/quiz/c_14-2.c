#include <stdio.h>
/*
Print the multiplication table for the input integer between 1 and 9.
Note that the products are right-justified. Use for statement. 
*/
int main(){
    int cal_number;
    printf("What number do you want to calculate? : ");
    scanf("%d", &cal_number);
    for(int i=1;i<10;i++){
        printf("%d x %d = %.2d\n", cal_number, i, cal_number*i);
    }
    return 0;
}