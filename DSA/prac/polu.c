#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff,exp;
    struct node *next;
};
struct node *start;

void create()
{
    struct node *nnode,*temp;
    int i,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the coefficient : ");
        scanf("%d",&nnode->coeff);
        printf("Enter the exponent : ");
        scanf("%d",&nnode->exp);
        nnode->next = NULL;
        if(start == NULL)
        {
            start = nnode;
        }
        else
        {
            temp = start;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nnode;
        }
    }
}
void display()
{
    struct node *temp;
    temp = start;
    while(temp->next != NULL)
    {
        printf("%dx^%d + ",temp->coeff,temp->exp);
        temp = temp->next;
    }
    printf("%dx^%d",temp->coeff,temp->exp);
}
void add()
{
    struct node *temp1,*temp2,*nnode;
    temp1 = start;
    temp2 = start->next;
    while(temp2 != NULL)
    {
        if(temp1->exp == temp2->exp)
        {
            temp1->coeff = temp1->coeff + temp2->coeff;
            temp1->next = temp2->next;
            free(temp2);
            temp2 = temp1->next;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
}

int main()
{   
    create();
    display();
    return 0;
}