#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};

struct node *front, *rear;
int enque()
{
    struct node *nnode, *temp;
    int data;
    nnode = (struct node *)malloc(sizeof(struct node));
    if (nnode == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &nnode->data);
        printf("Enter the priority: ");
        scanf("%d", &nnode->priority);
        if (front == NULL)
        {
            front = nnode;
            rear = nnode;
            front->next = NULL;
            rear->next = NULL;
        }
        else if (front->priority > nnode->priority)
        {
            nnode->next = front;
            front = nnode;
        }
        else
        {
            temp = front;
            while (temp->next != NULL && temp->next->priority <= nnode->priority)
            {
                temp = temp->next;
            }
            if (temp == rear && temp->priority > rear->priority)
            {

                rear->next = nnode;
                rear = nnode;
                rear->next = NULL;
            }
            else
            {
                nnode->next = temp->next;
                temp->next = nnode;
            }
        }
        return (0);
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
        while (temp->next != NULL)
        {
            printf("%d(%d)<-", temp->data, temp->priority);
            temp = temp->next;
        }
        printf("%d(%d)", temp->data, temp->priority);
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