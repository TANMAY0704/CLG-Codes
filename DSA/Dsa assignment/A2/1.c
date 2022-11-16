#include <stdio.h>
#include <stdlib.h>
struct node
{
    int p, t;
    struct node *next;
} *front = NULL, *rear = NULL;
void enque()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)), *curr = front, *prev = front;
    if (ptr == NULL)
    {
        printf("Out of space");
        return;
    }
    printf("1.Local printing\n2.Web applications\n3.I/O interfacing\nEnter type of task: ");
    scanf("%d", &ptr->p);
    printf("Enter time required for the task: ");
    scanf("%d", &ptr->t);
    ptr->next = NULL;
    if (rear == NULL)
    {
        front = rear = ptr;
        return;
    }
    if (ptr->p > front->p)
    {
        ptr->next = front;
        front = ptr;
        return;
    }
    while (curr->p >= ptr->p && curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr->next == NULL && curr->p >= ptr->p)
    {
        curr->next = ptr;
        // ptr->next=NULL;
        return;
    }
    ptr->next = prev->next;
    prev->next = ptr;
}
void deque()
{
    if (front == NULL)
    {
        printf("Underflow!\n");
        return;
    }
    struct node *t = front;
    if (front->p == 1)
        printf("Local printing ");
    else if (front->p == 2)
        printf("Web applications ");
    else
        printf("I/O interfacing ");
    printf("operation with time: %d deleted\n", front->t);
    if (front == rear)
        front = rear = NULL;
    else
        front = front->next;
    free(t);
}
void main()
{
    int ch = 1;
    while (ch != 3)
    {
        printf("1.Enque\n2.Deque\n3.Exit\nEnter choice: ");
        scanf("%d", &ch);
        if (ch == 1)
            enque();
        else if (ch == 2)
            deque();
        else
            printf("Thank you");
    }
}