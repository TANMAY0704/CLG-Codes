#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

struct poly
{ 
    int coeff [11];
    int expo;
};
void insert(poly *p)
{ 
    int i;
    printf ("\nEnter the max degree of poly :");
    scanf("%d",&p->expo);
    for (i=0; i<=10;i++)
    {
        p->coeff[i]=0;
    }
    if (p->expo >10)
    {
        printf ( "\n exponent is out of array range");
        return;
    }
    for (i=0; i<=p->expo;i++)
    {
        printf ( "\nEnter the coefficient of %d exponent :",i);
        scanf("%d",&p->coeff[i]);
    }
}
void display(poly *p)
{
    printf ( "\n coefficient \t Exponent ");
    int i;
    for (i=0; i<=p->expo;i++)
    printf ( "\n%d \t\t %d ",p->coeff[i],i);

}
int max(int a, int b)
{ 
    return (a>b)?a:b;
}
void add( poly *p1, poly *p2, poly *p3)
{
    int i;
    p3->expo= max(p1->expo, p2->expo);
    for( i= p3->expo; i>=0; i--)
    p3->coeff[i]= p1->coeff[i] + p2->coeff[i] ;
}

void multiply(poly *p1, poly *p2, poly *p3)
{
    int i,j;
    p3->expo= p1->expo + p2->expo;
    if( p3->expo > 10)
    {
        printf("cant work");
        p3->expo=0;
        return;
    }
    for(i=0; i<p1->expo+1; i++)
    {
        for(j=0; j<p3->expo+1; j++)
            p3->coeff[i+j] =0;
    }
    for(i=0; i<p1->expo+1; i++)
    {
        for(j=0; j<p3->expo+1; j++)
            p3->coeff[i+j] += p1->coeff[i]*p2->coeff[j];
    }
}
        
int main( )
{
    struct poly a,b,c;
    insert(&a);
    display(&a);
    insert(&b);
    display(&b);
    int s;
    printf("\npress 1 to add\npress 2 to multiply");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            add(&a,&b,&c);
            display(&c);
            break;
        case 2:
            multiply(&a,&b,&c);
            display(&c);
            break;
        default:
            printf("wrong input");
            break;
    }
}



