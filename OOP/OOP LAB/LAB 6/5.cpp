#include <iostream>
using namespace std;
class test
{
    int a, b, c;

public:
    void read_data(int x, int y, int z);
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
    void operator--();
};
void test ::read_data(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
void test ::operator--()
{
    a = --a;
    b = --b;
    c = --c;
}
int main()
{
    test ob;
    ob.read_data(12, 43, 12);
    cout << "Before overloading : ";
    ob.display();
    --ob;
    cout << "After overloading : ";
    ob.display();
    return 0;
}