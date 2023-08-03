#include <stdio.h>
#include <stdarg.h>

//Exercicio de parâmetros variáveis


int parametros(int p_qnt, ...){
    char *nome;
    
    va_list vl;
    va_start(vl, p_qnt);

    for(int i=0; i<p_qnt; i++){
        nome = va_arg(vl, char *);
        printf("Nome: %s\n", nome);
    }
    va_end(vl);
}

int main(){
    parametros(3, "Gabriel", "Maximus", "Final");
}