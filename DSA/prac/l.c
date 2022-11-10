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
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        nnode->prev = NULL;
        if (start == NULL)
        {
            start = nnode;
            curr = nnode;
        }
        else
        {
            curr->next = nnode;
            nnode->prev = curr;
            curr = nnode;
        }
    }
}
void display()
{
    curr = start;
    printf("The list is: ");
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
int main()
{
    create();
    display();
    return 0;
}