#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float m1, m2 , m3, sum;
    char grade;

    public:
    void read_data();
    void display();  
};
void student::read_data()
{
    cout << "Enter roll : " ;
    cin >> roll ;
    cout << "Enter name : " ;
    cin >> name ;
    cout << "Enter marks : " ;
    cin >> m1 >> m2 >> m3 ;
    sum = m1 + m2 + m3 ;
    if (sum>270)
        grade = 'o';
    else if (sum>240)
        grade = 'e';
    else if (sum>210)
        grade = 'a';
    else if (sum>180)
        grade = 'b';
    else 
        grade = 'c';   
}
void student::display()
{
    cout << "\nThe details of the student are : \n" ;
    cout << "Roll number : " << roll << "\nName : " << name << "\nMarks : " << m1 <<" "<< m2 << " "<< m3 << "\n"  ;
    cout << "The Total marks are " << sum << "\n" ;
    cout << "The grade of the student is " << grade << "\n" ;
}
int main()
{
    student std;
    std.read_data();
    std.display();
}
