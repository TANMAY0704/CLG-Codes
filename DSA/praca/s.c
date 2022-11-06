#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *start, *nnode, *curr;
void create()
{
    int a;
    start = curr = nnode;
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    printf("Press 1 to continue : ");
    scanf("%d", &a);
    while (a == 1)
    {
        start = curr = nnode;
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d ", &nnode->data);
        nnode->next = curr;
        nnode = curr;
        printf("Press 1 to continue :   ");
        scanf("%d", &a);
    }
    nnode->next = NULL;
}

void display()
{
    curr = start;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

int main()
{
    create();
    display();
    return 0;
}