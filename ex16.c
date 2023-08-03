#include <stdio.h>

struct Pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct Pessoa Pessoa;

int main(){
    Pessoa pessoa1 = {0, 0.0, "Teste"};

    printf("Testando\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Peso: %f\n", pessoa1.peso);

    //Criando uma pessoa com dados do usuário

    printf("Digite seu nome: \n");
    scanf("%s", &pessoa1.nome);
    printf("Digite sua idade: \n");
    scanf("%d", &pessoa1.idade);
    printf("Digite seu peso: \n");
    scanf("%f", &pessoa1.peso);

    //Printando novamente

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Peso: %f\n", pessoa1.peso);

}