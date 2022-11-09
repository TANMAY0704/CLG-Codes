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
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void insertion()
{
    int s;
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &nnode->data);
    printf("\n1.At Start\n2.At End\n3.At Any Position: ");
    scanf("%d", &s);
    if (s == 1)
    {
        nnode->next = start;
        start = nnode;
    }
    else if (s == 2)
    {
        curr = start;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = nnode;
        nnode->next = NULL;
    }
    else if (s == 3)
    {
        int pos, i;
        printf("Enter the position: ");
        scanf("%d", &pos);
        curr = start;
        for (i = 1; i < pos - 1; i++)
        {
            curr = curr->next;
        }
        nnode->next = curr->next;
        curr->next = nnode;
    }
}
void deletion()
{
    int s;
    printf("\n1.At Start\n2.At End\n3.At Any Position: ");
    scanf("%d", &s);
    if (s == 1)
    {
        curr = start;
        start = start->next;
        free(curr);
    }
    else if (s == 2)
    {
        struct node *temp;
        curr = start;
        while (curr->next != NULL)
        {
            temp = curr;
            curr = curr->next;
        }
        temp->next = NULL;
        free(curr);
    }
    else if (s == 3)
    {
        int pos, i;
        printf("Enter the position: ");
        scanf("%d", &pos);
        curr = start;
        for (i = 1; i < pos - 1; i++)
        {
            curr = curr->next;
        }
        curr->next = curr->next->next;
    }
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