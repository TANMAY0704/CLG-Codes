#include <iostream>
using namespace std;
class student
{
    int rollNo;
    char name[30];
    float m1, m2, m3, sum;
    char grade;

public:
    void read_data();
    void display();
};
void student::read_data()
{
    cout << "Enter Roll Number : ";
    cin >> rollNo;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter marks : ";
    cin >> m1 >> m2 >> m3;
    sum = m1 + m2 + m3;
    if (sum > 270)
        grade = 'O';
    else if (sum > 240)
        grade = 'E';
    else if (sum > 210)
        grade = 'A';
    else if (sum > 180)
        grade = 'B';
    else if (sum > 150)
        grade = 'C';
    else if (sum > 120)
        grade = 'D';
    else
        grade = 'E';
}
void student::display()
{
    cout << "\nThe Detalis of the student are : \n";
    cout << "Roll Number : " << rollNo << "\nName : " << name << "\nMarks : " << m1 << " " << m2 << " " << m3 << "\n";
    cout << "The Total marks are : " << sum << "\n";
    cout << "The grade of the Students is : " << grade << "\n";
}
int main()
{
    student std;
    std.read_data();
    std.display();
}
