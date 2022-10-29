#include <iostream>
using namespace std;
class student 
{
    int rollNo;
    char name[30];
    float m1 , m2, m3, sum;

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
    cin >> m1 >> m2 >> m3;
    sum = m1 + m2 + m3;
}
void student:: display()
{
    cout << "\nThe Detalis of the student are : \n";
    cout << "Roll Number : " << rollNo << "\nName : " << name << "\nMarks : " << m1 << " " << m2 << " "<< m3 << "\n";
    cout << "The Total marks are : " << sum << "\n"; 
}
int main()
{
    student std;
    std.read_data();
    std.display();

}
