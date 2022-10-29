#include <stdio.h>
struct student
{
    int rlno;
    char name[20];
    int age;
    float cgpa;
};
int main()
{
    struct student a[5];
    int b;
    for(b=0;b<5;b++)
    {
        printf("enter rlno of student %d",b);
        scanf("%d",&a[b].rlno);
        printf("enter name of student %d",b);
        scanf("%s",a[b].name);
        printf("enter age of student %d",b);
        scanf("%d",&a[b].age);
        printf("enter rlno of student %d",b);
        scanf("%f",&a[b].cgpa);
    }
}