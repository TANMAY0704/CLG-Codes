#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *end = NULL, *front1 = NULL, *end1 = NULL;
void pop1();
void pop2();
void copy1_2()
{
    if (front == NULL)
        return;
    while (front != NULL && end != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->data = front->data;
        if (front1 == NULL)
        {
            front1 = t;
            end1 = t;
        }
        else
        {
            end1->next = t;
            end1 = t;
        }
        pop1();
    }
}
void copy2_1()
{
    if (front1 == NULL)
        return;
    while (front1 != NULL && end1 != NULL)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->data = front1->data;
        if (front == NULL)
        {
            front = t;
            end = t;
        }
        else
        {
            end->next = t;
            end = t;
        }
        pop2();
    }
}

void push()
{
    int x;
    printf("Enter the data : ");
    scanf("%d", &x);
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    if (front == NULL)
    {
        front = t;
        end = t;
    }
    else
    {
        end->next = t;
        end = t;
    }
}
void pop1()
{
    struct node *p;
    int x = -1;
    if (front == NULL && end == NULL)
        printf("Queue is empty \n");
    else
    {
        struct node *temp = front;
        x = front->data;
        if (front == end)
        {
            front = NULL;
            end = NULL;
        }
        else
        {
            front = front->next;
        }
        free(temp);
    }
}
void pop2()
{
    struct node *p;
    int x = -1;
    if (front1 == NULL && end1 == NULL)
        printf("Queue is empty \n");
    else
    {
        struct node *temp = front1;
        x = front1->data;
        if (front1 == end1)
        {
            front1 = NULL;
            end1 = NULL;
        }
        else
        {
            front1 = front1->next;
        }
        free(temp);
    }
}
void pop()
{
    int x = -1;
    if (front == NULL && end == NULL)
        printf("Queue is empty \n");
    else
    {
        struct node *temp = front;
        x = front->data;
        if (front == end)
        {
            front = NULL;
            end = NULL;
        }
        else
        {
            front = front->next;
        }
        free(temp);
    }
}
void display()
{
    struct node *p;
    p = front;
    if (front == NULL && end == NULL)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : ");
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. Push \t 2. Pop \t 3. Display \t 4. Exit \t Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice");
        }
        return 0;
    }
}