#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;

void push()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        top = top->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
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
            printf("Invalid choice");
        }
    }
    return 0;
}
