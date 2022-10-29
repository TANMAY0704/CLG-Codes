#include <stdio.h>
#include <stdlib.h>
#define max 20
void create(int a[max][max],int b,int c)
{
 
    int i,j;
  
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element %d %d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
}
void sparse(int a[max][max],int b,int c,int d[max][3])
{
    int i,j,k=1;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                d[k][0]=i;
                d[k][1]=j;
                d[k][2]=a[i][j];
                k++;
            }
        }
    }
    d[0][0]=b;
    d[0][1]=c;
    d[0][2]=k-1;
}
void add(int a[max][3],int b[max][3],int c[max][3])
{
    int i=0,j=0,k=0,l,m;
    if(a[0][0]!=b[0][0]||a[0][1]!=b[0][1])
    {
        printf("they cant b added");
        exit;
    }
    i++;
    j++;
    k++;
    while(i<a[0][2]+1&&j<b[0][2]+1)
    {
        if(a[i][0]<b[j][0]||a[i][0]==b[j][0]&&a[i][1]<b[j][1])
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            i++;
            k++;
        }
        else if(b[j][0]<a[i][0]||a[i][0]==b[j][0]&&b[j][1]<a[i][1])
        {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2];
            j++;
            k++;
        }
        else if(a[0][0]==b[0][0]&&a[0][1]==b[0][1])
        {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2]+a[i][2];
            j++;
            i++;
            k++;
        }
    
    }
    while(i<a[0][2]+1)
    {
        c[k][0]=a[i][0];
        c[k][1]=a[i][1];
        c[k][2]=a[i][2];
        i++;
        k++; 
    }
    while(j<b[0][2]+1)
    {
        c[k][0]=b[j][0];
        c[k][1]=b[j][1];
        c[k][2]=b[j][2];
        j++;
        k++;
    }
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];
    c[0][2]=k-1;
}
void print(int a[max][3])
{
    int i=0;
    for(i=0;i<a[0][2]+1;i++)
    {   

        printf("%d  %d  %d\n",a[i][0],a[i][1],a[i][2]);
    }
}
int main()
{
    int a[max][max],b[max][max],c[max][3],d[max][3],e[max][3],ra,ca,rb,cb;
    printf("enter number of rows");
    scanf("%d",&ra);
    printf("enter no of colums");
    scanf("%d",&ca);
    create(a,ra,ca);
    printf("enter number of rows");
    scanf("%d",&rb);
    printf("enter no of colums");
    scanf("%d",&cb);
    create(b,rb,cb);
    sparse(a,ra,ca,c);
    sparse(b,rb,cb,d);
    add(c,d,e);
    print(c);
    print(d);
    print(e);




}