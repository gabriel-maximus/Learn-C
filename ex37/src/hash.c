#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct{
    char name[MAX_NAME];
    int age;
}person;

person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){
    int length = strnlen(name,MAX_NAME);
    unsigned int hash_value = 0;
    for(int i=0;i<length;i++){
        hash_value += name[i];
        hash_value = hash_value * name[i] % TABLE_SIZE;
     }
    return hash_value;
}

bool init_hash_table(){
    for (int i=0; i<TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
    //table vazia
}

void print_table(){
    printf("\nInicio\n");
    for(int i =0; i<TABLE_SIZE;i++){
        if(hash_table[i]==NULL){
            printf("\t%i\t---\n",i);
        }else{
            printf("\t%i\t%s\n",i,hash_table[i]->name);
        }
    }
    printf("\nFim\n");
}

bool hash_table_insert(person *p){
    if (p == NULL) return false;
    int index=hash(p->name);
    if (hash_table[index]!= NULL){
        return false;
    }else{
        hash_table[index] = p;
        return true;
    }
}

int main(){

    init_hash_table();
    print_table();
    
    person gabriel = {.name="Gabriel", .age=22};
    person pedro = {.name="Pedro", .age=31};
    person natalie = {.name="Natalie", .age=10};
    person bob = {.name="Bob", .age=5};
    person teste = {.name="Teste", .age=999};

    hash_table_insert(&gabriel);
    hash_table_insert(&pedro);
    hash_table_insert(&natalie);
    hash_table_insert(&bob);
    hash_table_insert(&teste); //colisão com o hash de Pedro

    print_table();

    printf("Hash de Teste -> %d\n", hash("Teste"));
    printf("Hash de Pedro -> %d\n", hash("Pedro"));

    return 0;
}
