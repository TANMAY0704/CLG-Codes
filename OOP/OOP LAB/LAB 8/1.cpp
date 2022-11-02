#include <iostream>
using namespace std;

class shape
{
public:
    virtual void area() = 0;
};
class circle
{
    float r;
public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "Area of circle : " << (3.14 * r * r) << endl;
    }
};
class square  
{
    int s;
public:
    void area()
    {
        cout << "\nEnter side: ";
        cin >> s;
        cout << "Area of square : " << s * s << endl;
    }
};
class triangle 
{
    int h, b;
    float a;
public:
    void area()
    {
        cout << "\nEnter height : ";
        cin >> h;
        cout << "Enter breadth : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "Area of triangle : " << a << endl;
    }
};
int main()
{
    circle c;
    c.area();
    square s;
    s.area();
    triangle t;
    t.area();
    return (0);
}