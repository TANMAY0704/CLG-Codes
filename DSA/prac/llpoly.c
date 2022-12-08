#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data, exp;
    struct node *next;
};
struct node *start, *curr, *nnode;
struct node *create()
{
    int i, n;
    printf("Enter the number of terms in the polynomial : ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the coefficient of x^%d : ", i);
        scanf("%d", &nnode->data);
        nnode->exp = i;
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
    while (curr->next != NULL)
    {
        if (curr->data != 0)
        {
            printf("%dx^%d + ", curr->data, curr->exp);
        }
        curr = curr->next;
    }
    if (curr->data != 0)
        printf("%dx^%d", curr->data, curr->exp);
}

int main()
{
    create();
    display();
    return 0;
}