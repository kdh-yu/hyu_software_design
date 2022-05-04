#include <stdio.h>

int main(){
    int english, math, science;
    double avg;
    
    printf("English: ");
    scanf("%d", &english);
    printf("\nMath: ");
    scanf("%d", &math);
    printf("\nScience: ");
    scanf("%d", &science);
    

    avg = (english + math + science)/3;

    printf("Average: %.10f", avg);
    return 0;

}