/*
Write a program that prints a diamond shape when an odd number is given.
*/

#include <stdio.h>

int star_line(int time, int operator){
    switch(operator){
        case 0:
            for (int i=0;i<=time;i++){
                for(int blank1=1;blank1<=time-i;blank1++){
                    printf(" ");
                }
                for(int star=1;star<=2*i-1;star++){
                    printf("*");
                }
                for(int blank2=1;blank2<=time-i;blank2++){
                    printf(" ");
                }
                printf("\n");
            }
            break;
        default:
            for (int i=time-1;i>=0;i--){
                for(int blank1=1;blank1<=time-i;blank1++){
                    printf(" ");
                }
                for(int star=1;star<=2*i-1;star++){
                    printf("*");
                }
                for(int blank2=1;blank2<=time-i;blank2++){
                    printf(" ");
                }
                printf("\n");
            }
            break;
    }
    return 0;
}

int main(){
    int times;
    scanf("%d", &times);
    int op_times = (times+1)/2;
    star_line(op_times, 0);
    star_line(op_times, 1);
    return 0;
}