#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct treenode{
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

treenode *createnode(int value){
    treenode* result = malloc(sizeof(treenode));
    if(result != NULL){
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

bool insertNumber(treenode **rootptr, int value){
    treenode *root = *rootptr;
    if ( root == NULL){
        //arvore vazia
        (*rootptr) = createnode(value);
        return true;
    }
    if (value == root->value){
        //valor ja existe -> não fazer nada
        return false;
    }
    if (value < root->value){
        return insertNumber(&(root->left), value);
    } else{
        return insertNumber(&(root->right), value);
    }
}

bool findNumber(treenode *root, int value){
    if (root == NULL){
        return false;
    }
    if (root->value == value ){
        return true;
    }
    if (value < root->value){
        return findNumber(root->left,value);
    } else{
        return findNumber(root->right,value);
    }
}

int main(){
    treenode *root = NULL;

    insertNumber(&root, 15);
    insertNumber(&root, 11);
    insertNumber(&root, 24);
    insertNumber(&root, 5);
    insertNumber(&root, 16);
    insertNumber(&root, 19);

    printf("%d (%d)\n", 15, findNumber(root,15));
    printf("%d (%d)\n", 13, findNumber(root,13));
    printf("%d (%d)\n", 19, findNumber(root,19));
    printf("%d (%d)\n", 24, findNumber(root,24));
    printf("%d (%d)\n", 100, findNumber(root,100));
}