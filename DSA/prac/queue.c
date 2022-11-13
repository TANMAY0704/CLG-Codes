#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data, priority;
    struct node *next;
};
struct node *front, *rear, *nnode;
void enque()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    printf("Enter the priority: ");
    scanf("%d", &nnode->priority);
    if (front == NULL)
    {
        front = rear = nnode;
        front->next = NULL;
    }
    else if (front->priority > nnode->priority)
    {
        nnode->next = front;
        front = nnode;
    }
    else
    {
        struct node *temp;
        temp = front;
        while (temp->next != NULL && temp->next->priority <= nnode->priority)
        {
            temp = temp->next;
        }
        if (temp == rear && temp->priority > nnode->priority)
        {
            rear->next = nnode;
            rear = nnode;
            rear->next = NULL; /* code */
        }
        else
        {
            nnode->next = temp->next;
            temp->next = nnode;
        }
    }
}
void display()
{
    struct node *temp;
    printf("Queue : ");
    temp = front;
    while (temp != NULL)
    {
        printf("%d->%d ", temp->data, temp->priority);
        temp = temp->next;
    }
}
void deque()
{
    struct node *temp;
    temp = front;
    front = front->next;
    free(temp);
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