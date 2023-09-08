#include <stdio.h>
#include <stdlib.h>
struct node *creatLinkedlist(int arr[], int size);
void insertion(struct node *head, int data);
void printlist(struct node *head);
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
    printlist(head);

    printf("NULL\n");
    insertion(head, 69);
    printf("NULL");
    return 0;
}
void insertion(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->Data = data;
    temp->next = head;
    struct node *newhead = temp;
    struct node *current = newhead;
    newhead = temp;
    printlist(newhead);
}
void printlist(struct node *head)
{
    struct node *current = head;

    while (current != NULL)
    {
        printf("%d ->", head->Data);
        current = current->next;
    }
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