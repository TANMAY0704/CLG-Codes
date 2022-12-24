#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node *top;
int push(int data)
{
    
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=top;
    top=temp;
    
}
int pop()
{
    struct node *temp;
    int data;
    temp=top;
    top=top->next;
    data=temp->data;
    free(temp);
    return(data);
}
void dispaly()
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int data,i,n,j;
    printf("enter no of elemnts in stack");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data");
        scanf("%d",&data);
        push(data);
    }
    printf("enter data which has to be found");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(pop()==data)
            j=i;
    }
    printf("%d pop operations had to bve performed to reach %d",j,data);
}