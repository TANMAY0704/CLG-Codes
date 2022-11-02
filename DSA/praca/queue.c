#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *front, *rear;
void enque()
{
    struct node *nnode;
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    if (front == NULL)
    {
        front = rear = nnode;
        front->next = NULL;
    }
    else
    {
        rear->next=nnode;
        rear = nnode;
        rear->next=NULL;
    } 
}
void display()
{
    struct node *curr;
    curr=front;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }

}



int main()
{
    void enque();
    void display();
    return 0;
}