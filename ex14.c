#include <stdio.h>

void media(int a,int b,int c){
    int mediaFinal = (a + b + c)/3;
    printf("Média Final = %d\n", mediaFinal);
    if(mediaFinal<4){
        printf("Situação: Reprovado\n");
    }else if(mediaFinal>=4 && mediaFinal<7){
        printf("Situação: Recuperação\n");
    }else{
        printf("Situação: Aprovado\n");
    }
}

int main(){
    printf("Aluno 1:\n");
    media(4,6,5);
    printf("Aluno 2:\n");
    media(8,7,10);
    printf("Aluno 3:\n");
    media(3,2,1);

}
