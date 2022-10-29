#include <stdio.h>

struct emp
{
   int id;
   char name[20];
   int age;
   int salary;
};
int max(struct emp a[])
{
    int i,max;
    max=a[0].salary;
    for(i=1;i<5;i++)
    {
        if(max<a[i].salary)
            max=a[i].salary;
    }
    for(i=0;i<5;i++)
    {
        if(max==a[i].salary)
            return(i);
    }
    
}
int main()
{
    struct emp e[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("enter id");
        scanf("%d",&e[i].id);
        printf("enter name");
        scanf("%s",e[i].name);
        printf("enter age");
        scanf("%d",&e[i].age);
        printf("enter salary");
        scanf("%d",&e[i].salary);
    }
    j=max(e);
    
    printf("emp with the max salary's id is %d \n emp name is %s\n emp age is %d\n emp salary is %d\n",e[j].id,e[j].name,e[j].age,e[j].salary);
    return 0;
}