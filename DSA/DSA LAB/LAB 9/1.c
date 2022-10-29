#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;

void enque()
{
    struct node *nnode;
    int data;
    nnode = (struct node *)malloc(sizeof(struct node));
    if (nnode == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &data);
        nnode->data = data;
        if (front == NULL)
        {
            front = nnode;
            rear = nnode;
            front->next = nnode;
            rear->next = nnode;
        }
        else
        {
            rear->next = nnode;
            rear = nnode;
            rear->next = front;
        }
    }
}

void deque()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        temp = front;
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nFinal Queue:\n");
        while (temp != rear)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

int main()
{
    int ch;
start:
    printf("\n1.Enque \n2.Deque \n3.Display \n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        enque();
        goto start;
    case 2:
        deque();
        goto start;
    case 3:
        display();
        goto start;
    case 4:
        exit(0);
        break;
    default:
        printf("\nWrong choice. . . \n");
        goto start;
    }
    return 0;
}