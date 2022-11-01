#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(struct node *start)
{
    struct node *curr;
    int a;

    curr = start;
    printf("Enter data : ");
    scanf("%d", &curr->data);
    printf("Press 1 to continue : ");
    scanf("%d", &a);
    curr->next = NULL;
    while (a == 1)
    {
        curr = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &curr->data);
        start->next = curr;
        start = curr;
        printf("Press 1 to continue : ");
        scanf("%d", &a);
    }
    curr->next = NULL;
}
void display(struct node *start)
{
    struct node *curr;
    curr = start;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void insert(struct node *start)
{
    struct node *nnode, *curr;
    nnode = (struct node *)malloc(sizeof(struct node));
    int choice;
    printf("\n1.At Start\n2.At End\n3.At Specific location\nEnter choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        nnode->next = start;
        printf("Enter data of new nod : ");
        scanf("%d", &nnode->data);
        nnode = start;
    }
    else if (choice == 2)
    {
        curr = start;
        printf("Enter data of new nod : ");
        scanf("%d", &nnode->data);
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = nnode;
        nnode->next = NULL;
    }
    else
    {
        curr = start;
        int s;
        printf("Enter loaction : ");
        scanf("%d", &s);
        printf("Enter data of new nod : ");
        scanf("%d", &nnode->data);
        for (int i = 1; i < s; i++)
        {
            curr = curr->next;
        }
        nnode->next = curr->next;
        curr->next = nnode;
    }
}
void delete(struct node *start)
{
    struct node *temp, *curr;
    int choice;
    curr = start;
    printf("\n1.At Start\n2.At End\n3.At Specific location\nEnter choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        start = start->next;
        free(curr);
    }
    else if (choice == 2)
    {

        while (curr->next != NULL)
        {
            temp = curr;
            curr = curr->next;
        }
        temp->next = NULL;
        free(curr);
    }
    else
    {
        int s;
        printf("Enter loaction : ");
        scanf("%d", &s);
        for (int i = 1; i < s-1; i++)
        {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        
    }
}
int main()
{
    struct node *a;
    a = (struct node *)malloc(sizeof(struct node));
    create(a);
    display(a);
    insert(a);
    display(a);
    delete (a);
    display(a);
    return 0;
}