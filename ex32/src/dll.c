// Implementação de uma Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de nó
struct node {
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node node;

// Protótipo da função
void printForward(node* head);
void printReverse(node* tail);

int main() {
    // Criação dos nós e da lista
    node* head = NULL;
    node* tail = NULL;

    // Criando o primeiro nó
    node* n1 = (node*)malloc(sizeof(node));
    n1->data = 1;
    n1->prev = NULL;
    n1->next = NULL;
    head = n1;
    tail = n1;

    // Criando o segundo nó
    node* n2 = (node*)malloc(sizeof(node));
    n2->data = 2;
    n2->prev = tail;
    n2->next = NULL;
    tail->next = n2;
    tail = n2;

    // Criando o terceiro nó
    node* n3 = (node*)malloc(sizeof(node));
    n3->data = 3;
    n3->prev = tail;
    n3->next = NULL;
    tail->next = n3;
    tail = n3;

    // Criando o quarto nó
    node* n4 = (node*)malloc(sizeof(node));
    n4->data = 4;
    n4->prev = tail;
    n4->next = NULL;
    tail->next = n4;
    tail = n4;

    // Chamar a função para imprimir
    printForward(head);
    printReverse(tail);

    // Liberar a memória alocada
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

void printForward(node* head) {
    node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printReverse(node* tail) {
    node* temp = tail;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}