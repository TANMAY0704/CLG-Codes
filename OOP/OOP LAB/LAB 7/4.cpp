#include <iostream>
using namespace std;
class test
{
    int a, b, c;

public:
    void read_data(int, int, int);
    void display()
    {
        cout << a << "\t" << b << "\t" << c;
    }
    test operator-(test);
};
void test::read_data(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
test test::operator-(test a1)
{
    test temp;
    temp.a = a - a1.a;
    temp.b = b - a1.b;
    temp.c = c - a1.c;
    return temp;
}
int main()
{
    test ob1, ob2;
    ob1.read_data(5, 16, 72);
    ob1.display();
    cout << endl;
    ob2.read_data(14, 3, 56);
    ob2.display();
    cout << "\nAfter overloading : ";
    test ob = ob1 - ob2;
    ob.display();
}