#include <iostream>
using namespace std;
class xyz
{
    float x;
public:
    xyz()
    {
        x = 70.55;
    }
    operator int()
    {
        int a;
        a = x;
        return a;
    }
};
int main()
{
    xyz x;
    int f = x;
    cout << f;
}