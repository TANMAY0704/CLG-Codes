#include <iostream>
using namespace std;
class D1
{
public:
    int b;
};
class D2
{
public:
    int c;
};
class D3
{
public:
    int total;
};
class test : public D1, public D2, public D3
{
public:
    int a;
};
int main()
{
    test ob;
    ob.a = 4;
    ob.b = 9;
    ob.c = 1;
    ob.total = ob.a + ob.b + ob.c;
    cout << "OUTPUT " << ob.total << endl;
    return 0;
}
