/*
Take hour and minute and print the time that is 30 minutes before the input time.
The range of hour is 0~23 and range of minute is 0~59.
*/
#include <stdio.h>

int main(){
    int hour, minute;
    printf("Hour : ");
    scanf("%d", &hour);
    printf("Minutes : ");
    scanf("%d", &minute);
    if (hour>=24||hour<0||minute>=60||minute<0){
        printf("invalid input.");
    }
    else {
        int minute_ago = minute - 30;
        if (minute_ago >= 0){
            printf("%.2d : %.2d", hour, minute_ago);
        }
        else if (hour != 0){
            printf("%.2d : %.2d", hour-1, 60+minute_ago);
        }
        else{
            printf("23 : %d", 60+minute_ago);
        }
    }
    return 0;
}