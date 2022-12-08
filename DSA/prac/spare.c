#include <stdio.h>
#include <stdlib.h>
struct node
{
    int row, column, value;
    struct node *next;
};
struct node *nnode, *start, *curr;
void create()
{
    int i, j, val, row, column;
    printf("Enter the number of rows and columns of the matrix : ");
    scanf("%d %d", &row, &column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value of %d%d element : ", i, j);
            scanf("%d", &val);
            if (val != 0)
            {
                nnode = (struct node *)malloc(sizeof(struct node));
                nnode->row = i;
                nnode->column = j;
                nnode->value = val;
                nnode->next = NULL;
                if (start == NULL)
                {
                    start = curr = nnode;
                }
                else
                {
                    curr->next = nnode;
                    curr = nnode;  
                }
            }
        }
    }
}
void display()
{
    struct node *temp;
    temp = start;
    int count = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("The number of non-zero elements in the matrix is %d\n", count);
    temp = start;
    while (temp != NULL)
    {
        printf("%d\t%d\t%d\n", temp->row, temp->column, temp->value);
        temp = temp->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}