#include <iostream>
using namespace std;
class test
{
    int a, b, c;
public:
    void read_data()
    {
        cout << "Enter data : ";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << a << " " << b << " " << c;
    }
    void operator++()
    {
        a++;
        b++;
        c++;
    }
    void operator--()
    {
        a--;
        b--;
        c--;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    test operator/(test &ob1)
    {
        test ob3;
        ob3.a = a / ob1.a;
        ob3.b = b / ob1.b;
        ob3.c = c / ob1.c;
        return (ob3);
    }
    test operator*(test &ob1)
    {
        test ob3;
        ob3.a = a * ob1.a;
        ob3.b = b * ob1.b;
        ob3.c = c * ob1.c;
        return (ob3);
    }
    test operator-(test &ob1)
    {
        test ob3;
        ob3.a = a - ob1.a;
        ob3.b = b - ob1.b;
        ob3.c = c - ob1.c;
        return (ob3);
    }
    test operator+(test &ob1)
    {
        test ob3;
        ob3.a = a + ob1.a;
        ob3.b = b + ob1.b;
        ob3.c = c + ob1.c;
        return (ob3);
    }
};
int main()
{
    int s;
    test ob, ob1, ob2;
    cout << "1.Unary operator\n2.Binary Overloading\nEnter choice : ";
    cin >> s;
    switch (s)
    {
    case 1:
        ob.read_data();
        cout << "\n1.(++) Operator\n2.(--) Operator\n3.(-) Operator\nEnter choice : ";
        cin >> s;
        switch (s)
        {
        case 1:
            ++ob;
            break;
        case 2:
            --ob;
            break;
        case 3:
            -ob;
            break;
        default:
            cout << "Wrong input";
        }
        cout << "\nAfter Overloading : ";
        ob.display();
        break;
    case 2:
        cout << "1.(+) Operator\n2.(-) Operator\n3.(/) operator\n4.(*)operator\nEnter choice : ";
        cin >> s;
        ob1.read_data();
        cout << "\nBefore overloading\n";
        ob1.display();
        cout << endl;
        ob.read_data();
        cout << "\nBefore overloading\n";
        ob.display();
        cout << endl;
        switch (s)
        {
        case 1:
            ob2 = ob1 + ob;
            break;
        case 2:
            ob2 = ob1 - ob;
            break;
        case 3:
            ob2 = ob1 / ob;
        case 4:
            ob2 = ob1 * ob;
            break;
        default:
            cout << "Wrong input";
        }
        cout << "\nAfter overloading : ";
        ob2.display();
        break;

    default:
        cout << "wrong input";
        break;
    }
}