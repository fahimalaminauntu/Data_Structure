 #include<stdio.h>
#include<stdlib.h>
struct node{
struct node*previous;
int data;
struct node*next;
}*head,*tail;

void creation(){
int n;
int i=1;
printf("Enter the link list size= ");
scanf("%d",&n);
while(i<=n){
struct node*newnode;
newnode=(struct node *)malloc(sizeof(struct node));
int value;
printf("Enter the value= ");
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
newnode->previous=NULL;
if(head==NULL){
    head=newnode;
    tail=newnode;
}
else{
tail->next=newnode;
newnode->previous=tail;
tail=newnode;
}

i++;
    
}
}
void print() {
    struct node* ptr;
    ptr = head;
    while (ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int main(){
creation();
print();
}