#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *Next;

};
int main(){
    struct Node *A=NULL;
    struct Node *B=NULL;
    struct Node *C=NULL;
    A=(struct Node*)malloc(sizeof(struct Node));
    B=(struct Node*)malloc (sizeof(struct Node));
    C=(struct Node* )malloc (sizeof(struct Node));
    A ->data=10;
    B ->data=20;
    C ->data=30;

    A-> Next=B;
    B-> Next=C;
    C-> Next=NULL;
    while( A != NULL){
        printf("%d ->" ,A->data);
        A= A->Next;

    }

printf("NULL");
    return 0;
}