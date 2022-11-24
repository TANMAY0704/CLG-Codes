#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start, *curr, *nnode;
void create()
{
    int a;
    start = curr = nnode;
            nnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &nnode->data);
    nnode->next = NULL;
    printf("do you want to continue\n");
    scanf("%d", &a);
    while (a == 1)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        curr->next = nnode;
        curr = nnode;
        printf("do you want to continue\n");
        scanf("%d", &a);
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
int main()
{
    create();
    display();
    return 0;
}