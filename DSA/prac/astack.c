#include <stdio.h>
#include <stdlib.h>
int tos = -1;
int s[50];
void push(int s[], int x)
{
    if (tos == 49)
    {
        printf("Stack overflow");
        return;
    }
    tos++;
    s[tos] = x;
}
int pop(int s[])
{
    if (tos == -1)
    {
        printf("Stack underflow");
        return -1;
    }
    int x = s[tos];
    tos--;
    return x;
}
void display(int s[])
{
    int i;
    if (tos == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("\nStack elements are: ");
    for (i = tos; i >= 0; i--)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
}
void reservedisplay(int s[])
{
    int i;
    if (tos == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("\nStack elements are: ");
    for (i = 0; i <= tos; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
}
int main()
{
    int ch, x;
    while (1)
    {   
        printf("\n1.Push\n2.Pop\n3.Display\n4.Reserve Display\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to be pushed: ");
            scanf("%d", &x);
            push(s, x);
            break;
        case 2:
            x = pop(s);
            printf("Popped element is %d", x);
            break;
        case 3:
            display(s);
            break;
        case 4:
            reservedisplay(s);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}
