#include <stdio.h>
#include <stdlib.h>
struct node *creatLinkedlist(int arr[], int size);
void print(struct node *head);
void insert(struct node *head, int position, int value);
struct node
{
    int Data;
    struct node *next;
};
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    struct node *head = NULL;
    head = creatLinkedlist(a, 5);
    Print(head);
    insert(head, 1, 555);
    return 0;
}
void insert(struct node *head, int position, int value)
{
    struct node *temp = head;
    int counter = 0;
    while (temp != NULL)
    {
        counter++;
        if (counter == position)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->Data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    Print(head);
}
struct node *creatLinkedlist(int arr[], int size)
{
    struct node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->Data = arr[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}
void Print(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->Data);
        temp = temp->next;
    }
    printf("NULL\n");
}