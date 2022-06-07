/*
Take hour and minute and print the time that is 30 minutes before the input time.
The range of hour is 0~23 and range of minute is 0~59.
*/

#include <stdio.h>

int main(){
    int before = 30;
    int hour, minute;
    scanf("%d", &hour);
    scanf("%d", &minute);
    minute = minute - before;
    if (minute < 0){
        minute = 60 + minute;
        hour--;
    }
    if (hour == 0){
        printf("%d:%d\n",23,minute);
    } else {
        printf("%d:%d\n", hour, minute);
    }
    return 0;
}