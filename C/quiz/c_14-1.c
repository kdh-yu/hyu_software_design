#include <stdio.h>
/*
Print the multiplication table for the input integer between 1 and 9.
Note that the products are right-justified. Use while statement. 
*/
int main(){
    int cal_number;
    int i=1;
    printf("What number do you want to calculate? : ");
    scanf("%d", &cal_number);
    while (i<10){
        printf("%d x %d = %.2d\n", cal_number, i, cal_number*i);
        i++;
    }
    return 0;
}