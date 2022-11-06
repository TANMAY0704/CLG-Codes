#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create()
{
    struct node *nnode;
    int x;
    printf("Enter data (0 for no data): ");
    scanf("%d", &x);
    if (x == 0)
    {
        return NULL;
    }
    nnode = (struct node *)malloc(sizeof(struct node));
    nnode->data = x;
    printf("Enter left child of %d ", x);
    nnode->left = create();
    printf("Enter right child of %d ", x);
    nnode->right = create();
    return nnode;
}
void preorder(struct node *t)
{
    if (t != NULL)
    {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);  
    }
}
void inorder(struct node *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}
void postorder(struct node *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }
}
int main()
{
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root = create();
    printf("\nPreorder traversal is: ");
    preorder(root);
    printf("\nPostorder traversal is: ");
    postorder(root);
    printf("\nInorder traversal is: ");
    inorder(root);
    return 0;
}