#include <iostream>
using namespace std;
class hours1
{

    int h;

public:
    hours1()
    {

        h = 0
    }
    void show()
    {

        cout << h;
    }
};
class minutes1 // sourse class
{
    int m;

public:
    minutes1(int ms)
    {
        m = ms;
    }
    operator hours1()
    {

        hour1 h1;
        h1.h = m / 60;
        return (h1)
    }
    void show()
    {
        cout << m;
    }
    void getdata()
    {
        return    m;
    }
};