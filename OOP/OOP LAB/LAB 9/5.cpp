#include <iostream>
using namespace std;
int main()
{

    float a, b, x;
    cout << "Enter two integer values: ";
    cin >> a >> b;
    x = a / b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << x;
        }
    }
    catch (float)
    {
        cout << "Second value cannot be zero";
    }
    return 0;
}