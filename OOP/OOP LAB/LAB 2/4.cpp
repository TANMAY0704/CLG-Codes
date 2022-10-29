#include <iostream>
using namespace std;
struct student 
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    student s;
    cout << "Enter the details of the student : " << endl;
    cout << "Enrter Roll: ";
    cin >> s.roll;
    cout << "Enter the student name :" ;
    cin >> s.name ;
    cout << "Enter the student marks : ";
    cin >> s.marks ;

    cout << "\nThe details are : \n";
    cout << "Name : " << s.name << "\nRoll Number : " << s.roll << "\nMarks : " << s.marks << "\n";
    return 0 ;
}

