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
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        if (start == NULL)
        {
            start = curr = nnode;
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
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}
void insertion()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    nnode->next = NULL;
    curr = start;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = nnode;
    nnode->prev = curr;
}
void delete()
{
    curr = start;
    start = start->next;
    start->prev = NULL;
}
int main()
{
    create();
    int ch;
    while (1)
    {
        printf("\n1.Display\n2.Insertion\n3.Deletion\n4.Exit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            insertion();
            display();
            break;
        case 3:
            delete ();
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}