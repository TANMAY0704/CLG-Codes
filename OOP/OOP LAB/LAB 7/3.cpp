#include <iostream>
using namespace std;
class test
{
public:
    int a;
};
class D1 : virtual public test
{
public:
    int b;
};
class D2 : virtual public test
{
public:
    int c;
};
class D3 : public D1, public D2
{
public:
    int total;
};
int main()
{
    D3 ob;
    ob.a = 4;
    ob.b = 9;
    ob.c = 1;
    ob.total = ob.a + ob.b + ob.c;
    cout << ob.total << endl;
    return 0;
}