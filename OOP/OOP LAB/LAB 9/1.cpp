#include <iostream>
using namespace std;
class xyz
{
    int x;
public:
    xyz()
    {
        x = 0;
    }

    xyz(int a)
    {
        x = a;
    }

    void display()
    {
        cout << "x = " << x;
    }
};
int main()
{
    int j = 30;
    xyz obj;
    obj = j;
    obj.display();
}