#include <iostream>
using namespace std;
class student
{
    int rollNo;
    char name[30], grade;
    float total, marks[3];

public:
    void read_data();
    void display();
    void get_calc();
};
void student::read_data()
{
    cout << "Enter Roll Number : ";
    cin >> rollNo;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter marks : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
}
void student::get_calc()
{
    total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += marks[i];
    }
    if (total > 270)
        grade = 'O';
    else if (total > 240)
        grade = 'E';
    else if (total > 210)
        grade = 'A';
    else if (total > 180)
        grade = 'B';
    else
        grade = 'C';
}
void student::display()
{
    cout << "\nThe Detalis of the student are : \n";
    cout << "Roll Number : " << rollNo << "\nName : " << name << "\nMarks : " << marks[0] << " " << marks[1] << " " << marks[2] << "\n";
    cout << "The sum is : " << total << "\n";
    cout << "The grade is : " << grade << "\n";
}
int main()
{
    student std;
    std.read_data();
    std.get_calc();
    std.display();
}
