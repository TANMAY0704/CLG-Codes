#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    double salary;
public:
    virtual void emp()
    {}
};
class Regular : public Employee
{
    double DA;
    double HRA;
    double basic_salary;
public:
    void emp(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }
    void display()
    {
        cout << "\nSalary of the Regular employee is "
             << (DA + HRA + basic_salary);
    }
};
class PartTime : public Employee
{
    int number_of_hours;
    double pay_per_hour;
public:
    void emp(int n, double p)
    {
        number_of_hours = n;
        pay_per_hour = p;
    }
    void display()
    {
        cout << "\nSalary of the part-time employee is "
             << (number_of_hours * pay_per_hour) << endl;
    }
};
int main()
{
    Regular r;
    r.emp(2000, 3000, 10000);
    r.display();
    PartTime p;
    p.emp(8, 800);
    p.display();
    return 0;
}