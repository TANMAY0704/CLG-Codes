#include <stdio.h>
#include<stdlib.h>
void main()
{
    int i,len=0, max=0;
    int *ptr;
    printf("ENTER THE LENGTH OF THE LIST=");
    scanf("%d",&len);
    ptr=(int*)malloc(len*sizeof(len));
    printf("ENTER ARRAY ELEMENTS");
    for(i=0;i<len;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(ptr[i]<ptr[j])
            {
                max=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=max;
            }
        }
    }
 printf("SECOND LARGEST NUMBER IS:%d", ptr[1]);
}