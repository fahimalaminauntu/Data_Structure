#include <stdio.h>
#define Capacity 3
int stack[Capacity];
int top = -1;

void push(int x)
{
    if (top < Capacity - 1)
    {
        top = top + 1;
        stack[top] = x;

        printf("Successfully Added Item : %d\n", x);
    }
    else
    {
        printf("Exception ! No Spaces\n");
    }
}
int pop()
{
    if (top >= 0)
    {

        int Value = stack[top];
        top = top - 1;
        return Value;
    }
    printf(" Exception From Pop :  Empty here\n");
    return -1;
}
int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("Exception From peek ! nothing here\n");
    return -1;
}

int main()
{
    printf("Implementing My Stack \n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop item :%d\n", pop());
    push(40);
    printf("Top of Stack :%d\n", peek());
    return 0;
}