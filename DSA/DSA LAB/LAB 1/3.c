#include<stdio.h>

struct book

{
         char title[20];
         int bookno;
         float price;

};
int max(struct book a[20],int c)
{
    int d,max,maxd=0;
    max=a[0].price;
    for(d=1;d<c;c++)
        {   
            if(a[d].price>max)
            {
                
                max=a[d].price;
                maxd=d;
            }
        }
    return (maxd);
}


int main()
{

          struct book b[20];
          int n,i,j;
          

          printf("Enter the Number of Books:");
          scanf("%d",&n);
          

          for(i=0;i<n;i++)

          {

                   printf("\nEnter the Book Title:\n");
                   scanf("%s",b[i].title);
                   printf("Enter the Book Number:\n");
                   scanf("%d",&b[i].bookno);
                   printf("Enter the Price of Book:\n");
                   scanf("%f",&b[i].price);
                   
                   
          }
        j=max(b,i);
        printf("the book with the highest price is %d,%s and costs %f",b[j].bookno,b[j].title,b[j].price);
        
          

}

