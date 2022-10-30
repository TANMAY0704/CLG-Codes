#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; 
};
void create(node *start)
{
    struct node *curr;
    int a=1;
    curr=start;
    printf("enter data");
    scanf("%d",&start->data);
    printf("press 1 to continue");
    scanf("%d",&a);
    curr->next=NULL;
    while(a==1)
    {
        
        curr=(struct node*)malloc(sizeof(struct node));
        if(curr==NULL)
        {
            printf("out of memory");
            exit(0);
        }
        printf("enter data");
        scanf("%d",&curr->data);
        start->next=curr;
        start=curr;
        printf("press 1 to continue");
        scanf("%d",&a);
        
    }
    curr->next=NULL;

}
void traverse(struct node *start)
{
    struct node *curr;
    curr=start;
    while(curr!=NULL)
    {
        printf("%d",curr->data);
        curr=curr->next;
    }
    
}
struct node *insert(struct node *start)
{
    struct node *nnode;
    nnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data of new node");
    scanf("%d",&nnode->data);
    nnode->next=start;
    return(nnode);
}
void del(struct node *start)
{
    int n,i;
    struct node *temp;
    printf("enter element to delete");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
      
        start=start->next;
        if(start==NULL)
        {
            printf("underflow");
            exit(0);
        }
    }
    temp=start->next;
    start->next=temp->next;
    free(temp);
}

int main()
{
    struct node *a;
    a=(struct node*)malloc(sizeof(struct node));
    if(a==NULL)
        printf("out of space");
    create(a);
    int s;
    printf("press 1 to print ll\n press 2 to insert a node at the start\npress 3 to delete a node at specific location");
    scanf("%d",&s);
    switch (s)
    {
    case 1:
        traverse(a);
        break;
    case 2:
        a=insert(a);
        traverse(a);
        break;
    case 3:
        del(a);
        traverse(a);
        break;
    default:
        printf("invalid output");
        break;
    }


    

}