
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
    int i = 1;
    int x;
    char ans;
    do
    {
        printf("Enter the element %d : ", i);
        scanf("%d", &x);
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        if (t == NULL)
            printf("Stack Overflow");
        copy1_2();
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
        copy2_1();
        i++;
        getchar();
        printf("Press y to continue adding or any other key to discontinue : ");
        scanf("%c", &ans);
    } while (ans == 'y');
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
        printf("Deleted Element is : %d", x);
        free(temp);
    }
}

void display()
{
    struct node *t1 = front, *t2 = end;
    if (front == NULL && end == NULL)
        printf("Queue is empty");
    else
    {
        printf("Elements in the queue :- ");
        while (1)
        {
            printf("%d ", t1->data);
            if (t1 == t2)
                break;
            t1 = t1->next;
        }
    }
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf(" 1. Push \t 2. Pop \t 3. Display \t 4. Exit \t Enter your choice : ");
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
        }
        return 0;
    }
}