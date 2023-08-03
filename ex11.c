#include <stdio.h>
int main(){
    int numbers[] = {1,12,5,28};
    printf("Numero antes de modificar:%d\n", numbers[2]); //teste
    numbers[2] = 13;
    printf("Numero depois de modificar:%d\n", numbers[2]);

    char name[4] = {};
    name[0] = 'M';
    name[1] = 'a';
    name[2] = 'x';
    name[3] = '\0';

    printf("Nome: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("Nome: %s", name);


}