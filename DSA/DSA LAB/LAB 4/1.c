#include <stdio.h>

int main()
{
    int a[4][4],i,j,size=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter element%d%d ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                size++;
            }
        }
    }
    int b[size+1][3],p=1;
    b[0][0]=4;
    b[0][1]=4;
    b[0][2]=size;
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

}