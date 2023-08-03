//ponteiros para funções

#include <stdio.h>

int executa(int (*p)(int, int), int x, int y){
    return p(x,y);
}

int max(int a, int b){
    return (a>b) ? a:b;
}

int soma(int a, int b){
    return a + b;
}

int main(){
    int x,y,z;
    int (*p)(int,int);
    printf("Digite 2 números: \n");
    scanf("%d %d", &x, &y);
    
    p = soma;
    z = p(x,y);
    printf("Soma = %d\n",executa(soma,x,y));
    printf("Maior = %d\n",executa(max,x,y));

}