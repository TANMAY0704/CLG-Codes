#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    int priority;
    struct node *next;
} *front = NULL, *end = NULL;
void enque()
{
    int val, pri;
    struct node *ptr, *p;
    char ans;
    printf("\nPriority 1 for Local Printing\n");
    printf("Priority 2 for Web Applications \n");
    printf("Priority 3 for I/O Interface \n");
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the priority and execution time : ");
    scanf("%d %d", &pri, &val);
    ptr->info = val;
    ptr->priority = pri;
    if (front == NULL || pri > front->priority)
    {
        ptr->next = front;
        front = ptr;
    }
    else
    {
        p = front;
        while (p->next != NULL && p->next->priority >= pri)
            p = p->next;
        ptr->next = p->next;
        p->next = ptr;
    }
}
void deque()
{
    struct node *ptr;
    int d;
    if (front == NULL)
    {
        printf("\n Queue underflow");
        return;
    }
    else
    {
        ptr = front;
        d = ptr->info;
        front = front->next;
        free(ptr);
        printf("Deleted task %d ", d);

    }
}
void display()
{
    struct node *t1 = front, *t2 = end;
    if (front == NULL && end == NULL)
        printf("Queue is empty");
    else
    {
        printf("Tasks in the queue :- \n\n");
        while ((t1 != t2))
        {
            printf("Execution Time %d ", t1->info, t1->priority);
            switch (t1->priority)
            {
            case 1:
                printf("Priority 1 for Local Printing\n");
                break;
            case 2:
                printf("Priority 2 for Web Applications \n");
                break;
            case 3:
                printf("Priority 3 for I/O Interface \n");
                break;
            }
            t1 = t1->next;
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Enque\n2. Deque\n3. Display\n4. Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
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
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}