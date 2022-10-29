#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void create(struct node *start)
{
    struct node *temp;
    int s;
    printf("Enter data : ");
    scanf("%d", &start->data);
    start->next = start;
    start->prev = start;
    printf("Press 1 to stop press anything else 2 continue ");
    scanf("%d", &s);
    temp = start;
    while (s != 1)
    {
        start->next = (struct node *)malloc(sizeof(struct node));
        if (start->next == NULL)
        {
            printf("out  of memory");
            exit(0);
        }
        start->next->prev = start;
        start->next->next = temp;
        start = start->next;
        printf("Enter data : ");
        scanf("%d", &start->data);
        printf("Press 1 to stop press anything else 2 continue : ");
        scanf("%d", &s);
    }
}
void print(struct node *start)
{
    struct node *ptr;
    ptr = start;
    printf("%d ", start->data);
    start = start->next;
    while (start != ptr)
    {
        printf("%d ", start->data);
        start = start->next;
    }
}
void insert(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    while (start->next != ptr)
    {
        start = start->next;
    }
    start->next = (struct node *)malloc(sizeof(struct node));
    if (start->next == NULL)
    {
        printf("Out  of memory");
        exit(0);
    }
    printf("Enter data : ");
    scanf("%d", &start->next->data);
    start->next->prev = start;
    start->next->next = ptr;
    ptr->prev = start->next;
}
void dele(struct node *start)
{
    int i, n;
    printf("Enter location to delete ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        start = start->next;
    }
    start->next->prev = start->prev;
    start->prev->next = start->next;
    free(start);
}
int main()
{
    struct node *cll;
    int s;
    cll = (struct node *)malloc(sizeof(struct node));
    if (cll == NULL)
    {
        printf("out  of memory");
        exit(0);
    }
    create(cll);
    printf("1.Display the list\n2.Insert after last pos\n3.Delete at location \n");
    scanf("%d", &s);   
    switch (s)
    {
    case 1:
        print(cll);
        break;
    case 2:
        insert(cll);
        print(cll);
        break;
    case 3:
        dele(cll);
        print(cll);
        break;
    default:
        printf("invalid input");
        break;
        
    }
}
