//Exercicio de tipos de variaveis
#include <stdio.h>

int main(){
    int distancia = 100;
    float poder = 2.345f;
    double super_poder = 56789.4532;
    char inicial = 'A';
    char primeiro_nome[] = "Gabriel";
    char segundo_nome[] = "Maximus";

    printf("Voce esta a %d metros de distancia\n", distancia);
    printf("Voce tem %f de poder\n", poder);
    printf("Voce tem super poderes de %f\n", super_poder);
    printf("Voce esta a %d metros de distancia\n", distancia);
    printf("Inicial escolhida: %c\n", inicial);
    printf("Meu primeiro nome e %s\n", primeiro_nome);
    printf("Meu segundo nome é %s\n", segundo_nome);
    printf("Meu nome é %s %s\n", primeiro_nome, segundo_nome);

    long defeitos = 1L * 1024L * 1024L * 1024L;
    printf("O universo inteiro tem %ld bugs.\n", defeitos);
    
}