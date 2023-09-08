#include <stdio.h>
#include <stdbool.h>
#define Capacity 5
int TheQueue[Capacity];
int front = 0, rear = -1, TotalObject = 0;
bool Nospace()
{
    if (TotalObject == Capacity)
    {
        return true;
    }
    return false;
}
bool Nothing()
{
    if (TotalObject == 0)
    {
        return true;
    }
    return false;
}
void enqueue(int item)
{
    if (Nospace())
    {
        printf("Sorry, The Queue is Full !\n");
        return;
    }
    rear = (rear + 1) % Capacity;
    TheQueue[rear] = item;
    TotalObject++;
}
int dequeue()
{
    if (Nothing())
    {
        printf("Sorry, The Queue is Empty !\n");
        return -1;
    }
    int frontItem = TheQueue[front];
    TheQueue[front] = -1;
    front = (front + 1) % Capacity;
    TotalObject--;
    return frontItem;
}
void PrintQueue()
{
    int i;
    printf("Queue :");
    for (i = 0; i < Capacity; i++)
    {
        printf("%d\t", TheQueue[i]);
    }
    printf("\n");
}
int main()
{
    printf("Implementing The Queue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    PrintQueue();
    enqueue(50);
    PrintQueue();
    enqueue(60);
    printf("Dequeue : %d\n", dequeue());
    PrintQueue();
    enqueue(60);
    PrintQueue();
    return 0;
}
