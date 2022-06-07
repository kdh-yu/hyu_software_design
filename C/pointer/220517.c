#include <stdio.h>

int main(){
    int n1 = 5, n2 = 10;
    int* pn;

    pn = &n1;
    (*pn) += 5;
    printf("%p %d \n", pn, *pn);

    pn = &n2;
    (*pn) -= 5;
    
    printf("n1 : %d, n2 : %d", n1, n2);
    return 0;
}