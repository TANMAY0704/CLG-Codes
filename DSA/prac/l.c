#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *start, *curr, *nnode;
void create()
{
    int i, n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        if (start == NULL)
        {
            start = curr = nnode;
        }
        else
        {
            curr->next = nnode;
            curr = nnode;
        }
    }
}
void display()
{
    curr = start;
    printf("The list is : ");
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void insert()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d", &nnode->data);
    curr = start;
    int pos , i ;
    printf("Enter the pos :");
    scanf("%d", &pos);
    for ( i = 1; i < pos; i++)
    {
        curr = curr->next;
    }
    nnode->next = curr->next;
    curr->next = nnode;
    
}
int main()
{
    create();
    display();
    insert();
    display();
    return 0;
}