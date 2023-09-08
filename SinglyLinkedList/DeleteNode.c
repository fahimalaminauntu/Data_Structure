#include <stdio.h>
#include <stdlib.h>
struct node *creatLinkedlist(int arr[], int size);
void Print(struct node *head);
struct node *delete(struct node *head, int Data);

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
    struct node *newHead = delete (head, 40);
    Print(newHead);
    return 0;
}
struct node *delete(struct node *head, int Data)
{
    struct node *DummyHead = (struct node *)malloc(sizeof(struct node));
    DummyHead->next = head;
    struct node *temp = DummyHead;
    while (temp->next != NULL)
    {
        if (temp->next->Data == Data)
        {
            temp->next = temp->next->next;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    return DummyHead->next;
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