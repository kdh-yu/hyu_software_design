/*
Create Add(float, float), Sub(float, float), Multiply(float, float), Divide(float, float) functions,
take 2 float numbers as input, and print the result of these 4 functions.
Use function pointer array like the sample code in the next page.
(Calculate the result rounded up to the second digit after the decimal point)
*/
#include <stdio.h>

//Write your code

float Add(float a, float b){
    return a + b;
}
float Sub(float a, float b){
    return a - b;
}
float Multiply(float a, float b){
    return a * b;
}
float Divide(float a, float b){
    return a / b;
}

int main()
{
    float (*fptr[4])(float, float);
    float a,b;
    scanf("%f %f",&a,&b);

    //Write your code
    fptr[0] = Add;
    fptr[1] = Sub;
    fptr[2] = Multiply;
    fptr[3] = Divide;

    for(int i=0;i<4;++i){
        printf("%.2f ",fptr[i](a,b));
    }
    printf("\n");
    return 0;
}

