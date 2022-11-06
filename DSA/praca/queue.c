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
    nnode = (struct node *)malloc(sizeof(struct node));
    if (nnode == NULL)
    {
        printf("Overflow!\n");
    }
    else
    {
        printf("Enter Data : ");
        scanf("%d", &nnode->data);
        if (front == NULL)
        {
            front = rear = nnode;
            front->next = NULL;
        }
        else
        {
            rear->next = nnode;
            rear = nnode;
            rear->next = NULL;
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
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue is : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int a;
    while (1)
    {
        printf("\n1.Enque\n2.Deque\n3.Display\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
            return 0;
        }
    }
}