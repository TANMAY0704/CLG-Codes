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
void inorder(struct node *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}
struct node *check(struct node *t)
{
    if (t != NULL)
    {
        if (t->left != NULL)
        {
            if (t->left->data > t->data)
            {
                printf("The tree is not a BST\n");
                exit(0);
            }
        }
        if (t->right != NULL)
        {
            if (t->right->data < t->data)
            {
                printf("The tree is not a BST\n");
                exit(0);
            }
        }
        check(t->left);
        check(t->right);

    }
}
struct node *search(struct node *t, int key)
{

    if (t == NULL)
    {
        return NULL;
    }
    if (t->data == key)
    {
        return t;
    }
    if (t->data > key)
    {
        return search(t->left, key);
    }
    else
    {
        return search(t->right, key);
    }
}
struct node *search(struct node *t, int key)
{
    while(t != NULL)
    {
        if (t->data == key)
        {
            return t;
        }
        if (t->data > key)
        {
            t = t->left;
        }
        else
        {
            t = t->right;
        }
    }
}
int main()
{
    
    struct node *root ,*temp;
    int key;
    root = (struct node *)malloc(sizeof(struct node));
    root = create();
    inorder(root);
    check(root);
    printf("\nThe tree is a BST\n");
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    temp = search(root, key);
    if (temp == NULL)
    {
        printf("The key is not present in the tree\n");
    }
    else
    {
        printf("The key is present in the tree\n");
    }
    return 0;
}