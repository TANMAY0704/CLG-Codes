#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start, *nnode, *curr;
void create()
{
    int i, n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        if (start == NULL)
        {
            start = nnode;
            curr = nnode;
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
    printf("The list is: ");
    while (curr!= NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void insertion()
{

    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &nnode->data);
    nnode->next = start;
    start = nnode;
}
void deletion()
{   
    curr = start;
    start = start->next;
    free(curr);
}
int main()
{
    create();
    display();
    insertion();
    display();
    deletion();
    display();
    return 0;
}