#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
public:
    int roll;
    char name[100], branch[30];
    void getdata()
    {
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter Name: ";
        cin >> name;
    }
};
class InternalMarks : virtual public Student
{
public:
    float im[5], tim;
    void getdata()
    {
        cout << "Enter internal marks : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> im[i];
            tim += im[i];
        }
    }
};
class MidSemMarks : virtual public Student
{
public:
    float mm[5], tmm;
    void getdata()
    {
        cout << "Enter Mid MidSem marks : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> mm[i];
            tmm += mm[i];
        }
    }
};
class EndSemMarks : virtual public Student
{
public:
    float em[5], tem;
    void getdata()
    {
        cout << "Enter EndSem marks : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> em[i];
            tem += em[i];
        }
    }
};
class Result : public InternalMarks, public MidSemMarks, public EndSemMarks
{
    float total = 0;
    char grade;

public:
    void calc_grades()
    {
        total = total + tim + tmm + tem;
        if ((total / 500) * 100 >= 90)
            grade = 'A';
        else if ((total / 500) * 100 >= 80)
            grade = 'B';
        else
            grade = 'C';
    }
    void display_grades()
    {
        cout << left << setw(9) << "Roll no" << left << setw(14) << "Name" << left << setw(8) << "Branch" << left << setw(15) << "Internal Marks"
             << left << setw(15) << "Mid Sem Marks" << left << setw(15) << "End Sem Marks" << left << setw(10) << "Total" << left << setw(8) << "Grade"<<endl;

        cout << left << setw(9) << roll << left << setw(14) << name << left << setw(8) << branch << left << setw(15) << tim
             << left << setw(15) << tmm << left << setw(15) << tem << left << setw(10) << total << left << setw(8) << grade;
    }
};
int main()
{
    Result r;
    r.Student::getdata();
    r.InternalMarks::getdata();
    r.MidSemMarks::getdata();
    r.EndSemMarks::getdata();
    r.calc_grades();
    r.display_grades();

    return 0;
}
