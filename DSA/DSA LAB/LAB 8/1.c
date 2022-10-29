#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) ((t) = (y), (y) = (x), (x) = (t));
struct node
{
    int rl;
    int height;
    int weight;
    struct node *next;
};
struct node *tops, *topt;
void pusht(struct node *data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Out of memory");
        exit(0);
    }
    temp->rl = data->rl;
    temp->height = data->height;
    temp->weight = data->weight;
    temp->next = topt;
    topt = temp;
}
struct node *popt()
{
    struct node *temp;
    temp = topt;
    topt = topt->next;
    temp->next == NULL;
    return (temp);
}
struct node *pops()
{
    struct node *temp;
    temp = tops;
    tops = tops->next;
    temp->next == NULL;
    return (temp);
}
struct node *pushs()
{
    struct node *nn, *temp;
    nn = (struct node *)malloc(sizeof(struct node *));
    printf("Enter rlno");
    scanf("%d", &nn->rl);
    printf("enter weight and height");
    scanf("%d %d", &nn->weight, &nn->height);
    if (tops == NULL)
    {
        tops = nn;
        tops->next = NULL;
    }
    else
    {
        while (tops->rl > nn->rl)
        {
            pusht(pops());
            if (tops == NULL)
            {
                tops = nn;
                tops->next = NULL;
                goto c;
            }
        }
        nn->next = tops;
        tops = nn;
    c:
        while (topt != NULL)
        {     
            temp = popt();
            temp->next = tops;
            tops = temp;
        }
    }
}
void modify(int r)
{
    struct node *temp;
    while (tops->rl != r)
    {
        pusht(pops());
    }
    printf("enter new weight");
    scanf("%d", &tops->weight);
    while (topt != NULL)
    {
        temp = popt();
        temp->next = tops;
        tops = temp;
    }
}
void display()
{
    struct node *top;
    top = tops;
    while (top != NULL)
    {
        printf("%d%d%d\n", top->rl, top->weight, top->height);
        top = top->next;
    }
}

int main()
{
    int n = 1, rl;
    while (n == 1)
    {
        pushs();
        printf("press 1 to continue");
        scanf("%d", &n);
    }
    display();
    printf("enter rlno whose weight has 2 be changed");
    scanf("%d", &rl);
    modify(rl);
    display();
}