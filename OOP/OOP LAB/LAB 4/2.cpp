#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    int rollNo;
    char name[30];
    float total, marks[3];
    char grade;

public:
    void read_data();
    void display();
    void get_calc();
};
void L()
{
    int i = 0;
    cout << endl;
    for (i = 0; i < 30; i++)
    {
        cout << "- ";
    }
    cout << endl;
}
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
    cout << left << setw(10) << rollNo << left << setw(20) << name << left << setw(5) << marks[0]
         << left << setw(5) << marks[1] << left << setw(5) << marks[2] << left << setw(7) << total << left << setw(7) << grade;
}
int main()
{
    student std[5];
    for (int k = 0; k < 5; k++)
    {
        std[k].read_data();
    }
    for (int k = 0; k < 5; k++)
    {
        std[k].get_calc();
    }

    cout << "The details for students are " << endl;
    L();
    cout << left << setw(10) << "Roll NO. " << left << setw(20) << "Name " << left << setw(5) << "M1 " << left << setw(5) << "M2 "
         << left << setw(5) << "M3" << left << setw(7) << "Total " << left << setw(7) << "Grade";
    L();

    for (int k = 0; k < 5; k++)
    {
        std[k].display();
        L();
    }
}