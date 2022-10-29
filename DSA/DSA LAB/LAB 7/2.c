#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *push(struct node *top)
{

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("enter data");
    scanf("%d", &temp->data);
    temp->next = top;
    top = temp;
    return (top);
}
struct node *pop(struct node *top)
{
    struct node *temp;
    int temp_data;
    temp = top;
    top = top->next;
    temp_data = temp->data;
    free(temp);
    return (top);
}
void dispaly(struct node *top)
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *a;
    int i;
    a = (struct node *)malloc(sizeof(struct node));
    if (a == NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("enter data");
    scanf("%d", &a->data);
    a->next = NULL;
r:
    printf("1.push\n2.pop\n3.display\nExit");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        a = push(a);
        goto r;
        break;
    case 2:
        a = pop(a);
        goto r;
        break;
    case 3:
        dispaly(a);
        break;
    default:
        printf("EXIT");
        break;
    }
}