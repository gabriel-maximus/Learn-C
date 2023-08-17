#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int i;
    int *vetor;
    int tam;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    vetor = malloc(tam * sizeof(int));
    srand(time(NULL));

    if(vetor){
        printf("Memória alocada com sucesso!\n");
        for(i=0; i<tam; i++){
            *(vetor + i) = rand() % 100;
        }
        for(i=0; i<tam; i++){
            printf("%d ", *(vetor + i));
        }
    }else{
        printf("Erro ao alocar memória\n");
    }
    
    return 0;
}