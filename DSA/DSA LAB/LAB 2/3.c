#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n[30],a,b,i,c,d,e,t;
    printf("enter number of elements in the array");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("enter element");
        scanf("%d",&n[i]);
    }
    a:
    printf("\n press 1 to Display the content of the array\n press 2 for Insertion at a specific position\npress 3 for Deletion at a specific position");
    scanf("%d",&b);
    if(b==1)
    {
        for(i=0;i<a;i++)
        {
            printf("%d\n",n[i]);
        }
    }
    else if(b==2)
    {
        printf("enter element and pos");
        scanf("%d%d",&c,&d);
        for(i=a+1;i>=d;i--)
        {
            n[i]=n[i-1];
        }
        a++;


    }
    else if(b==3)
    {
        printf("enter pos to delete");
        scanf("%d",&e);
        for(i=e;i<a;i++)
        {
            n[i]=n[i+1];
           
        }
        a=a-1;
    }
    else
        printf("not valid input");
    
    printf("enter 0 to continue");
    scanf("%d",&t);
    if(t==0)
        goto a;
    
    return 0;
}