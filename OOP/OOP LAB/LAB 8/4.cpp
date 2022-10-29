#include <iostream>
using namespace std;
class abs_base
{
public:
    virtual void display1() = 0;
    virtual void display2() = 0;
    void display3()
    {
        cout << "\nThis is display3 method of base class";
    }
};
class derived : public abs_base
{
public:
    void display1()
    {
        cout << "This is display1 method of base class";
    }
    void display2()
    {
        cout << "\nThis is display2 method of base class";
    }
};
int main()
{
    derived ob;
    ob.display1();
    ob.display2();
    ob.display3();
    return 0;
}