#include <stdio.h>
int main(){
    float num1 =0.0;
    double num2 =0.0;
    for(int i=0;i<100;i++){
        num1 +=0.1;
        num2 +=0.1;
        }
        printf("%.20f\n",num1);
        printf("%.20f\n",num2);
        return 0;
}