#include <stdio.h>

int main(){
    int first, second;
    scanf("%d", &first);
    scanf("%d", &second);

    for (int i=first;i<=second;i++){
        if (i%2 == 1){
            printf("%d ", i);
        }
    }
    return 0;
}