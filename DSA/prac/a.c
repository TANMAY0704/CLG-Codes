#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *nnode, *start, *curr, *end;
void create()
{
    int i, n;
    printf("Enter the no. of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        nnode->prev = NULL;
        if (start == NULL)
        {
            start = end = nnode;
        }
        else
        {
            end->next = nnode;
            nnode->prev = end;
            end = nnode;
        }
    }
}
void display()
{
    struct node *temp;
    temp = start;
    while (temp != start)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insert()
{
    nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &nnode->data);
    int ch;
start:
    printf("\n1.At Start\n2.At end\n3.At Specific Loaction\nEnter choice : ");
    scanf("%d", &ch);
    int pos;
    switch (ch)
    {
    case 1:
    s:
        nnode->next = start;
        nnode->prev = end;
        start = nnode;
        break;
    case 2:
    e:
        end->next = nnode;
        nnode->next = start;
        nnode->prev = end;
        start->prev = nnode;
        end->next = nnode;
        end = nnode;
        break;
    case 3:
        printf("Enter position :");
        scanf("%d", &pos);
        if (pos == 0)
        {
            goto s;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                curr = curr->next;
                if (curr->next == start)
                {
                    goto e;
                }
            }

            nnode->next = curr->next;
            nnode->prev = curr;
            curr->next = nnode;
            curr->next->prev = nnode;
        }

    default:
        printf("Wrong choice !!");
        goto start;
    }
}
void delete()
{
    int ch;
    printf("\n1.At Start\n2.At end\n3.At Specific Loaction\nEnter choice : ");
    scanf("%d", &ch);
    int pos;
    switch (ch)
    {
    case 1:
        start = start->next;
        start->prev = end;
        end->next = start;
        break;
    case 2:
        end = end->prev;
        end->next = start;
        start->prev = end;
        break;
    case 3:
        printf("Enter position :");
        scanf("%d", &pos);
        if (pos == 0)
        {
            start = start->next;
            start->prev = end;
            end->next = start;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                curr = curr->next;
            }

            curr->next = curr->next->next;
            curr->next->prev = curr;
        }

    default:
        printf("Wrong choice !!");
    }
}
int main()
{
    create();
start:
    printf("\n1.Display\n2.Insert\n3.Delete\n4.Exit\nEnter choice : ");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        display();
        goto start;
    case 2:
        insert();

        goto start;
    case 3:
        delete();

        goto start;
    case 4:
        exit(0);
    default:
        printf("Wrong choice !!");
        goto start;
    }
    return 0;
}