//Exercicio para fixar conteudo sobre ponteiros e endereço de memoria
#include <stdio.h>

int main(){
    
    int numero = 10;
    printf("Numero: %d\n",numero);
    printf("Endereço de numero: %d\n",&numero);

    int *ponteiro = &numero;
    printf("Ponteiro = %d\n", *ponteiro);
    printf("Endereço que o ponteiro está apontando: %d\n", ponteiro);

}