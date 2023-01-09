#include <iostream>
#include <iomanip>
using namespace std;
class A

{
    int a, b;

public:
    A()
    {
        a = 1;
        b = 1;
    }
    A(A &d)
    {
        a = d.b + 1;
        b = d.a + 1;
    }
    void display()
    {
        cout << a << b << endl;
    }
};

int main()
{
    A a1, a2(a1);
    a1.display();
    a2.display();

    return 0;
}