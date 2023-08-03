#include <stdio.h>
int main(){
    char vogal;
    printf("Digite uma vogal: \n");
    scanf("%c", &vogal);
    switch(vogal){
        case 'a':
        case 'A':
            printf("Vogal escolhida: %c", vogal);
            break;
        case 'e':
        case 'E':
            printf("Vogal escolhida: %c", vogal);
            break;
        case 'i':
        case 'I':
            printf("Vogal escolhida: %c", vogal);
            break;
        case 'o':
        case 'O':
            printf("Vogal escolhida: %c", vogal);
            break;
        case 'u':
        case 'U':
            printf("Vogal escolhida: %c", vogal);
            break;
        default:
            printf("Não é uma vogal");
            break;   
    }
    return 0;
}