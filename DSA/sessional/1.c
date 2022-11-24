#include <stdio.h>
#include <stdlib.h>
int tos = -1;
int s[50], t[50];
char push2(int x[], int n)
{
    if (tos == 49)
    {
        printf("Stack Overflow");
    }
    else
    {
        tos++;
        x[tos] = n;
    }
}

char push1(int x[], int n)
{
    if (tos == 49)
    {
        printf("Stack overflow");
    }
    else
    {
        tos++;
        x[tos] = n;
    }
}
char pop1(int x[])
{
    if (tos == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        tos--;
    }
    push2( t, tos);
}
void display(int s[])
{
    int i;
    for (i = 0; i <= tos; i++)
    {
        printf("%d ", t[i]);
    }
}

int main()
{
    int n, i;
    char ch ;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &ch);
        push1(s, ch);
    }
    for ( i = n; i <= 0; i++)
    {
        pop1(s);
    }
    
    display(t);


    return 0;
}
