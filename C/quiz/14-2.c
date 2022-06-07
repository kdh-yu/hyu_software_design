/*
Print the multiplication table for the input integer between 1 and 9.
Note that the products are right-justified. Use for statement. 
*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    for (int i=1;i<=9;i++){
        printf("%d x %d = %2d\n", num, i, num*i);
    }
    return 0;
}