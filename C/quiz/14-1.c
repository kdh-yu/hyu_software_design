/*
Print the multiplication table for the input integer between 1 and 9.
Note that the products are right-justified. Use while statement. 
*/

#include <stdio.h>

int main(){
    int num, i=1;
    scanf("%d", &num);
    while (i<=9){
        printf("%d x %d = %2d\n", num, i, num*i);
        i++;
    }
    return 0;
}