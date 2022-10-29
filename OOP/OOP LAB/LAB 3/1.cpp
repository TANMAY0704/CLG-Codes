#include <iostream>
using namespace std;
class student 
{
    int rollNo;
    char name[30];
    float marks;

    public:
    void read_data();
    void display();
};
void student::read_data()
{
    cout << "Enter Roll Number : " ;
    cin >> rollNo;
    cout << "Enter Name : " ;
    cin >> name;
    cout << "Enter marks : " ;
    cin >> marks;
}
void student:: display()
{
    cout << "\nThe Detalis of the student are : \n";
    cout << "Roll Number : " << rollNo << "\nName : " << name << "\nMarks : " << marks ;
}
int main()
{
    student std;
    std.read_data();
    std.display();

}

