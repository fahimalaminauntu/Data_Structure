#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
}*head,*tail;
void creation(){
int i=1;
int n;
printf("Enter the linklist= ");
scanf("%d",&n);
while(i<=n){
int value;
printf("Enter the value= ");
scanf("%d",&value);
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
    tail=newnode;
}
else{
tail->next=newnode;
newnode->next=head;
tail=newnode;

}
i++;
}
}
void print()
{
struct node*ptr;
ptr=head;
while(ptr->next!=head){
    printf("%d->",ptr->data);
    ptr=ptr->next;
}
printf("%d->",ptr->data);


}

void deleteAtfirst(){
struct node*ptr;
ptr=head;
head=head->next;
tail->next=head;
free(ptr);

}
void deleteAtlast(){
struct node*ptr;
ptr=head;
while(ptr->next!=tail){
  ptr=  ptr->next;
}
tail->next=NULL;
ptr->next=head;
tail=ptr;

}
void dele(){
int n;
struct node*ptr;
ptr=head;
printf("Enter the position= ");
scanf("%d",&n);
int i=1;

while(i<n-1){
ptr=ptr->next;
}
ptr->next=ptr->next->next;
}

int main(){
   creation();
   dele();
    print();


}
    
