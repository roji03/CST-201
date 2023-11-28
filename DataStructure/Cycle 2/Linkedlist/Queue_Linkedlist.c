#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;
void enqueue(int);
void dequeue();
void display();
void main()
{
    int choice, value;
    printf("Queue using Linked List");
    for (;;)
    {
        printf("\n1.enqueue\t2.dequeue\t3.Display\t4.Exit\tChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        default:
            printf("Invalid choice");
        }
    }
}
void enqueue(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (front == NULL)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    if (front == NULL)
        printf("Empty Queue");
    else
    {
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}
void display()
{
    if (front == NULL)
        printf("Empty Queue");
    else
    {
        struct node *temp = front;
        printf("Queue: ");
        for (temp; temp->next != NULL; temp = temp->next)
            printf("%d--->", temp->data);
        printf("%d--->NULL", temp->data);
    }
}
