#include <stdio.h>

int main(){
    int numbers[] = {1,12,5,28};
    int quantidade = 4;
    int i;
    for (i=0 ; i < quantidade ; i++){
        printf("Numero n%d: %d\n",i,numbers[i]);
    }
    return 0;
}