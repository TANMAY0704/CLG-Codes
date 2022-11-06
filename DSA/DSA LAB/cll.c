// circular linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *nnode, *start, *end;
void create()
{
    int i, n;
    printf("enter the number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enterr data : ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        nnode->prev = NULL;
        if (start == NULL)
        {
            start = nnode;
            end = nnode;
        }
        else
        {
            end->next = nnode;
            nnode->prev = end;
            end = nnode;
        }
    }
    end->next = start;
    start->prev = end;
}
void display()
{
    struct node *temp;
    temp = start;
    while (temp->next != start)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}
void insertion()
{   
    int ch;
    printf("\nAt start press 1 and at end press 2 and at any position press 3");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            nnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data : ");
            scanf("%d", &nnode->data);
            nnode->next = start;
            nnode->prev = end;
            start->prev = nnode;
            end->next = nnode;
            start = nnode;
            break;
        }
        case 2:
        {
            nnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data : ");
            scanf("%d", &nnode->data);
            nnode->next = start;
            nnode->prev = end;
            start->prev = nnode;
            end->next = nnode;
            end = nnode;
            break;
        }
        case 3:
        {
            int pos, i;
            struct node *temp;
            temp = start;
            printf("Enter position : ");
            scanf("%d", &pos);
            for (i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            nnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data : ");
            scanf("%d", &nnode->data);
            nnode->next = temp->next;
            nnode->prev = temp;
            temp->next->prev = nnode;
            temp->next = nnode;
            break;
        }
    }
}
int main()
{   
    create();
    display();
    insertion();
    display();
    return 0;
}