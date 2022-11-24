#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *start, *curr, *nnode, *end;
void create()
{
    int n, i;
    printf("Ente the number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &nnode->data);
        if (start == NULL)
        {
            start = end = nnode;
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
    curr = start;
    while (curr->next != start)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("%d ", curr->data);
}
void insert()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    curr = start;
    while (curr->next != start)
    {
        curr = curr->next;
    }
    curr->next = nnode;
    nnode->prev = curr;
    end = nnode;
    end->next = start;
    
}
int main()
{
    create();
    display();
    insert();
    display();
    return 0;
}