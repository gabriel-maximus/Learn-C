//Exericio para fixar if e else

#include <stdio.h>
int main(){
    int variavel;
    printf("Digite uma variável inteira de 1 a 100: \n");
    scanf("%d", &variavel);
    if(variavel == 1){
        printf("Variavel mínima\n");
    }else if(variavel>1 && variavel<100){
        printf("Variavel entre as extremidades\n");
    }else if(variavel == 100){
        printf("Variavel máxima\n");
    }else{
        printf("Variavel fora dos limites\n");
    }
}