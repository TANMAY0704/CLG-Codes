#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *nnode;

struct node *create()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data (0 for no data): ");
    scanf("%d", &nnode->data);
    if (nnode->data == 0)
    {
        return NULL;
    }
    else
    {
        printf("Left child of %d\n", nnode->data);
        nnode->left = create();
        printf("Right child of %d\n", nnode->data);
        nnode->right = create();
    }
}
void display(struct node *t)
{
    if (t != NULL)
    {
        display(t->left);
        printf("%d ", t->data);
        display(t->right);      
    }
    
}
int main()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n = create();
    display(n);
    return 0;
}