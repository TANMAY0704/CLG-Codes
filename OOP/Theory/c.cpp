#include <iostream>
#include <cmath>
using namespace std;
class Rect_C
{
public:
    int x, y;
    void getdata()
    {

        cout << "Enter coordinates : ";
        cin >> x >> y;
    }
};
class Polar_C
{
public:
    int r, a;
    void getdata()
    {
        cout << "Enter coordinates : ";
        cin >> r >> a;
    }
};
class Distance : public Rect_C, public Polar_C
{
public:
    void displayDistance()
    {

        int rt, c;
        Rect_C::getdata();
        Polar_C::getdata();
        rt = x * x + y * y;
        cout << "Distance rect : " << rt << endl;
        c = sqrt((r * cos(a) * r * cos(a)) + (r * sin(a) * r * sin(a)));
        cout << "Distance Polar : " << c << endl;
    }
};

int main()
{
    Distance d;

    d.displayDistance();
    return 0;
}
/*
 #include <iostream>
#include <cmath>
using namespace std;
class Rect_C
{
public:
    void getdata()
    {
        int x, y;
        cout << "Enter coordinates : ";
        cin >> x >> y;
        int rt;
        rt = x * x + y * y;
        cout << "Distance rect : " << rt << endl;
    }
};
class Polar_C
{
public:
    void getdata()
    {
        int r, a, c;
        cout << "Enter coordinates : ";
        cin >> r >> a;
    }
};
class Distance : public Rect_C, public Polar_C
{
public:
    void get_calc()
    {
        int rt,c;
        rt = x * x + y * y;
        cout << "Distance rect : " << rt << endl;
        c = sqrt((r * cos(a) * r * cos(a)) + (r * sin(a) * r * sin(a)));
        cout << "Distance Polar : " << c << endl;
    }
    void displayDistance()
    {
        Rect_C::getdata();
        Polar_C::getdata();
    }
};

int main()
{
    Distance d;
    d.get_calc();
    d.displayDistance();
    return 0;
}*/
