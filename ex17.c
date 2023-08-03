#include <stdio.h>
#include <stdlib.h>

int main(){
    //Testando tamanho dos tipos de variáveis na memória
    printf("%li\n", sizeof(int));
    printf("%li\n", sizeof(double));
    printf("%li\n", sizeof(long));

    int vetor[10];
    printf("%li\n", sizeof(vetor)); // int = 4 vezes tamanho = 10

    struct x
    {
        int a;
        int b;
        int c;
    };
    typedef struct x x;
    printf("%li\n", sizeof(x)); // 3 inteiros

    //Alocação dinamica
    int *ponteiro = (int *) malloc(sizeof(int));

    *ponteiro = 1000;
    printf("%d\n", *ponteiro);
    printf("%d\n", ponteiro);

    free(ponteiro); //libera o espaço de memoria

    printf("%d\n", *ponteiro);


    


}