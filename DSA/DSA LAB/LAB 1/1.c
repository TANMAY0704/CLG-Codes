#include <stdio.h>

struct emp
{
   int id;
   char name[20];
   int age;
   int salary;
};
int main()
{
    emp e;
    printf("enter id");
    scanf("%d",&e.id);
    printf("enter name");
    scanf("%s",e.name);
    printf("enter age");
    scanf("%d",&e.age);
    printf("enter salary");
    scanf("%d",&e.salary);
    
    printf("emp id is %d \n emp name is %s\n emp age is %d\n emp salary is %d\n",e.id,e.name,e.age,e.salary);
    
    


    
}
