#include <stdio.h>

//#define NDEBUG
#include <assert.h>

void print_number(int *p){
    assert(p!=NULL);
    printf("Ponteiro: %d\n", *p);
}

void nota(){
    short int nota;
    printf("Insira a nota do aluno: ");
    scanf("%hd", &nota);

    //Verificar se a nota está entre 0 e 10
    assert(nota >= 0 && nota <= 10);

    printf("O aluno foi %s\n", (nota>=7)? "aprovado" : "reprovado");
}

int main(){
    int a = 10;
    print_number(&a);

    //int *k = NULL;
    //print_number(k);

    nota();
}