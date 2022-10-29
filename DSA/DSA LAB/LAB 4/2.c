#include <stdio.h>

int main()
{
    int a[4][4],c[4][4],i,j,size1=0,size2=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter element%d%d ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                size1++;
            }
        }
    }
    int b[size1+1][3],p=1;

    b[0][0]=4;
    b[0][1]=4;
    b[0][2]=size1;
    printf("the matrice is\n");
    printf("%d  %d  %d\n",b[0][0],b[0][1],b[0][2]);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]!=0)
            {
                b[p][0]=i;
                b[p][1]=j;
                b[p][2]=a[i][j];
                printf("%d  %d  %d\n",b[p][0],b[p][1],b[p][2]);
                p++;

            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter element%d%d ",i,j);
            scanf("%d",&c[i][j]);
            if(c[i][j]!=0)
            {
                size2++;
            }
        }
    }
    int d[size2+1][3];
    p=1;
    d[0][0]=4;
    d[0][1]=4;
    d[0][2]=size2;
    printf("the matrice is\n");
    printf("%d  %d  %d\n",d[0][0],d[0][1],d[0][2]);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(c[i][j]!=0)
            {
                d[p][0]=i;
                d[p][1]=j;
                d[p][2]=c[i][j];
                printf("%d  %d  %d\n",d[p][0],d[p][1],d[p][2]);
                p++;

            }
        }
    }
    int e[size1+size2+1][3],f[4][4],size3;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            f[i][j]=a[i][j]+b[i][j];
            if(f[i][j]!=0)
            {
                size3++;
            }
        }
    }
    int k[size3+1][3];
    p=1;
    k[0][0]=4;
    k[0][1]=4;
    k[0][2]=size2;
    printf("the matrice is\n");
    printf("%d  %d  %d\n",k[0][0],k[0][1],k[0][2]);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(c[i][j]!=0)
            {
                k[p][0]=i;
                k[p][1]=j;
                k[p][2]=c[i][j];
                printf("%d  %d  %d\n",k[p][0],k[p][1],k[p][2]);
                p++;

            }
        }
    }
    



}