#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *front, *rear;
void enque()
{
    struct node *nnode;
    int data;
    nnode = (struct node *)malloc(sizeof(struct node));
    if (nnode == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter data : ");
        scanf("%d",)
    }

}

int main()
{
    return 0;
}