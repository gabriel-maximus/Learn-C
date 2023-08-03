#include <stdio.h>

int main(){
    int areas[] = {10, 12 , 13, 14, 20};
    printf("O tamanho de int: %ld\n", sizeof(int));
    printf("O tamanho de areas (int[]): %ld\n", sizeof(areas));
    printf("O número de ints em areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("A primeira area é %d, a segunda: %d.\n\n", areas[0], areas[1]);

    char nome[] = "Gabriel Maximus";
    printf("O tamanho de char: %ld\n", sizeof(char));
    printf("O tamanho de nome (char[]): %ld\n", sizeof(nome));
    printf("O número de letras: %ld\n\n", sizeof(nome) / sizeof(char));
    
    char primeiro_nome[] = "Gabriel";
    printf("O tamanho de char: %ld\n", sizeof(char));
    printf("O tamanho de nome (char[]): %ld\n", sizeof(primeiro_nome));
    printf("O número de letras: %ld\n", sizeof(primeiro_nome) / sizeof(char)); //sempre um a mais pois conta com o \0 no final

}