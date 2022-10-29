#include <iostream>
using namespace std;
struct student
{
    int rlno;
    int age;
    char name;
};
int main()
{
    struct student a;
    cout<<"enter rlno name and age";
    cin>>a.rlno>>a.name>>a.age;
    cout<<"the rlno is "<<a.rlno<<" the name is "<<a.name<<" the age is "<<a.age;


}


