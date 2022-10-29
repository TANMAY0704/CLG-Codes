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
    cout << "OUTPUT "<<ob.total << endl;
    return 0;
}
#include <iostream>
using namespace std;
class test
{
public:
    int a;
};
class D1 : public test
{
public:
    int b;
};
class D2 : public D1
{
public:
    int c;
};
class D3 : public D2
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