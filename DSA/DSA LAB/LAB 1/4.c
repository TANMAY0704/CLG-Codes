#include <stdio.h>
int distance(int a,int b,int*c)
{
    int posa,posb,diff;
    for(posa=0;posa<10;posa++)
        {
            if(c[posa]==a)
                break;
        }
     for(posb=0;posb<10;posb++)
        {
            if(c[posb]==b)
                break;
        }
    if(posa>posb)
        diff=posa-posb;
    else
        diff=posb-posa;
    return(diff);
    


}
int main()
{
    int x,y,z[10],a;
    for(a=0;a<10;a++)
        {
           printf("enter %d element",a);
           scanf("%d",&z[a]); 
        }
    for(a=0;a<10;a++)
        {
           printf(" %d ",z[a]);  
        }
    printf("\nenter the numbers btw which the distance has 2 b found ");
    scanf("%d%d",&x,&y);
    printf("%d",distance(x,y,z));

    return 0;
}